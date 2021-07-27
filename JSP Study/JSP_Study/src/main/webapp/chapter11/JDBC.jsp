<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    <%@ page import="java.sql.*" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
	/* 
	② 드라이버 문제 해결 후 network adapter could not establish the connection 에러 발생
	- 원인 : OracleXETNSListener가 중지됨.
	- 원인의 원인 : 위의 Listener가 8080포트를 선점하고 있어 서버가 정상실행되지 못해 taskkill 커맨드로 프로세스 강제종료함.
	- 해결 : 작업관리자에서 OracleXETNSListener 재시작.
	*/
	//1. JDBC Driver 로딩
	Class.forName("oracle.jdbc.driver.OracleDriver");
	//2. DB 서버 접속하기
	String url="jdbc:oracle:thin:@localhost:1521:xe";
	/*
	① 이 부분에서 Error:500 발생.
	- 원인 : jdbc 드라이버 설치 인식 못함.
	- 해결법 : tomcat 설치 폴더의 lib 폴더에 jdbc6.jar 파일 복사후 재실행.
	*/
	Connection con=DriverManager.getConnection(url, "scott", "tiger");
	//3. Statement 또는 PreparedStatement 객체 생성하기
	Statement stmt=con.createStatement();
	//4. SQL 실행
	stmt.executeUpdate("create table test(id varchar2(5),pwd varchar(5))");
	//5. 자원 해제
	stmt.close();
	con.close();
%>
OK

</body>
</html>