package com.servlets;

import jakarta.servlet.ServletException;
import jakarta.servlet.http.*;

import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

import com.model.User;
import com.services.CookieGenerator;
import com.services.UserDatabase;

public class signup extends HttpServlet {

    @Override
    public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException {
        res.sendRedirect("signup.html");
    }

    @Override
    public void doPost(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException {
        String savePath = "/home/temp/web/tomcat/webapps/imgLoader/storage/";
        String name = req.getParameter("username");
        String password = req.getParameter("password");
        Part filePart = req.getPart("file");

        String cookieValue = CookieGenerator.getHashCode(name);
        String fileName = name + ".jpg";
        String filePath = savePath +fileName;
        InputStream input = filePart.getInputStream();
        OutputStream output = new FileOutputStream(filePath);

        if (!UserDatabase.userToCookie.containsKey(name)) {
            UserDatabase.userName.put(cookieValue, new User(name, password)); // mappint cookie to name
            UserDatabase.image.put(cookieValue, filePath); // mapping cookie to image path
            UserDatabase.userToCookie.put(name, cookieValue); //mapping username to cookie

            int bytesRead;
            byte[] buffer = new byte[4096];

            while ((bytesRead = input.read(buffer)) != -1) {
                output.write(buffer, 0, bytesRead);
            }
            
            output.close();
            input.close();

            res.getWriter().println("successfully created User " + name + " " + ", redirecting to signin page..");
            res.setHeader("Refresh", "0.5,http://localhost:8080/imgLoader/signin");
        } else {
            res.getWriter()
                    .println("User already exists, try different user name. Redirectig to signup page in 3 seconds");
            res.setHeader("Refresh", "3,http://localhost:8080/imgLoader/signup");
        }

    }
}
