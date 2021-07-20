<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>login information</title>
</head>
<body>
	<%
		String id=request.getParameter("id");
		String pw=request.getParameter("pw");
		
		if(id.isEmpty() || pw.isEmpty()){
			request.setAttribute("error", "ID 또는 비밀번호가 입력되지 않았습니다.");
			RequestDispatcher rd=request.getRequestDispatcher("logInOut.jsp");
			rd.forward(request, response);
			return;
		}
	%>
	
	id : <%= id %> <br> 
	pw : <%= pw %>
</body>
</html>