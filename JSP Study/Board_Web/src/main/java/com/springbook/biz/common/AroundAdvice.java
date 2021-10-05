package com.springbook.biz.common;

import org.aspectj.lang.ProceedingJoinPoint;
import org.aspectj.lang.annotation.*;
import org.springframework.stereotype.Service;
import org.springframework.util.StopWatch;

@Service
@Aspect
public class AroundAdvice {
	@Around("PointcutCommon.allPointcut()")
	public Object aroundLog(ProceedingJoinPoint pjp) throws Throwable {
		String method=pjp.getSignature().getName();
		
		StopWatch sw= new StopWatch();
		sw.start();
		
		Object obj = pjp.proceed();
		
		sw.stop();
		System.out.println(method+" 수행 소요 시간 : "+sw.getTotalTimeMillis()+"(ms)초");
		return obj;
	}

}
