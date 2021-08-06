<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<html>
<head>
<meta charset="UTF-8">
<title>생성</title>
</head>
<body>
<h3>회원 가입</h3>

${error}

<form action="memberInsert.do" method="post">
	ID : <input type="text" name="id"><br>
	비밀번호 : <input type="password" name="pw"><br>
	이름 : <input type="text" name="name"><br>
	메일주소 : <input type="text" name="mail"><br>
	
	<input type="submit" value="가입">
</form>
</body>
</html>