package com.servlets;

import com.todo.ToDo;
import jakarta.servlet.http.*;

public class clearTodo extends HttpServlet {
    @Override
    public void doGet(HttpServletRequest req, HttpServletResponse res){
        HttpSession session = req.getSession();
        ToDo t;
        if(session.getAttribute("todolist")==null){
            t = new ToDo();
            session.setAttribute("todolist", t);
        }
        else{
            t = (ToDo)session.getAttribute("todolist");
        }
        t.clear();
    }
}
