package com.edu.study;

import java.io.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;
import javax.servlet.*;

@WebServlet("/portalSite")
public class SendRedirectTestServlet extends HttpServlet{
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		String param=req.getParameter("site");
		if(param.equals("naver"))
			resp.sendRedirect("https://naver.com");
		else if(param.equals("daum"))
			resp.sendRedirect("https://daum.net");
		else if(param.equals("google"))
			resp.sendRedirect("https://google.com");
		else if(param.equals("nate"))
			resp.sendRedirect("https://nate.com");
	}
}
