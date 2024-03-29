package com.springbook.biz.board;

import java.util.List;

public interface BoardService {
	// CRUD 기능의 메소드 구현
	// 등록
	void insertBoard(BoardVO vo);

	// 수정
	void updateBoard(BoardVO vo);

	// 삭제
	void deleteBoard(BoardVO vo);

	// 게시글 보기
	BoardVO getBoard(BoardVO vo);

	// 글 목록 조회
	List<BoardVO> getBoardList(BoardVO vo);
}
