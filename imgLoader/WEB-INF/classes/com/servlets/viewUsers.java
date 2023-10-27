package com.servlets;

import java.io.IOException;

import com.services.UserDatabase;

import jakarta.servlet.ServletException;
import jakarta.servlet.http.*;

import org.apache.catalina.User;
import org.json.JSONObject;
public class viewUsers extends HttpServlet {
        @Override
    public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException {
        JSONObject j = new JSONObject(UserDatabase.userName);
        res.setContentType("application/json");
        res.getWriter().print(j);
    }
}
