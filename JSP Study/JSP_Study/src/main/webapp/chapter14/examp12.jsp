<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%@ taglib prefix="fmt" uri="http://java.sun.com/jsp/jstl/fmt" %>

<c:set var="balance" value="123456.789" /><br>
<fmt:formatNumber type="currency" value="${balance}" /> <%-- 원화 특수기호가 이상하게 뜸... 버전 차이인가? --%>
<fmt:formatNumber type="number" maxIntegerDigits="3" value="${balance}" /><br>
<fmt:formatNumber type="number" maxFractionDigits="3" value="${balance}" /><br>
<fmt:formatNumber type="number" groupingUsed="false" value="${balance}" /><br>
<fmt:formatNumber type="percent" maxIntegerDigits="3" value="${balance}" /><br>
<fmt:formatNumber type="percent" minFractionDigits="10" value="${balance}" /><br>
<fmt:formatNumber type="number" pattern="###.###E0" value="${balance}" /><br>

<p> 달러 환율 : 
<fmt:setLocale value="en_US" />
<fmt:formatNumber value="${balance}" type="currency"/></p>

<fmt:parseNumber value="1,234.56" pattern="0,000.000" var="num1" />
<fmt:parseNumber value="123" var="num2" />

${num1+num1}