package com.servlets;

import java.io.IOException;
import com.services.HtmlTags;
import com.services.UserDatabase;

import jakarta.servlet.ServletException;
import jakarta.servlet.http.*;

public class signin extends HttpServlet {

    @Override
    public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException {
        res.sendRedirect("signin.html");
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
            res.sendRedirect("http://localhost:8080/imgLoader/");

        } else {

            if (UserDatabase.userToCookie.containsKey(name)) {

                String PassWord = UserDatabase.userName.get(UserDatabase.userToCookie.get(name)).getPassword();

                if (PassWord.equals(password)) {

                    Cookie c = new Cookie("id", UserDatabase.userToCookie.get(name));
                    c.setPath("/");
                    res.addCookie(c);
                    res.sendRedirect("http://localhost:8080/imgLoader/");

                } else {

                    res.getWriter().print("Invalid username or password");
                    res.setHeader("Refresh", "3,http://localhost:8080/imgLoader/signin");

                }
            }
            else{

                res.getWriter().print(HtmlTags.htmlGenerator(HtmlTags.h3Generator("User Not found, redirecting to signin page","id")));
                res.setHeader("Refresh","3,http://localhost:8080/imgLoader/signin");
                
            }

        }
    }
}
