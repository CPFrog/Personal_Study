package com.edu.study;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.annotation.WebServlet;

@WebServlet("/ko-kr")

public class KoreanResponse extends HttpServlet {
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws IOException, ServletException{
		resp.setContentType("text/html;charset=UTF-8"); //이 부분이 없으면 print문의 한글 인코딩 깨짐.
		PrintWriter out=resp.getWriter();
		out.print("<h1>다시 돌아온 것을 환영합니다!</h1>");
		out.close();
	}
}