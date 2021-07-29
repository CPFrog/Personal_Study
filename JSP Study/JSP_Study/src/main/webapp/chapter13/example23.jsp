<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" %>
<%@ taglib prefix="my" uri="http://myTags.com" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Custom Tag</title>
</head>
<body>
<%-- <my:first color="red"><%=1+2 %></my:first> TEI에 유효값을 blue로 설정했기 때문에 red로 설정된 이 코드는 오류 발생. --%> 
<my:first color="blue"><%=1+2 %></my:first>
<br>
Custom Tag Test!
</body>
</html>