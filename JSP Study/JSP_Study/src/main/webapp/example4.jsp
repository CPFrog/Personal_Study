<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page errorPage="example3.jsp" %>
    
<% 
	String param=request.getParameter("id");
	if(param.equals("test"))
		param="파라미터가 입력되었습니다. (예외상황 발생 X)";
	
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>오류 처리 페이지</title>
</head>
<body>
	<h4>
		<%=param %>
	</h4>
</body>
</html>