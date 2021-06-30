package com.edu.study;

import java.io.*;
import javax.servlet.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;

@WebServlet("/netInfo")

public class NetinfoServlet extends HttpServlet {
	public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException{
		res.setContentType("text/html;charset=UTF-8");
		PrintWriter out=res.getWriter();
		out.print("<html>");
		out.print("<head><title>Request 정보 출력</title></head>");
		out.print("<body>");
		out.print("<h3>네트워크 관련 요청 정보</h3>");
		out.print("Request Scheme : "+req.getScheme()+"</br>");
		out.print("Server Name : "+req.getServerName()+"</br>");
		out.print("Server Address : "+req.getLocalAddr()+"</br>");
		out.print("Server Port : "+req.getServerPort()+"</br>");
		out.print("Client Address : "+req.getRemoteAddr()+"</br>");
		out.print("Client Host : "+req.getRemoteHost()+"</br>");
		out.print("Client Port : "+req.getRemotePort()+"</br>");
		out.print("</body></html>");
		out.close();
	}
}
