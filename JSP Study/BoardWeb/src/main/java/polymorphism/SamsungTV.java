package polymorphism;

public class SamsungTV implements TV{
	public void initMethod() {
		System.out.println("객체 초기화 진행");
	}
	public void destroyMethod() {
		System.out.println("객체 삭제 로직 처리");
	}
	public SamsungTV() {
		System.out.println("~~ SamsungTV 객체 생성 ~~");
	}
	public void powerOn() {
		System.out.println("SamsungTV--전원 ON");
	}
	public void powerOff() {
		System.out.println("SamsungTV--전원 OFF");
	}
	public void channelUp() {
		System.out.println("SamsungTV--채널 UP");
	}
	public void channelDown() {
		System.out.println("SamsungTV--채널 Down");
	}
}
