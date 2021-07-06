package com.edu.study;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.annotation.WebServlet;

@WebServlet("/context1")
public class ServletContextTest1Servlet_byinit extends HttpServlet{
	ServletContext sc; //ServletContext의 주소값을 값는 참조 변수.
	@Override
	public void init(ServletConfig config) throws ServletException {
		sc=config.getServletContext(); //ServletContext의 주소값 추출
	}
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html;charset=UTF-8");
		PrintWriter out=resp.getWriter();
		out.print("Context : "+sc); //올바른 주소값이 추출되면 객체의 ID가, 추출하지 못했다면 null이 출력됨.
		out.close();
	}

}
