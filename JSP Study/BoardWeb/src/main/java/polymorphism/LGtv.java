package polymorphism;

public class LGtv implements TV {
	public void powerOn() {
		System.out.println("LGtv--전원 ON");
	}
	public void powerOff() {
		System.out.println("LGtv--전원 OFF");
	}
	public void channelUp() {
		System.out.println("LGtv--다음 채널");
	}
	public void channelDown() {
		System.out.println("LGtv--이전 채널");
	}
	public void volumeUp() {
		System.out.println("LGtv--볼륨 높임");
	}
	public void volumeDown() {
		System.out.println("LGtv--볼륨 낮춤");
	}
}