package com.edu.study;

import java.io.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;
import javax.servlet.*;

@WebServlet("/logProc")
public class LogInOutServlet extends HttpServlet {

	// 로그인 처리
	@Override
	protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html;charset=UTF-8");
		PrintWriter out = resp.getWriter();
		String id = req.getParameter("id");
		String pwd = req.getParameter("pw");

		if (id.isEmpty() || pwd.isEmpty()) {
			out.print("ID 또는 비밀번호가 입력되지 않았습니다.");
			return;
		}
		HttpSession session = req.getSession();
		if (session.isNew() || session.getAttribute("id") == null) {
			session.setAttribute("id", id);
			out.print(id + "님 어서오세요.");
		} else
			out.print("현재 " + id + "님 계정으로 로그인중입니다.");
		out.close();
	}

	// 로그아웃 처리
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html;charset=UTF-8");
		PrintWriter out = resp.getWriter();
		HttpSession session = req.getSession(false);
		if (session != null && session.getAttribute("id") != null) {
			session.invalidate();
			out.print("정상적으로 로그아웃하였습니다.");
		} else
			out.print("현재 로그인 상태가 아닙니다.");
		out.close();
	}
}
