package com.edu.customTag;

import javax.servlet.jsp.JspException;
import javax.servlet.jsp.tagext.TagSupport;

public class MyCustomTag extends TagSupport{
	@Override
	public int doStartTag() throws JspException {
		System.out.println("시작 태그 만남");
		return EVAL_BODY_INCLUDE;
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
