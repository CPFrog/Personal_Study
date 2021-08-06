package com.app.controller;

import javax.servlet.*;
import javax.servlet.http.*;

public class HttpUtil {
	public static void forward(HttpServletRequest req, HttpServletResponse resp, String path) {
		try {
			RequestDispatcher dispatcher=req.getRequestDispatcher(path);
			dispatcher.forward(req, resp);
		}catch(Exception e) {
			System.out.println("forward 오류 : "+e);
		}
	}
}
