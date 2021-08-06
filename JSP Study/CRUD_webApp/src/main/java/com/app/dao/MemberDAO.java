package com.app.dao;

import java.sql.*;
import com.app.vo.MemberVO;

public class MemberDAO {
	
	private static MemberDAO dao=new MemberDAO();
	private MemberDAO() {}
	public static MemberDAO getInstance() {
		return dao;
	}
	
	public Connection connect() {
		Connection con=null;
		
		try {
			Class.forName("oracle.jdbc.driver.OracleDriver");
			con=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe", "scott", "tiger");
		}catch(Exception e) {
			System.out.println("오류 발생 : " + e);
		}
		return con;
	}
	
	public void close(Connection conn, PreparedStatement ps, ResultSet rs) {
		if(rs!=null) {
			try {
				rs.close();
			} catch (Exception e) {
				System.out.println("오류 발생 : "+e);
			}
		}
		close(conn,ps);
	}
	public void close(Connection conn, PreparedStatement ps) {
		if(ps!=null) {
			try {
				ps.close();
			} catch (Exception e) {
				System.out.println("오류 발생 : " + e);
			}
		}
		if(conn!=null) {
			try {
				conn.close();
			} catch (Exception e) {
				System.out.println("오류 발생 : "+e);
			}
		}
	}
	
	public void memberInsert(MemberVO member) {
		Connection con = null;
		PreparedStatement pstmt=null;
		try {
			con=connect();
			pstmt=con.prepareStatement("insert into member values(?,?,?,?)");
			pstmt.setString(1, member.getID());
			pstmt.setString(2, member.getPW());
			pstmt.setString(3, member.getName());
			pstmt.setString(4, member.getMail());
			pstmt.executeUpdate();
		} catch (Exception e) {
			System.out.println("오류 발생 : " + e);
		}finally {
			close(con,pstmt); 
		}
	}
	public MemberVO memberSearch(String id) {
		Connection con=null;
		PreparedStatement pstmt=null;
		ResultSet rs=null;
		
		MemberVO member=null;
		
		try {
			con=connect();
			pstmt=con.prepareStatement("select * from member where id=?");
			pstmt.setString(1, id);
			rs=pstmt.executeQuery();
			if(rs.next()) {
				member=new MemberVO();
				member.setID(rs.getString(1));
				member.setPW(rs.getString(2));
				member.setName(rs.getString(3));
				member.setMail(rs.getString(4));
			}
		} catch (Exception e) {
			System.out.println("오류 발생 " + e);
		}finally {
			close(con,pstmt,rs);
		}
		return member;
	}
}
