<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%@ taglib prefix="fmt" uri="http://java.sun.com/jsp/jstl/fmt" %>
<head>
<meta charset="UTF-8">
<title>TimeZone</title>
</head>
<body>

<c:set var="now" value="<%= new java.util.Date() %>" />
대한민국 : <fmt:formatDate value="${now}" type="both" dateStyle="full" timeStyle="full" /><br>

<fmt:timeZone value="en_us">
미국: <fmt:formatDate value="${now}" type="both" dateStyle="full" timeStyle="full" /><br>
</fmt:timeZone>
<fmt:timeZone value="ja_JP">

<%-- 원래대로라면 일본 표준시와 한국 표준시는 동일하게 나와야 하는데.. 이 코드에서는 안나옴. --%>
<%-- 교재의 출력 예시도 안되어있는거 보면.. 어딘가 손 봐야 할 거 같은데 모르겠다. --%>
일본: <fmt:formatDate value="${now}" type="both" dateStyle="full" timeStyle="full" /><br>
</fmt:timeZone>
<br>
<hr>

<h4>한국</h4>
<fmt:setLocale value="ko_kr" />
<c:set var="date" value="<%= new java.util.Date() %>" />
금액 : <fmt:formatNumber value="100000" type="currency" /><br>
일시 : <fmt:formatDate value="${date}" type="both" dateStyle="full" timeStyle="full" /><br>

<h4>미국</h4>
<fmt:setLocale value="en_us" />
금액 : <fmt:formatNumber value="100000" type="currency" /><br>
일시 : <fmt:formatDate value="${date}" type="both" dateStyle="full" timeStyle="full" /><br>

<h4>일본</h4>
<fmt:setLocale value="ja_jp"/>
금액 : <fmt:formatNumber value="100000" type="currency" /><br>
일시 : <fmt:formatDate value="${date}" type="both" dateStyle="full" timeStyle="full" /><br>

</body>
