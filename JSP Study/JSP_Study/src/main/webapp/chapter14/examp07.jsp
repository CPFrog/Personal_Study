<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<head>
<meta charset="UTF-8">
<title>examp07</title>
</head>
<body>
<c:url value="examp08.jsp" var="page">
	<c:param name="id" value="guest" />
	<c:param name="pwd" value="1234" />
</c:url>
<c:redirect url="${page}"/>
</body>
