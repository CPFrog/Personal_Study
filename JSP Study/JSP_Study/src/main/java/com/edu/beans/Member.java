package com.edu.beans;

public class Member {
	private String id;
	private String passwd;
	private String name;
	private String mail;
	
	public String getID() {
		return id;
	}
	public void setID(String id) {
		this.id=id;
	}

	public String getPW() {
		return passwd;
	}
	public void setPW(String passwd) {
		this.passwd=passwd;
	}
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name=name;
	}
	
	public String getMail() {
		return mail;
	}
	public void setMail(String mail) {
		this.mail=mail;
	}
}
