package com.edu.study;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.annotation.WebServlet;

@WebServlet("/bookReg")
public class BookTest1Servlet extends HttpServlet {
	@Override
	protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html;charset=UTF-8");
		var out=resp.getWriter();
		
		req.setCharacterEncoding("UTF-8");
		
		String title=req.getParameter("title");
		String author=req.getParameter("author");
		String publisher=req.getParameter("publisher");
		
		Book book=new Book();
		book.setTitle(title);
		book.setAuthor(author);
		book.setPublisher(publisher);
		
		req.setAttribute("book", book);
		
		RequestDispatcher rd=req.getRequestDispatcher("bookOutput");
		rd.forward(req,resp);
		out.close();
	}
}
