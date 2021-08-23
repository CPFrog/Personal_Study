package com.springbook.biz.board.impl;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.List;

import org.springframework.stereotype.Repository;

import com.springbook.biz.board.BoardVO;
import com.springbook.biz.common.JDBCUtil;

//Data Access Object
@Repository("boardDAO")
public class BoardDAO {
	// JDBC 관련 변수
	private Connection con=null;
	private PreparedStatement stmt=null;
	private ResultSet rs=null;
	
	//SQL 명령어
	private final String BOARD_INSERT = "insert into board(seq,title,writer,content) values((select nvl(max(seq),0)+1 from board),?,?,?)";
	private final String BOARD_UPDATE = "update board set title=?, content=? where seq=?";
	private final String BOARD_DELETE = "delete board where seq=?";
	private final String BOARD_GET = "select * from board where seq=?;";
	private final String BOARD_LIST = "select * from board orderby seq desc";
	
	//CRUD 기능 구현
	public void insertBoard(BoardVO vo) {
		System.out.println("--> JDBC로 insertBoard() 메소드 호출");
		try {
			con=JDBCUtil.getConnection();
			stmt=con.prepareStatement(BOARD_INSERT);
			stmt.setString(1, vo.getTitle());
			stmt.setString(2, vo.getWriter());
			stmt.setString(3, vo.getContent());
			stmt.executeUpdate();
		} catch (Exception e) {
			e.printStackTrace();
		}finally {
			JDBCUtil.close(stmt, con);
		}
	}
	// 글 수정
	public void updateBoard(BoardVO vo) {
		System.out.println("--> JDBC로 updateBoard() 메소드 호출");
		try {
			con=JDBCUtil.getConnection();
			stmt=con.prepareStatement(BOARD_UPDATE);
			stmt.setString(1, vo.getTitle());
			stmt.setString(2, vo.getContent());
			stmt.setInt(3, vo.getSeq());
			stmt.executeUpdate();
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			JDBCUtil.close(stmt, con);
		}
	}
	
	//글 삭제
	public void deleteBoard(BoardVO vo) {
		System.out.println("--> JDBC로 deleteBoard() 메소드 호출");
		try {
			con=JDBCUtil.getConnection();
			stmt=con.prepareStatement(BOARD_DELETE);
			stmt.setInt(1, vo.getSeq());
			stmt.executeUpdate();
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			JDBCUtil.close(stmt, con);
		}
	}
	
	//게시글 보기
	public BoardVO getBoard(BoardVO vo) {
		System.out.println("--> getBoard() 메소드 호출");
		BoardVO board=null;
		try {
			con=JDBCUtil.getConnection();
			stmt=con.prepareStatement(BOARD_GET);
			stmt.setInt(1, vo.getSeq());
			rs=stmt.executeQuery();
			if(rs.next()) {
				board=new BoardVO();
				board.setSeq(rs.getInt("SEQ"));
				board.setTitle(rs.getString("TITLE"));
				board.setWriter(rs.getString("WRITER"));
				board.setContent(rs.getString("CONTENT"));
				board.setRegDate(rs.getDate("REGDATE"));
				board.setCnt(rs.getInt("CNT"));
			}
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			JDBCUtil.close(rs, stmt, con);
		}
		return board;
	}
	
	// 글 목록 조회
		public List<BoardVO> getBoardList(BoardVO vo) {
			System.out.println("--> getBoardList() 메소드 호출");
			List<BoardVO> boardList=new ArrayList<BoardVO>();
			try {
				con=JDBCUtil.getConnection();
				stmt=con.prepareStatement(BOARD_LIST);
				rs=stmt.executeQuery();
				while(rs.next()) {
					BoardVO board=new BoardVO();
					board.setSeq(rs.getInt("SEQ"));
					board.setTitle(rs.getString("TITLE"));
					board.setWriter(rs.getString("WRITER"));
					board.setContent(rs.getString("CONTENT"));
					board.setRegDate(rs.getDate("REGDATE"));
					board.setCnt(rs.getInt("CNT"));
					boardList.add(board);
				}
			} catch (Exception e) {
				e.printStackTrace();
			} finally {
				JDBCUtil.close(rs, stmt, con);
			}
			return boardList;
		}
}
