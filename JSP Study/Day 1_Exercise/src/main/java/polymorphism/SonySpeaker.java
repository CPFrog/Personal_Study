package polymorphism;

import org.springframework.stereotype.Component;

@Component("sony")
public class SonySpeaker implements Speaker {
	public SonySpeaker() {
		System.out.println("~~ SonySpeaker 객체 생성 ~~");
	}
	public void volumeUp() {
		System.out.println("SonySpeaker--음량 Up");
	}
	public void volumeDown() {
		System.out.println("SonySpeaker--음량 Down");
	}
}
