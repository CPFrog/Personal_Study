package com.edu.chapter7;

import java.io.*;
import javax.servlet.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;

@WebServlet("/output2")
public class Output2Servlet extends HttpServlet { //extends HttpServlet 빼먹음 --> HTTP 상태 500 서버 오류 (유효한 서블릿이 아닙니다 오류)
	protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html;charset=UTF-8");
		var out=resp.getWriter();
		out.print(req.getParameter("subject"));
		out.close();
	}
}
