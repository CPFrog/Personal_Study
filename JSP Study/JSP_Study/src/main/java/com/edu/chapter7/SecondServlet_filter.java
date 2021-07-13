package com.edu.chapter7;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.annotation.WebServlet;

@WebServlet("/chap7_second")
/*
 * public class SecondServlet_filter extends HttpServlet
 * 패키지가 다르더라도 이름이 동일하면 404 에러 발생 주의.
 */
public class SecondServlet_filter extends HttpServlet{
	@Override
	protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		System.out.println("SecondServlet!!");
		var out=resp.getWriter();
		out.print("<html><head><title>Test</title></head>");
		out.print("<body><h1>My First Filter Exercise!!</h1></body>");
		out.print("</html>");
		out.close();
	}
}
