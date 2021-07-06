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
		String location = sc.getInitParameter("contextConfig");
		out.print("Context : "+sc+"<br>"); //이 방식으로 출력하면 모든 페이지에서 사용하는 ServletContext 변수 주소 출력.
		out.print("location : "+location+"<br>"); //이 방식으로 출력하면 웹 앱 단위에서 사용하는 ServletContext 변수 주소 출력.
		out.close();
	}
}
