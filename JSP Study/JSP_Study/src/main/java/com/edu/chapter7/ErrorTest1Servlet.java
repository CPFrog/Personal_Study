package com.edu.chapter7;

import java.io.*;
import javax.servlet.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;

@WebServlet("/errorTest1")
public class ErrorTest1Servlet extends HttpServlet{
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html;charset=UTF-8");
		var out=resp.getWriter();
		
		String getquery=req.getQueryString();
		out.print("Query : "+getquery+"<br>");
		out.print("Query 길이 : "+getquery.length());
		out.print("Done!");
		
		out.close();
	}
}
