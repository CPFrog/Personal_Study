package com.springbook.biz.board.impl;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.springbook.biz.board.BoardService;
import com.springbook.biz.board.BoardVO;
import com.springbook.biz.common.Log4jAdvice;

@Service("boardService")
public class BoardServiceImpl implements BoardService {
	@Autowired
	private BoardDAO boardDAO;
	
	public void insertBoard(BoardVO vo) {
		// 강제로 예외처리를 발생시키는 함수. 필요없으면 주석처리할것.
		/*
		 * if(vo.getSeq()==0) { throw new IllegalArgumentException("0번 글은 등록할 수 없습니다.");
		 * }
		 */
		boardDAO.insertBoard(vo);
	}
	public void updateBoard(BoardVO vo) {
		boardDAO.updateBoard(vo);
	}
	public void deleteBoard(BoardVO vo) {
		boardDAO.deleteBoard(vo);
	}
	public BoardVO getBoard(BoardVO vo) {
		return boardDAO.getBoard(vo);
	}
	public List<BoardVO> getBoardList(BoardVO vo) {
		return boardDAO.getBoardList(vo);
	}
}