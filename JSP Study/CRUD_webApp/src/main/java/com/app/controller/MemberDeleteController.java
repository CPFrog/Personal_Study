package com.app.controller;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

import com.app.service.MemberService;

public class MemberDeleteController implements Controller{
	@Override
	public void execute(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		//파라미터 추출
		String id=req.getParameter("id");
		
		//Service 객체의 메소드 호출
		MemberService service=MemberService.getInstance();
		service.memberDelete(id);
		
		//결과 출력 페이지로 이동
		HttpUtil.forward(req, resp, "/result/memberDeleteOutput.jsp");
		
	}

}
