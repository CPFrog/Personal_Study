package com.edu.chapter7;

import java.io.IOException;
import javax.servlet.*;

public class FlowFilterOne implements Filter {
	public void init(FilterConfig config) {
		System.out.println("init() 호출됨 --> one");
	}
	
	@Override
	public void doFilter(ServletRequest request, ServletResponse response, FilterChain chain)
			throws IOException, ServletException {
		System.out.println("doFilter() 호출 전 --> one");
		chain.doFilter(request, response);
		System.out.println("doFilter() 호출 후 --> one");
	}
	@Override
	public void destroy() {
		System.out.println("destroy() 호출 --> one");
	}
}
