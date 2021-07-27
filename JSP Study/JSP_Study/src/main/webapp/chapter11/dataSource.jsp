<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    <%@page import="java.sql.*, javax.sql.*, javax.naming.*" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
	//1. JNDI 서버 객체 생성
	InitialContext ic=new InitialContext();
	//2. lookup()
	DataSource ds=(DataSource) ic.lookup("java:comp/env/jdbc/myoracle");
	//3. getConnection()
	Connection con=ds.getConnection();
	
	Statement stmt=con.createStatement();
	ResultSet rs=stmt.executeQuery("select * from test");
	
	while(rs.next())
		out.print("<br>"+rs.getString("id")+":"+rs.getString("pwd"));
	
	rs.close();
	stmt.close();
	con.close();
	
%>

</body>
</html>