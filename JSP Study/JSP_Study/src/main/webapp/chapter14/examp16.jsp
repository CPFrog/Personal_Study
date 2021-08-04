<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%@ taglib prefix="sql" uri="http://java.sun.com/jsp/jstl/sql" %>
<%@ page import="java.io.*, java.util.*, java.sql.*" %>

<head>
<meta charset="UTF-8">
<title>JSTL_SQL</title>
</head>
<body>

<sql:setDataSource var="myoracle2"
	driver="oracle.jdbc.driver.OracleDriver"
	url="jdbc:oracle:thin:@1277.0.0.1:1521:xe"
	user="scott"
	password="tiger" />
	
<%-- 18라인에서 java.sql.SQLRecoverableException 발생. 해결 못함. --%>
<sql:query dataSource="${myoracle2}" var="result">
	select * from dept
</sql:query>

<table border="1">
	<tr>
		<th>DEPTNO</th><th>DNAME</th><th>LOCATION</th>
	</tr>
	<c:forEach var="row" items="${result.rows}">
		<tr>
			<td><c:out value="${row.deptno}" /></td>
			<td><c:out value="${row.dname}" /></td>
			<td><c:out value="${row.loc}" /></td>
		</tr>
	</c:forEach>
</table>
</body>
