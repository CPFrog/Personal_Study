package com.edu.chapter7;

import java.io.IOException;

import javax.servlet.*;

public class FlowFilterTwo implements Filter{
	String charset;
	@Override
	public void init(FilterConfig filterConfig) throws ServletException {
		System.out.println("init() 호출됨 --> two");
		charset=filterConfig.getInitParameter("en"); //효율적인 한글 필터링 위해 외부 xml 파일에서 값 설정 후 불러오는 방식.
	}
	@Override
	public void doFilter(ServletRequest request, ServletResponse response, FilterChain chain)
			throws IOException, ServletException {
		//request.setCharacterEncoding("UTF-8"); // 비효율적인 한글 처리 코드 (값 변경 시 코드 재컴파일+WAS 전송--> 서비스중일때의 유지보수 비효율적.)
		//소스에 직접 코딩하는 것보다 외부에서 값을 설정하고 불러들이는 것이 유지보수성 ↑ --> xml 파일에 값 설정.
		System.out.println("doFilter() 호출 전 --> two");
		chain.doFilter(request, response); //이 부분 주석처리 할 경우 SecondServlet_filter의 service()메소드로 진행하지 못함.
		System.out.println("doFilter() 호출 후 --> two");
	}
	@Override
	public void destroy() {
		System.out.println("destroy() 호출 --> two");
	}
}
