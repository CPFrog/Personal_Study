<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>EL-param</title>
</head>
<body>
${param.id } / ${param.pwd } <br>
${param["id"] } / ${ param["pwd"]}<br>

</body>
</html>