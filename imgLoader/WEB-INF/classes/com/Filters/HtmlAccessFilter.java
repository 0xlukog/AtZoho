package com.Filters;

import java.io.IOException;

import jakarta.servlet.Filter;
import jakarta.servlet.FilterChain;
import jakarta.servlet.ServletException;
import jakarta.servlet.ServletRequest;
import jakarta.servlet.ServletResponse;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import org.thymeleaf.*;
import org.thymeleaf.web.servlet.JakartaServletWebApplication;

public class HtmlAccessFilter implements Filter{
    @Override
    public void doFilter(ServletRequest request, ServletResponse response, FilterChain chain)
            throws IOException, ServletException {

        HttpServletRequest req = (HttpServletRequest) request;
        HttpServletResponse res = (HttpServletResponse) response;

        if(req.getHeader("Referrer") == null){

            res.setHeader("Referrer", req.getRequestURI());
            res.sendRedirect("http://localhost:8080/imgLoader/");
        }
        else{
            chain.doFilter(request, response);
            
        }   
    }
    
}
