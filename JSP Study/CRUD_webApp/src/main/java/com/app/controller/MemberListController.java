package com.app.controller;

import java.io.*;
import java.util.ArrayList;

import javax.servlet.*;
import javax.servlet.http.*;

import com.app.service.MemberService;
import com.app.vo.MemberVO;

public class MemberListController implements Controller{
	@Override
	public void execute(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		MemberService service = MemberService.getInstance();
		ArrayList<MemberVO> list=service.memberList();
		
		req.setAttribute("list", list);
		HttpUtil.forward(req, resp, "/result/memberListOutput.jsp");
		
	}

}
