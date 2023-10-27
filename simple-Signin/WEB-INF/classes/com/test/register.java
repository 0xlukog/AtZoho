package com.test;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.Date;

import com.services.CookieGenerator;

import jakarta.servlet.http.*;


public class register extends HttpServlet {
    @Override
    public void doPost(HttpServletRequest req, HttpServletResponse res) throws IOException {
        PrintWriter out = res.getWriter();
        
        String response = "";
        String userName = req.getParameter("username");
        String password = req.getParameter("password");
        Cookie cookie = new Cookie("name",CookieGenerator.getHashCode(userName)) ;
        UserDatabase.cookieDataBase.put(CookieGenerator.getHashCode(userName), userName);
        if (UserDatabase.userDataBase.containsKey(userName)) {
            response += HtmlTags.h3Generator("User already Exists, Redirecting to register page in 5 Seconds..");
            res.setHeader("Refresh", "5,http://localhost:8080/my-project/register.html");
            response += "<a href=\"/my-project\"> click here</a> to go to login page";
        } else {
            UserDatabase.userDataBase.put(userName, password);
            response += HtmlTags.h3Generator("User Registered Successfully");
            response += "<a href=\"/my-project\"> click here</a> to go to login page";
        }
        response= HtmlTags.htmlGenerator(response);

        Date exp =  new Date();
        exp.setTime(exp.getTime()+10);
        cookie.setMaxAge(10);
        res.addCookie(cookie);
        out.println(response);
    }
}
