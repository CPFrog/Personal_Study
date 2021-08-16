package polymorphism;

public class SamsungTV implements TV{
	private SonySpeaker speaker;
	private int price;
	public SamsungTV() {
		speaker=new SonySpeaker();
		System.out.println("~~ SamsungTV 객체 생성 ~~");
	}
	public SamsungTV(SonySpeaker speaker) {
		System.out.println("~~ SamsungTV_2 객체 생성");
		this.speaker=speaker;
	}
	public SamsungTV(SonySpeaker speaker, int price) {
		System.out.println("~~ SamsungTV_3 객체 생성");
		this.speaker=speaker;
		this.price=price;
	}
	public void powerOn() {
		System.out.println("SamsungTV (가격 : "+price+")--전원 ON");
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
	public void volumeUp() {
		speaker.volumeUp();
	}
	public void volumeDown() {
		speaker.volumeDown();
	}
}
