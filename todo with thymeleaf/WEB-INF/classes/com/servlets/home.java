package com.servlets;

import java.io.IOException;
import java.util.ArrayList;

import org.thymeleaf.context.Context;

import jakarta.servlet.http.*;

import com.model.User;
import com.services.*;

public class home extends HttpServlet {
    private String indexTemplate = "index";
    private String dashBoardTemplate = "dashboard";

    private String getCookieValue(HttpServletRequest req, HttpServletResponse res) {
        Cookie cookies[] = req.getCookies();
        String cookieValue = "";

        if (cookies != null) {
            for (Cookie cookie : cookies) {
                if (cookie.getName().equals("id")) {
                    cookieValue = cookie.getValue();
                    break;
                }
            }
        }
        return cookieValue;
    }

    public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException {
        Cookie cookies[] = req.getCookies();
        String cookieValue = "";

        if (cookies != null) {
            for (Cookie cookie : cookies) {
                if (cookie.getName().equals("id")) {
                    cookieValue = cookie.getValue();
                    break;
                }
            }
        }

        if (cookieValue.equals("-1")) {
            res.getWriter().print(ThymeleafHelper.process(new Context(), indexTemplate));
        } else if (cookieValue.length() > 10) {
            User thisUser = UserDatabase.userName.get(cookieValue);
            String userName = thisUser.getName();
            ArrayList<String> list = thisUser.getList();
            Context c = new Context();
            c.setVariable("username", userName);
            c.setVariable("items", list);
            res.getWriter().print(ThymeleafHelper.process(c, dashBoardTemplate));
        }
    }

    public void doPost(HttpServletRequest req, HttpServletResponse res) throws IOException {
        User thisUser = UserDatabase.userName.get(getCookieValue(req, res));
        String userName = thisUser.getName();
        
        if (req.getParameter("add") != null) {
            String listItem = req.getParameter("item");
            thisUser.addItem(listItem);
        } else if (req.getParameter("remove") != null) {
            int removeValue = Integer.parseInt(req.getParameter("removeValue"));
            thisUser.removeItem(removeValue);
        } else if (req.getParameter("change") != null) {
            int changeValue = Integer.parseInt(req.getParameter("changeValue"));
            String newListValue = req.getParameter("oldValue");
            thisUser.modifyItem(changeValue, newListValue);
        }

        Context c = new Context();
        c.setVariable("username", userName);
        c.setVariable("items", thisUser.getList());
        res.getWriter().print(ThymeleafHelper.process(c, dashBoardTemplate));
    }
}
