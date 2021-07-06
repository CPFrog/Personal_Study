package com.edu.study;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;


public class InitParamServlet extends HttpServlet{
	String id, pw;
	
	@Override
	public void init(ServletConfig config) throws ServletException {
		id=config.getInitParameter("id");
		pw=config.getInitParameter("password");
	}
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html;charset=UTF-8");
		PrintWriter out=resp.getWriter();
		out.print("<h2>서블릿 초기 추출 변수</h2>");
		out.print("<h3>ID : "+id+"</h3>");
		out.print("<h3>PASSWORD : "+pw+"</h3>");
		out.close();
	}
}
