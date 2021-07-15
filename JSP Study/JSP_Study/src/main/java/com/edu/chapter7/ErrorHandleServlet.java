package com.edu.chapter7;

import java.io.*;
import javax.servlet.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;

@WebServlet("/errorHandle")
public class ErrorHandleServlet extends HttpServlet {
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html;charset=UTF-8");
		var out=resp.getWriter();
		
		Integer code=(Integer) req.getAttribute("javax.servlet.error.status_code");
		String message=(String) req.getAttribute("javax.servlet.error.message");
		Object type = req.getAttribute("javax.servlet.error.exception_type");
		Throwable exception=(Throwable)req.getAttribute("javax.servlet.error.exception");
		String uriString=(String)req.getAttribute("javax.servlet.error.request_uri");
		
		out.print("<h2>Error Code\t: "+code+"</h2>");
		out.print("<h2>Error Message\t: "+message+"</h2>");
		out.print("<h2>Error Type\t: "+type+"</h2>");
		out.print("<h2>Error Object\t: "+exception+"</h2>");
		out.print("<h2>Error URI\t: "+uriString+"</h2>");
		
		out.close();
	}
}
