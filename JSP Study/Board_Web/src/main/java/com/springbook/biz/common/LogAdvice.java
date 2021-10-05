package com.springbook.biz.common;

import org.springframework.stereotype.Service;
import org.aspectj.lang.annotation.*;

@Service
@Aspect // Aspect = Pointcut + Advice
public class LogAdvice {
	@Pointcut("execution(* com.springbook.biz..*Impl.*(..))")
	public void allPointcut() {}
	
	@Pointcut("execution(* com.springbook.biz..*Impl.get*(..))")
	public void getPointcut() {}
	
	@Before("allPointcut()")
	public void printLog() {
		System.out.println("비즈니스 로직 수행 전");
	}

}
