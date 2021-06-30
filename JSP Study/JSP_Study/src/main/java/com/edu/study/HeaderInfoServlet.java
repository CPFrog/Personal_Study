package com.edu.study;

import java.io.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;
import javax.servlet.*;
import java.util.*;

@WebServlet("/headerInfo")

public class HeaderInfoServlet extends HttpServlet {
	public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException{
		res.setContentType("text/html;charset=UTF-8"); //출력되는 내용에 한글이 있으므로 깨지지 않기 위해 추가
		var out=res.getWriter();
		out.print("<html>");
		out.print("<head><title>Request 정보 출력</title></head>");
		out.print("<body>");
		out.print("<h3>요청 헤더 정보</h3>");
		Enumeration<String> en=req.getHeaderNames(); //요청 헤더의 이름들만 모아 Enumeration 객체에 담음.
		while(en.hasMoreElements()) { //Enumeration 객체에 있는 헤더 정보들 전체 순회하면서 출력.
			String s=en.nextElement();
			out.println(s+": "+req.getHeader(s)+"</br>");
		}
		out.print("</body></html>");
		out.close();
	}
}
