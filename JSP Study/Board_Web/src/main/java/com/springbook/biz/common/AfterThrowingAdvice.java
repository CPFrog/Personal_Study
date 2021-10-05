package com.springbook.biz.common;

import org.aspectj.lang.JoinPoint;
import org.aspectj.lang.annotation.*;
import org.springframework.stereotype.Service;

@Service
@Aspect
public class AfterThrowingAdvice {
	@AfterThrowing(pointcut="PointcutCommon.allPointcut()", throwing="exceptObj")
	public void exceptionLog(JoinPoint jp, Exception exceptObj) {
		String method=jp.getSignature().getName(); // 호출한 메소드의 이름을 받음.
		
		System.out.println("예외 발생 비즈니스 메소드 : "+method+"\t발생 예외 내용 : "+exceptObj.getMessage());
	}

}
