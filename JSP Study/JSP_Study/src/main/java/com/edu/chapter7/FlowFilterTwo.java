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
		System.out.println("doFilter() 호출 전 --> two");
		chain.doFilter(request, response);
		System.out.println("doFilter() 호출 후 --> two");
	}
	@Override
	public void destroy() {
		System.out.println("destroy() 호출 --> two");
	}
}
