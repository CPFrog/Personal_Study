package com.edu.study;

import java.io.*;
import javax.servlet.http.*; //������ �ۼ��ϱ� ���� ��ӹ޾ƾ� �ϴ� HttpServlet Ŭ������ ��ӹޱ� ���� import ��
import javax.servlet.*; //���� import���� ������ �����ϰ� �ֱ� ������ �ϳ��� �ᵵ �Ǵ°� �ƴѰ� ������ Line 7�� ���� �ܼ�ȭ ���� ����.

public class FirstServlet extends HttpServlet {
	/*HttpServlet�� �� �󿡼� Http ���������� �̿��� ���񽺸� ó���ϱ� ���� �ݵ�� ��ӹ޾ƾ��ϴ� Ŭ����.*/
	
	@Override
	public void init(ServletConfig config) throws ServletException{
		System.out.println("Override�� init() �����");
	}
	public void service(ServletRequest arg0, ServletResponse arg1) throws ServletException, IOException{
		System.out.println("Override�� service() �����");
	}
}
