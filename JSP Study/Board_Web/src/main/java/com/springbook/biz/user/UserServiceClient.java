package com.springbook.biz.user;

import org.springframework.context.support.AbstractApplicationContext;
import org.springframework.context.support.GenericXmlApplicationContext;

public class UserServiceClient {
	public static void main(String[] args) {
		//1. Spring 컨테이너 구동
		AbstractApplicationContext container=new GenericXmlApplicationContext("applicaionContext.xml");
		
		//2. 컨테이너로부터 UserSerivceImple을 찾음
		UserService userService=(UserService) container.getBean("userService");
		
		//3. 로그인 기능 테스트
		UserVO vo=new UserVO();
		vo.setID("test");
		vo.setPW("test123");
		
		UserVO user=userService.getUser(vo);
		if(user!=null) {
			System.out.println(user.getName()+"님 환영합니다.");
		} else {
			System.out.println("로그인 오류. 아이디나 비밀번호를 다시 확인하세요.");
		}
		
		//4. 컨테이너 종료
		container.close();
	}

}
