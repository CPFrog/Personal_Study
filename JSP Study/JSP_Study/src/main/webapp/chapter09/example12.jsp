<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Application</title>
</head>
<body>
서버명 : <%= application.getServerInfo() %><br>
서블릿 버전 : <%= application.getMajorVersion() %>.<%=application.getMinorVersion() %><br>
<hr>
<h3>/JSP_Study 리스트</h3>
<%
	java.util.Set<String> list=application.getResourcePaths("/");
if(list!=null){
	Object[] obj=list.toArray();
	for(int i=0;i<obj.length;i++){
		out.print(obj[i]+"<br>");
	}
}
%>
<hr>
<h3>/chapter09 리스트</h3>
<%
	java.util.Set<String> list2=application.getResourcePaths("/chapter09/");
if(list!=null){
	Object[] obj=list2.toArray();
	for(int i=0;i<obj.length;i++){
		out.print(obj[i]+"<br>");
	}
}
%>
</body>
</html>