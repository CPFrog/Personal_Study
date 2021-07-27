<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>EL-example15</title>
</head>
<body>
<!-- 아래 코드는 example15를 EL 문법을 사용하여 코드 매핑 한 것임. -->
	<jsp:forward page="${param.p}" />
	
<!-- 웹 브라우저 실행 후 http://localhost:8181/JSP_Study/chapter12/example20.jsp?p=/chapter10/test.jsp 접속 시 정상적으로 test.jsp 페이지가 불러와짐. -->
</body>
</html>