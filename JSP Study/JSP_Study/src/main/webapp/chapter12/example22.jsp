<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>example22</title>
</head>
<body>
	<jsp:useBean id="book" class="com.edu.beans.BookBean" />
	<jsp:setProperty property="*" name="book"/>
	
	<%
		//request.setAttribute("book", book); <- request 정보 추출
		//session.setAttribute("book", book); <- session 정보 추출
		application.setAttribute("book", book); //<-application 정보 추출
	%>
	
	<jsp:forward page="bookOutput.jsp" />

</body>
</html>