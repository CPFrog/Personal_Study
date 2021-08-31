package com.springbook.biz.user.impl;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import org.springframework.stereotype.Repository;

import com.springbook.biz.common.JDBCUtil;
import com.springbook.biz.user.UserVO;

// User Data Access Object
@Repository("userDAO")
public class UserDAO {
	// JDBC 관련 변수
	private Connection con = null;
	private PreparedStatement stmt = null;
	private ResultSet rs = null;

	// SQL 명령어들
	private final String USER_GET = "select * from users where id=? and password=?";

	// CRUD 기능 구현
	public UserVO getUser(UserVO vo) {
		UserVO user = null;
		try {
			System.out.println("--> getUser() 호출");
			con = JDBCUtil.getConnection();
			stmt = con.prepareStatement(USER_GET);
			stmt.setString(1, vo.getID());
			stmt.setString(2, vo.getPW());
			rs = stmt.executeQuery();
			if (rs.next()) {
				user = new UserVO();
				user.setID(rs.getString("ID"));
				user.setPW(rs.getString("PASSWORD"));
				user.setName(rs.getString("NAME"));
				user.setRole(rs.getString("ROLE"));
			}
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			JDBCUtil.close(rs, stmt, con);
		}
		return user;
	}

}
