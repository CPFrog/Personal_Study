package com.edu.customTag;

import javax.servlet.jsp.JspException;
import javax.servlet.jsp.tagext.TagSupport;

public class MyCustomTag extends TagSupport{
	@Override
	public int doStartTag() throws JspException {
		System.out.println("시작 태그 만남");
		//return super.doStartTag();
		//return EVAL_BODY_INCLUDE; <- 메소드 종료 후 몸체가 실행되므로 example23의 1+2 결과 3이 출력됨.
		return SKIP_BODY; // 메소드 종료 후 몸체를 실행하지 않고 건너뛰므로 body 문 실행 안되고 바로 종료태그 실행.
	}
	
	@Override
	public int doAfterBody() throws JspException {
		System.out.println("body 처리 완료");
		return super.doAfterBody();
	}
	
	@Override
	public int doEndTag() throws JspException {
		System.out.println("종료 태그 만남");
		return super.doEndTag();
	}
}