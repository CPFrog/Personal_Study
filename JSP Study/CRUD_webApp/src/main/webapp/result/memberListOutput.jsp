<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@page import="com.app.vo.MemberVO, java.util.ArrayList" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>전체 회원정보</title>
</head>
<body>
<%ArrayList<MemberVO> list=(ArrayList<MemberVO>) request.getAttribute("list"); 
	if(!list.isEmpty()){%>
	<table border="1">
	<tr><th>ID</th><th>비밀번호</th><th>이름</th><th>메일주소</th></tr>
	
	<%for(int i=0;i<list.size();i++){
		MemberVO member=list.get(i); %>
		<tr><td><%=member.getID() %></td>
		<td><%=member.getPW() %></td>
		<td><%=member.getName() %></td>
		<td><%=member.getMail() %></td>
		</tr>
	<%} 
	}else{
		out.print("<h3>등록된 회원정보가 없습니다.<h3>");
	}
	%>	
	</table>
	<%@ include file="home.jsp" %>

</body>
</html>