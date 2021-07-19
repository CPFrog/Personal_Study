<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" isErrorPage="true"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>예외상황 처리</title>
</head>
<body>
	<h4>에러가 발생하였습니다. </h4> 
	<h5>에러 내용 : <%=exception.getClass().getName() %></h5>
	<h5>에러메시지 : <%=exception.getMessage() %></h5>
</body>
</html>