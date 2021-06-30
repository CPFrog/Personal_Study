package com.edu.study;

import java.io.*;
import javax.servlet.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;

@WebServlet("/second2")

public class Servlet_Response extends HttpServlet{
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException{
		System.out.println("SecondServlet!");
		PrintWriter out=resp.getWriter();
		out.print("<html><head><title>Welcome back</title></head>");
		out.print("<body><h1>Have a Good day!!</h1><body>");
		out.print("</html>");
		out.close();
	}
}
