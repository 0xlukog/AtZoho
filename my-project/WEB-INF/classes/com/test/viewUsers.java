package com.test;

import java.io.IOException;
import java.io.PrintWriter;
import jakarta.servlet.http.*;

public class viewUsers extends HttpServlet {
    @Override
    public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException {
        String response = "";
        PrintWriter out = res.getWriter();
        if (UserDatabase.userDataBase.size() == 0) {
            response += HtmlTags.h3Generator("No registered users");
        } else {
            for (String user : UserDatabase.userDataBase.keySet()) {

                response += HtmlTags.liGenerator(user);
            }
        }

        response = HtmlTags.htmlGenerator(HtmlTags.olGenerator(response));

        res.setContentType("text/html");
        out.println(response);
    }
}
