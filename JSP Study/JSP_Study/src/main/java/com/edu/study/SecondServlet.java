package com.edu.study;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/second")

public class SecondServlet extends HttpServlet{
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException{
		System.out.println("SecondServlet!");
	}
	/*이 서블렛에는 init, service가 없기 때문에 기본 정의된 메소드를 그대로 상속받아 사용됨. */
	/*Run on Server를 실행하면 브라우저의 주소창에 주소 치고 직접 접속하는것과 같은 효과이므로 Get이 실행됨.*/
}
