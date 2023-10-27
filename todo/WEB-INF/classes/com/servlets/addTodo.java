package com.servlets;
import java.io.IOException;

import com.todo.*;

import jakarta.servlet.http.*;
public class addTodo extends HttpServlet{
    ToDo t = new ToDo();

    @Override
    public void doGet(HttpServletRequest req, HttpServletResponse res)throws IOException{
        // req.getSession(true);
        res.sendRedirect("addList.html");
        
    }

    @Override
    public void doPost(HttpServletRequest req, HttpServletResponse res){
        String s = (String)req.getParameter("todo");
        t.addToDo(s);
        t.save();
        req.getSession().setAttribute("todolist", t);
        
    }
}
