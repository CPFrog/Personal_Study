package com.edu.study;

import java.io.*;
import javax.servlet.http.*; //서블릿을 작성하기 위해 상속받아야 하는 HttpServlet 클래스를 상속받기 위한 import 문
import javax.servlet.*; //위에 import문의 내용을 포함하고 있기 때문에 하나만 써도 되는거 아닌가 싶지만 Line 7의 문장 단순화 위해 냅둠.

public class FirstServlet extends HttpServlet {
	/*HttpServlet은 웹 상에서 Http 프로토콜을 이용해 서비스를 처리하기 위해 반드시 상속받아야하는 클래스.*/
	
	//web.xml 파일을 통한 web servlet 접근. (Servlet 버전 상관 없이 사용 가능.)
	@Override
	public void init(ServletConfig config) throws ServletException{
		System.out.println("Override한 init() 실행됨");
	}
	public void service(ServletRequest arg0, ServletResponse arg1) throws ServletException, IOException{
		System.out.println("Override한 service() 실행됨");
	}
}
