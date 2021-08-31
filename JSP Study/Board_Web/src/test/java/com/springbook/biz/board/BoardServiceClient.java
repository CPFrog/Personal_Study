package com.springbook.biz.board;

import java.util.List;

import org.springframework.context.support.AbstractApplicationContext;
import org.springframework.context.support.GenericXmlApplicationContext;

public class BoardServiceClient {
	public static void main(String[] args) {
		// 1. Spring 컨테이너 구동
		AbstractApplicationContext container = new GenericXmlApplicationContext("applicationContext.xml");

		// 2. 컨테이너에서 BoardServiceImpl 호출
		BoardService boardService = (BoardService) container.getBean("boardService");

		// 3. 글 등록 기능 테스트
		BoardVO vo = new BoardVO();
		vo.setTitle("테스트");
		vo.setWriter("매니저");
		vo.setContent("게시판 글 등록 기능 테스트중입니다.");
		boardService.insertBoard(vo);

		// 4. 글 목록 표시 기능 테스트
		List<BoardVO> boardList = boardService.getBoardList(vo);
		for (BoardVO i : boardList)
			System.out.println("-->" + i.toString());

		// 5. 컨테이너 종료
		container.close();
	}

}
