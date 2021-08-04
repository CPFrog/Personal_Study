<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%@ taglib prefix="fmt" uri="http://java.sun.com/jsp/jstl/fmt" %>
<head>
<meta charset="UTF-8">
<title>example 13</title>
</head>
<body>
<c:set var="now" value="<%=new java.util.Date() %>" />
<fmt:formatDate type="time" value="${now}"/><br>
<fmt:formatDate type="date" value="${now}"/><br>
<fmt:formatDate type="both" value="${now}"/><br>
<fmt:formatDate type="both" dateStyle="short" value="${now}"/><br>
<fmt:formatDate type="both" dateStyle="medium" value="${now}"/><br>
<fmt:formatDate type="both" dateStyle="long" value="${now}"/><br>
<fmt:formatDate pattern="yyyy-MM-dd" value="${now}"/><br>
<fmt:formatDate pattern="yyyy-MM-dd (EEEEEE)" value="${now}"/><br> <%-- 요일 표시는 E 태그인데, EE이면 (수), EEEEEE이면 (수요일) --%>

<fmt:parseDate value="2021-08-04 13:00:00" pattern="yyyy-MM-dd HH:mm:ss" var="date"/>
<p>${date}</p>

</body>
</html>