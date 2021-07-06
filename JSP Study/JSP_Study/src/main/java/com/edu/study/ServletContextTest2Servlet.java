package com.edu.study;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.annotation.WebServlet;

@WebServlet("/context2")
public class ServletContextTest2Servlet extends HttpServlet{
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html;charset=UTF-8");
		var out=resp.getWriter();
		
		ServletContext sc=this.getServletContext();
		
		out.print("서블릿 버전 : " + sc.getMajorVersion() + "."+sc.getMinorVersion()+"<br>");
		out.print("서버 정보 : " + sc.getServerInfo()+"<br>");
		out.print("웹 앱 경로 : " + sc.getContextPath()+"<br>");
		out.print("웹 앱 경로 : " + sc.getServletContextName()+"<br>");
		out.print("웹 앱 경로 : " + sc.getRealPath("/name.html")+"<br>");
		sc.log("로그 기록함!");
		
		out.close();
	}
}
