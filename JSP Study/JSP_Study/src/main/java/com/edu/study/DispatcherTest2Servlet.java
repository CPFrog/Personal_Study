package com.edu.study;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.annotation.WebServlet;

@WebServlet("/dispatcher2")
public class DispatcherTest2Servlet extends HttpServlet{
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html;charset=UTF-8");
		var out=resp.getWriter();
		out.print("<h3>Dispatcher Test2의 수행 완료</h3>");
		out.close();
	}
}
