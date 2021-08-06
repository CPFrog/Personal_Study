package com.app.controller;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

import com.app.service.MemberService;
import com.app.vo.MemberVO;

public class MemberSearchController implements Controller {
	@Override
	public void execute(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		// Parameter 추출
		String id=req.getParameter("id");
		String job=req.getParameter("job");
		String path=null;
		if(job.equals("search"))
			path="/memberSearch.jsp";
		else if(job.equals("update"))
			path="/memberUpdate.jsp";
		else path="/memberDelete.jsp";
		
		//유효성 검사
		if(id.isEmpty()) {
			req.setAttribute("error", "ID 입력은 필수 사항입니다.");
			HttpUtil.forward(req, resp, path);
			return;
		}
		
		//Service 객체의 메소드 호출
		MemberService service=MemberService.getInstance();
		MemberVO member=service.memberSearch(id);
		
		//Output View 페이지로 이동
		if(member==null) req.setAttribute("result", "검색 결과가 없습니다.");
		req.setAttribute("member", member);
		if(job.equals("search")) path="/result/memberSearchOutput.jsp";
		HttpUtil.forward(req, resp, path);
	}
}
