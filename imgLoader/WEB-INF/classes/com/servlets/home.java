package com.servlets;

import java.io.IOException;
import java.io.PrintWriter;

import jakarta.servlet.http.*;
import com.services.*;

public class home extends HttpServlet {

    public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException {

        Cookie cookies[] = req.getCookies();
        String cookieValue = "";

        if (cookies!=null) {
            for (Cookie cookie : cookies) {
                if (cookie.getName().equals("id")) {
                    cookieValue = cookie.getValue();
                    break;
                }
            }
        }

        if (cookieValue.equals("-1")) 
        {
            res.sendRedirect("defaultHome.html");
        } 
        else if(cookieValue.length()>10)
        {
            String userName = UserDatabase.userName.get(cookieValue).getName();
            String response = "";
            PrintWriter out = res.getWriter();

            
            response = HtmlTags.h3Generator("Welcome "+userName,"heading");
            response += HtmlTags.imgGenerator("/imgLoader/storage/"+userName+".jpg","userProfile");
            response+=    "<a href=\"signout\">logout</a>";
            response = HtmlTags.htmlGenerator(response);
           
            out.println(response);
        }
    }
}
