package com.edu.study;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.annotation.WebServlet;

@WebServlet("/cookie2")
public class CookieTest2Servlet extends HttpServlet {
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html;charset=UTF-8");
		PrintWriter out=resp.getWriter();
		
		Cookie[] list=req.getCookies();
		for(int i=0;list!=null&&i<list.length;i++) {
			out.println(list[i].getName()+":"+list[i].getValue()+"<br>");
		}
		out.close();
	}
}