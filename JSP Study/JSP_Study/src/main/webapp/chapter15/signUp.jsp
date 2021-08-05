<%@ page language="java" contentType="text/html; charset=UTF-8" %>

<head>
<meta charset="UTF-8">
<title>회원가입</title>
</head>
<body>

<h3>회원가입 (Sign up)</h3>
<form action="memberProc.jsp" method="post">
	ID : <input type="text" name="id" ><br>
	비밀번호 : <input type="password" name="passwd"><br>
	이름 : <input type="text" name="name"><br>
	이메일 : <input type="text" name="mail"><br>
	
	<input type="submit" value="가입">

</form>

</body>
