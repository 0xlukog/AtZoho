package com.test;

import java.io.IOException;
import java.io.PrintWriter;
import jakarta.servlet.http.*;

public class login extends HttpServlet {
    @Override
    public void doPost(HttpServletRequest req, HttpServletResponse res) throws IOException {
        PrintWriter out = res.getWriter();

        String response = "";
        String userName = (String) req.getParameter("username");
        String password = (String) req.getParameter("password");
        Cookie cookie[] = req.getCookies();
        String cookieValue = "not updated";

        if (UserDatabase.userDataBase.containsKey(userName)) {
            if (UserDatabase.userDataBase.get(userName).equals(password)) {
                response += HtmlTags.h3Generator("hey " + userName + " you are logged in ...");
            } else {
                response += HtmlTags.h3Generator("uh ho, invalid password");
            }
        } else {
            response += HtmlTags.h3Generator("User \"" + userName + "\"not found");
            response += "<a href=\"register.html\"> click here </a> to go to Register page";
        }

        res.setContentType("text/html");
        response = HtmlTags.htmlGenerator(response);
        out.println(response);

    }

    @Override
    public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException {
        String response = "";
        Cookie cookie[] = req.getCookies();
        String cookieVal = "not set";

        if (cookie != null) {
            for (Cookie c : cookie) {
                cookieVal = c.getValue();
            }
        }
        if (UserDatabase.cookieDataBase.containsKey(cookieVal)) {
            response += HtmlTags.h3Generator("hey " + UserDatabase.cookieDataBase.get(cookieVal) + " you are logged in via cookie...");
        } else {
            response = "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\"><title>Login</title><link rel=\"stylesheet\" href=\"style.css\"><!-- <meta http-equiv=\"refresh\" content=\"2\"> --></head><body><div id=\"parent\"><div id=\"formdiv\"><h3>Login form</h3><br><form action=\"/my-project/login\" method=\"post\"><div><label for=\"\">Username </label><input type=\"text\" name=\"username\" class=\"textbox\"><br></div><br><div><label for=\"\">Password </label><input type=\"password\" name=\"password\" id=\"\" class=\"textbox\"></div><br><input type=\"submit\" value=\"Login\"></form><a href=\"/my-project/register.html\">Not a user? Register here.</a></div></div></body></html>";
        }
        PrintWriter out = res.getWriter();
        out.print(response);
    }
}