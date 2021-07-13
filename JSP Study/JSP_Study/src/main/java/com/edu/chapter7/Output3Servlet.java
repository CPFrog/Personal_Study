package com.edu.chapter7;

import java.io.*;
import javax.servlet.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;

@WebServlet("/output3")
public class Output3Servlet extends HttpServlet {
	protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html;charset=UTF-8");
		var out=resp.getWriter();
		out.print(req.getParameter("dept"));
		out.close();
	}
}
