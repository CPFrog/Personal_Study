package com.app.controller;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

import com.app.service.MemberService;
import com.app.vo.MemberVO;

public class MemberInsertController implements Controller{
	@Override
	public void execute(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		// 파라미터 추출
		String id=req.getParameter("id");
		String pw=req.getParameter("pw");
		String name=req.getParameter("name");
		String mail=req.getParameter("mail");
		
		// 유효성 체크
		if(id.isEmpty()||pw.isEmpty() || name.isEmpty() || mail.isEmpty()) {
			req.setAttribute("error", "모든 항목은 필수 입력 사항입니다.");
			HttpUtil.forward(req, resp, "/memberInsert.jsp");
			return;
		}
	}
	
	// VO 객체에 데이터 바인딩
	MemberVO member=new MemberVO();
	member.setID(id);
	member.setPW(pw);
	member.setName(name);
	member.setMail(mail);
	
	// Service 객체의 메소드 호출
	MemberService service=MemberService.getInstance();
	service.memberInsert(member);
	
	// 출력 View 페이지로 이동
	req.setAttrivute("id", id);
	HttpUtil.forward(req,resp,"/result/memberInsertOutput.jsp");

}
