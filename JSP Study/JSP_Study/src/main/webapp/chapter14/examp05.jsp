<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<%@ page import="com.edu.beans.BookBean" %>
<%@ page import="java.util.ArrayList" %>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>

<%
	ArrayList<BookBean> blist =new ArrayList<BookBean>();
	blist.add(new BookBean("book name 1", "author name 1", "publisher name 1"));
	blist.add(new BookBean("book name 2", "author name 2", "publisher name 2"));
	
	String[] bookCode={"문학", "역사", "인문", "정치", "미술", "종교", "취미", "자연", "만화", "건강" };
%>

<c:set var="list" value="<%= blist %>" />
<c:forEach items="${list}" var="item">
	${item.title}/${item.author}/${item.publisher}<br>
</c:forEach>

<hr>
<c:set var="code" value="<%=bookCode %>"/>
<c:forEach var="item" items="${code}">
	<c:out value="${item}" />
</c:forEach>
<br>
<hr>
forEach 태그를 이용한 구구단<br>
<c:forEach var="i" begin="2" end="9">
	<c:forEach var="j" begin="1" end="9">
		${i} * ${j} = ${i*j} <br>
	</c:forEach>
	<br>
</c:forEach>

<hr>
forEach 태그를 이용한 10 이하 홀수 출력<br>
<c:forEach var="k" begin="1" end="10" step="2">
	${k} 
</c:forEach>
<hr>
<c:forTokens var="token" items="문학/역사/인문/정치/미술/종교/취미/자연/만화/건강" delims="/">
	${token}
</c:forTokens>
