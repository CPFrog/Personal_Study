package com.springbook.biz.common;

import org.aspectj.lang.annotation.*;
import org.springframework.stereotype.Service;

@Service
@Aspect
public class AfterAdvice {
	@After("PointcutCommon.allPointcut()")
	public void finallyLog() {
		System.out.println("비즈니스 메소드 수행 완료됨.");
	}

}
