package com.edu.study;

import java.io.*;
import javax.servlet.http.*;
import javax.servlet.*;

public class AdditionalInfoServlet_xml extends HttpServlet {
	public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException{
		res.setContentType("text/html;charset=UTF-8");
		var out=res.getWriter();
		out.print("<html>");
		out.print("<head><title>Request 정보 출력</title></head>");
		out.print("<body>");
		out.print("<h3>추가적인 요청 정보</h3>");
		out.print("Request Method: "+req.getMethod()+"</br>");
		out.print("Path Info: "+req.getPathInfo()+"</br>");
		out.print("Path Translated: "+req.getPathTranslated()+"</br>");
		out.print("Query String: "+req.getQueryString()+"</br>");
		out.print("Content Length: "+req.getContentLength()+"</br>");
		out.print("Content Type: "+req.getContentType()+"</br>");
		out.print("</body></html>");
		out.close();
	}
}
