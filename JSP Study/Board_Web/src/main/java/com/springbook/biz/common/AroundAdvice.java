package com.springbook.biz.common;

import org.aspectj.lang.ProceedingJoinPoint;

public class AroundAdvice {
	public Object aroundLog(ProceedingJoinPoint pjp) throws Throwable{
		System.out.println("[BEFORE] : 메소드 수행 전");
		Object returnObj=pjp.proceed();
		System.out.println("[AFTER] : 메소드 수행 후");
		
		return returnObj;
	}

}
