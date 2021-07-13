package com.edu.chapter7;

import java.io.IOException;

import javax.servlet.*;

public class FlowFilterTwo implements Filter{
	@Override
	public void init(FilterConfig filterConfig) throws ServletException {
		System.out.println("init() 호출됨 --> two");
	}
	@Override
	public void doFilter(ServletRequest request, ServletResponse response, FilterChain chain)
			throws IOException, ServletException {
		request.setCharacterEncoding("UTF-8"); //한글 처리 코드
		System.out.println("doFilter() 호출 전 --> two");
		chain.doFilter(request, response); //이 부분 주석처리 할 경우 SecondServlet_filter의 service()메소드로 진행하지 못함.
		System.out.println("doFilter() 호출 후 --> two");
	}
	@Override
	public void destroy() {
		System.out.println("destroy() 호출 --> two");
	}
}
