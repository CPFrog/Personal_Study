<%@ page language="java" contentType="text/html; charset=UTF-8"%>
<%@ taglib prefix="fmt" uri="http://java.sun.com/jstl/fmt"%>

<fmt:requestEncoding value="UTF-8" />

Parameter : ${param.name }
<br>

<form action="examp09.jsp" method="post">
	이름 : <input type="text" name="name"> 
	<input type="submit" value="전송">
</form>

<%-- 해결 불가한 오류 발생. java 소스코드 폴더 (chapter7)과 충돌이 나는데, 
빌드에서 제외할 경우 모든 jsp 파일에서 404에러, 포함시킬 경우 다른 코드는 실행 되지만
이 파일은 500 에러 발생. 해결 불가...-->