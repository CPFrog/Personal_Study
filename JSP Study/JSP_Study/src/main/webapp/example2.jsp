<%@ page language="java" contentType="text/html; charset=UTF-8" 
    pageEncoding="UTF-8" import="java.util.*" %>
<%-- charset=ISO-8859-1 으로 지정할 경우 한글이 지원되지 않는 문서 타입 경고 발생. --%>
<%-- body 부분에 Date 부분을 쓰기 위해서는 java.util을 import 해야 함. 위와 같이 선언하면 된다. --%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>현재 시각</title>
</head>
<body>
<h1>
	<% Date d=new Date(); %> 
</h1>

</body>
</html>