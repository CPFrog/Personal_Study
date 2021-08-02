<%@ page language="java" contentType="text/html; charset=UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>

<c:set var="num" value="${95}" />
<c:out value="${num}" /> 점은

<c:choose>
	<c:when test="${num>=90}"> A 등급이고 </c:when>
	<c:when test="${num>=80}"> B 등급이고 </c:when>
	<c:when test="${num>=70}"> C 등급이고 </c:when>
	<c:when test="${num>=60}"> D 등급이고 </c:when>
	<c:otherwise> F 등급이고 </c:otherwise>
</c:choose>

<c:if test="${num>=60}"> 합격입니다.</c:if>
<c:if test="${num<60}"> 불합격입니다.</c:if>