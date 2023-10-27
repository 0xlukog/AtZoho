package com.servlets;

import jakarta.servlet.ServletException;
import jakarta.servlet.http.*;

import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

import org.thymeleaf.context.Context;

import com.model.User;
import com.services.CookieGenerator;
import com.services.ThymeleafHelper;
import com.services.UserDatabase;

public class signup extends HttpServlet {
    private String template = "signup";

    @Override
    public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException {
        Context c = new Context();
        res.getWriter().print(ThymeleafHelper.process(c, template));
    }

    @Override
    public void doPost(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException {
        String name = req.getParameter("username");
        String password = req.getParameter("password");
        String cookieValue = CookieGenerator.getHashCode(name);

        if (!UserDatabase.userToCookie.containsKey(name)) {

            UserDatabase.userName.put(cookieValue, new User(name, password)); // mappint cookie to name
            UserDatabase.userToCookie.put(name, cookieValue); // mapping username to cookie

            Context c = new Context();
            c.setVariable("userGenerated", "1");
            c.setVariable("username", name);
            res.getWriter().print(ThymeleafHelper.process(c, template));
            res.setHeader("Refresh", "1,http://localhost:8080/thymeleaf/signin");


        } else {

            Context c = new Context();
            c.setVariable("username", name);
            res.getWriter().print(ThymeleafHelper.process(c, template));


        }

    }
}
