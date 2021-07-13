package com.edu.study;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.annotation.WebServlet;

@WebServlet("/dispatcher1")
public class DispatcherTest1Servlet extends HttpServlet{
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html;charset=UTF-8");
		PrintWriter out=resp.getWriter();
		out.print("<h3>Dispatcher Test1의 수행 결과</h3>");
		
		ServletContext sc=this.getServletContext(); //ServletContext 객체의 주소값 추출. --> RequestDispatcher 객체 생성에 필요.
		RequestDispatcher rd=sc.getRequestDispatcher("/dispatcher2"); //dispatcher2라는 경로 값을 가지는 RequestDispatcher객체 생성
		rd.forward(req, resp); //rd가 가지고 있는 주소로 req, resp를 넘겨받아 이동함.
		out.close(); //실행 결과 dispatcher1의 출력문이 출력되지 않고 dispatcher2의 출력문이 출력됨 --> forward로 인해 실제로 응답 받은 페이지는 dispatcher2임.
		
		/*
		 * 만약 rd.forward() 를 rd.include()로 바꾼다면 1, 2의 출력문이 모두 실행됨.
		 * */
	}
}
