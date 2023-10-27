package com.servlets;

import java.io.IOException;

import jakarta.servlet.http.Cookie;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

public class signout extends HttpServlet{
    @Override
    public void doGet(HttpServletRequest req, HttpServletResponse res)throws IOException{
        Cookie c  =  new Cookie("id", "-1");
        c.setPath("/");
        res.addCookie(c);
        res.sendRedirect("/thymeleaf/");
    }
}
