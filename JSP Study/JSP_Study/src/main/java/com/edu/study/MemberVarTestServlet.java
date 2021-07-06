package com.edu.study;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.annotation.WebServlet;

@WebServlet("/member")
public class MemberVarTestServlet extends HttpServlet{
	String s;
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html;charset=UTF-8");
		PrintWriter out=resp.getWriter();
		int num=0;
		s=req.getParameter("msg");
		out.print("<html><head><title>MultiThread Test</title></head>");
		out.println("<body><h2>처리 결과(지역변수)</h2>");
		while(num++<10) {
			out.print(s+" : "+num+"<br/>");
			out.flush();
			System.out.println(s+" : "+num);
			try {
				Thread.sleep(1000);
			}catch(Exception e) {
				System.out.println(e);
			}
		}
		out.println("<h2>Done "+s+" !!</h2>");
		out.println("</body></html>");
		out.close();
	}

}
