package com.servlets;


import java.io.IOException;

import org.thymeleaf.TemplateEngine;
import org.thymeleaf.context.Context;
import org.thymeleaf.templateresolver.FileTemplateResolver;

import com.services.HtmlTags;
import com.services.UserDatabase;

import jakarta.servlet.ServletException;
import jakarta.servlet.http.Cookie;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

public class signin extends HttpServlet {

    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        TemplateEngine engine = new TemplateEngine();

        FileTemplateResolver fileTemplateResolver = new FileTemplateResolver();
        fileTemplateResolver.setTemplateMode("HTML5");
        fileTemplateResolver.setPrefix("./../webapps/thymeleaf/WEB-INF/templates/");
        fileTemplateResolver.setSuffix(".html");

        Context c = new Context();
        c.setVariable("temp", "context working");

        
        engine.setTemplateResolver(fileTemplateResolver);

        String response = engine.process("signin",c);

        resp.getWriter().print(response);
    }

    @Override
    public void doPost(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException {
        String name = req.getParameter("username");
        String password = req.getParameter("password");
        Cookie cookies[] = req.getCookies();
        String cookieValue = "-1";

        if (cookies != null) {
            for (Cookie cookie : cookies) {
                if (cookie.getName() == "id") {
                    cookieValue = cookie.getValue();
                }
            }
        }

        if (cookieValue != "-1") {

            Cookie c = new Cookie("id", cookieValue);
            c.setPath("/");

            res.addCookie(c);
            res.sendRedirect("http://localhost:8080/thymeleaf/");

        } else {

            if (UserDatabase.userToCookie.containsKey(name)) {

                String PassWord = UserDatabase.userName.get(UserDatabase.userToCookie.get(name)).getPassword();

                if (PassWord.equals(password)) {

                    Cookie c = new Cookie("id", UserDatabase.userToCookie.get(name));
                    c.setPath("/");
                    res.addCookie(c);
                    res.sendRedirect("http://localhost:8080/thymeleaf/");

                } else {

                    res.getWriter().print("Invalid username or password");
                    res.setHeader("Refresh", "3,http://localhost:8080/thymeleaf/signin");

                }
            } else {

                res.getWriter().print(HtmlTags
                        .htmlGenerator(HtmlTags.h3Generator("User Not found, redirecting to signin page", "id")));
                res.setHeader("Refresh", "3,http://localhost:8080/thymeleaf/signin");

            }

        }
    }
}
