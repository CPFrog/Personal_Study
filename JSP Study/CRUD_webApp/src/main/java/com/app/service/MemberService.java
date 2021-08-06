package com.app.service;

import com.app.dao.MemberDAO;
import com.app.vo.MemberVO;

public class MemberService {
	private static MemberService service=new MemberService();
	public MemberDAO dao=MemberDAO.getInstance();
	
	private MemberService() {}
	public static MemberService getInstance() {
		return service;
	}
	public void memberInsert(MemberVO member) {
		dao.memberInsert(member);
	}
}