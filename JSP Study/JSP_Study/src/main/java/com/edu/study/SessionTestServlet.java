package com.edu.study;

import java.io.*;
import javax.servlet.http.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.*;

@WebServlet("/sessionTest")
public class SessionTestServlet extends HttpServlet {
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html;charset=UTF-8");
		var out = resp.getWriter();
		String param = req.getParameter("p");
		String msg = null;
		HttpSession session = null;

		if (param.equals("create")) {
			session = req.getSession();
			if (session.isNew())
				msg = "새로운 객체 생성";
			else
				msg = "기존의 세션 객체가 존재함";
		} else if (param.equals("delete")) {
			session = req.getSession(false);
			if (session != null) {
				session.invalidate();
				msg = "세션 객체 삭제 완료\n";
			} else
				msg = "삭제할 세션 객체 없음.";
		} else if (param.equals("add")) {
			session = req.getSession(true);
			session.setAttribute("msg", "메시지입니다.");
			msg = "세션 객체에 데이터 등록 완료";
			// 같은 세션 이름이라면 여러번 실행해도 객체는 하나 --> 덮어 쓰기 되는듯?
		} else if (param.equals("get")) {
			session = req.getSession(false);
			if (session != null) {
				String str = (String) session.getAttribute("msg");
				msg = str;
			} else
				msg = "데이터를 추출할 세션 객체가 없음.";
		} else if (param.equals("remove")) {
			session = req.getSession(false);
			if (session != null) {
				session.removeAttribute("msg");
				msg = "세션 객체의 데이터 삭제 완료";
			} else
				msg = "삭제할 세션 객체 없음.";
		} else if (param.equals("replace")) {
			session = req.getSession();
			session.setAttribute("msg", "새로운 메시지");
			msg = "세션 객체에 새로운 데이터 등록 완료";
			//만약 객체가 없는 상태에서 replace를 한다면? --> 새로 만들고 지금 파라미터값으로 값 세팅.
		}

		out.print("처리 결과 : " + msg);
		out.close();
	}
}
