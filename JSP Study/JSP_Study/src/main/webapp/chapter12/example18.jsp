<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>EL</title>
</head>
<body>
	Literals : ${"Literals"} <!-- 문자열 : 큰따옴표("")로 감싼다. -->
	<br>Operators : ${5>3} <!-- 논리식 -->
	<br>Implicit Objects : ${header["host"]} <!-- 변수 -->
</body>
</html>