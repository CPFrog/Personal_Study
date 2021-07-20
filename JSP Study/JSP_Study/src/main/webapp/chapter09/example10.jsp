<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>login information</title>
</head>
<body>

<% if(request.getMethod().equals("POST")) {

		String id=request.getParameter("id");
		String pw=request.getParameter("pw");
		
		// 입력 여부 확인
		if(id.isEmpty() || pw.isEmpty()){
			request.setAttribute("error", "ID 또는 비밀번호가 입력되지 않았습니다.");
			RequestDispatcher rd=request.getRequestDispatcher("logInOut.jsp");
			rd.forward(request, response);
			return;
		}
		
		// 로그인 처리
		if(session.isNew()||session.getAttribute("id")==null){
			session.setAttribute("id", id);
			out.print("로그인 되었습니다.");
		}
		else{
			out.print("이미 "+id+" 계정으로 로그인되어있습니다.");
		}
	%>
	<br/>
	id : <%= id %> <br> 
	pw : <%= pw %>
	<%} else if(request.getMethod().equals("GET")) {
			if(session!=null&&session.getAttribute("id")!=null){
				session.invalidate();
				// out.print(session.getAttribute("id")+" 계정이 로그아웃 되었습니다.");
				// out.print(id + " 계정이 로그아웃 되었습니다.");
				// 첫번째 줄은 이미 세션이 종료되었기 때문에 id 객체를 불러올 수 없음.
				// 두 번째 줄은 함수의 블록이 다르기 때문에 id를 가져올 수 없음.
				out.print("로그아웃되었습니다.");
			}else{
				out.print("현재 로그인 상태가 아닙니다.");
			}
		}
	%>
	<% 
		RequestDispatcher rd=request.getRequestDispatcher("logInOut.jsp"); 
		rd.forward(request, response);
	%>
</body>
</html>