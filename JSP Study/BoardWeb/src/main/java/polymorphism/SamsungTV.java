package polymorphism;

public class SamsungTV implements TV{
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
