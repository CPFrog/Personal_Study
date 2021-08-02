<%@ page import="com.edu.beans.BookBean" %>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>

<% BookBean book=new BookBean();%>
<c:set target="<%= book %>" property="title" value="The Secret"/>
<%=book.getTitle() %><br>

<c:set var="b" value="<%=book %>" /> <%-- line 6에서 만든 book 객체를 ${b}로 불러올 수 있도록 설정. --%>
<c:set target="${b}" property="author" value="Bryne, Rhonda"/>
${b.author}