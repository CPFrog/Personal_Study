package com.springbook.biz.user;

// Value Object
public class UserVO {
	private String ID;
	private String PW;
	private String name;
	private String role;
	
	public String getID() {
		return ID;
	}
	public void setID(String iD) {
		ID = iD;
	}
	public String getPW() {
		return PW;
	}
	public void setPW(String pW) {
		PW = pW;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getRole() {
		return role;
	}
	public void setRole(String role) {
		this.role = role;
	}
	@Override
	public String toString() {
		return "UserVO [ID="+ID+", PW="+PW+", name="+name+", role="+role+"]";
	}
}
