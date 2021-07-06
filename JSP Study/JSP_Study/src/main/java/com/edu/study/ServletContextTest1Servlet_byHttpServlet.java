package com.edu.study;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.annotation.WebServlet;

@WebServlet("/context1_hs")
public class ServletContextTest1Servlet_byHttpServlet extends HttpServlet{
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html;charset=UTF-8");
		PrintWriter out=resp.getWriter();
		ServletContext sc=this.getServletContext();
		out.print("Context : "+sc); //올바른 주소값이 추출되면 객체의 ID가, 추출하지 못했다면 null이 출력됨.
		out.close();
	}
}
