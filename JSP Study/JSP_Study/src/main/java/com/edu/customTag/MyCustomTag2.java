package com.edu.customTag;

import java.io.IOException;

import javax.servlet.jsp.JspException;
import javax.servlet.jsp.tagext.SimpleTagSupport;

public class MyCustomTag2 extends SimpleTagSupport {
	
	@Override
	//JSP 1.2에서 doStartTag(), doAfterBody(), doEndTag()로 실행됐던 것이 2.0 이후로는 doTag()하나로 처리
	public void doTag() throws JspException, IOException { 
		System.out.println("커스텀 태그의 바디가 실행되기 전");
		for(int i=0;i<10;i++)
			getJspBody().invoke(null);
		System.out.println("커스텀 태그의 바디가 실행된 후");
	}
}
