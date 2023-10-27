package com.servlets;

import java.io.IOException;
import java.io.PrintWriter;

import com.todo.ToDo;
// import java.util.ArrayList;
import jakarta.servlet.http.*;

public class viewToDo extends HttpServlet {
    @Override
    public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException {
        HttpSession session = req.getSession();
        ToDo t;
        if(session.getAttribute("todolist")==null){
            t = new ToDo();
            session.setAttribute("todolist", t);
        }
        else{
            t = (ToDo)session.getAttribute("todolist");
        }
        PrintWriter out = res.getWriter();

        if(t.getListSize()>0){
            for(String s : t.displayToDo()){
                out.println(s);
            }
        }
        
    }
}
