<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>구구단</title>
</head>
<body>
<h3>Scriptlet으로 구구단 출력</h3>
<%
	for(int i=2;i<10;i++){
		for(int j=1;j<10;j++){
			// out.println(i+"*"+j+"="+i*j);
			// JSP 소스의 실제 출력은 html이므로 println()이나 print("\n")을 해도 실제 줄바꿈이 되지 않음.
			// 줄바꿈을 실행하기 위해 <br> 태그를 사용해야 하는데, 
			// 태그 안에 태그를 넣을 수 없으므로 어쩔 수 없이 JSP 태그를 닫아줘야 함. 
			out.print(i+"*"+j+"="+i*j); %><br>
		<% } %><br>
	<% }
%>
</body>
</html>