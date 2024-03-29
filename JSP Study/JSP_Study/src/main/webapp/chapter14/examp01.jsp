<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" %> 
<%@ page import="com.edu.beans.BookBean" %>
<%-- 인용부호 (quotation mark) 생략시 일부 코드에서 오류 발생하므로 되도록 사용할것. --%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<c:set var="name" value="Amy" />
<c:out value="${name }" /><br>

<c:remove var="name"/>
<c:out value="${name }"/>

<% BookBean book=new BookBean("The Secret", "Byrne, Rhonda","Atria Books");
   request.setAttribute("bookOne", book);	
%>

<c:set var="title" value="${bookOne.title }" /> <%-- 인용부호 생략 오류 --%>
<c:out value="${title}" /><br>

<c:set var="author" value="<%=book.getAuthor() %>" /> <%-- 인용부호 생략 오류 --%>
<c:out value="${author }" /><br>

<hr>

<c:set var="name"></c:set>
<c:out value="${name }"></c:out>

<%
BookBean book2 = new BookBean("The Last Lecture", "Randy Pausch", "hyperion");
request.setAttribute("bookTwo", book2);
%>

<c:set var="title">${bookTwo.title }</c:set>
<c:out value="${title }" /><br>

<c:set var="author"><%=book2.getAuthor() %></c:set>
<c:out value="${author}" /><br>