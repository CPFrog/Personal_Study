package com.edu.chapter7;

import javax.servlet.*;

public class TestServletContextListener implements ServletContextListener{
	public TestServletContextListener() {
		System.out.println("TestServletContextListener 객체 생성자 실행됨");
	}
	@Override
	public void contextInitialized(ServletContextEvent sce) {
		System.out.println("ServletContext 객체 초기화");
	}
	@Override
	public void contextDestroyed(ServletContextEvent sce) {
		System.out.println("ServletContext 객체 해제");
	}
}
