package polymorphism;

public class BoseSpeaker implements Speaker{
	public BoseSpeaker() {
		System.out.println("~~ BoseSpeaker 객체 생성 ~~");
	}
	public void volumeUp() {
		System.out.println("BoseSpeaker--볼륨 Up");
	}
	public void volumeDown() {
		System.out.println("BoseSpeaker--볼륨 Down");
	}
}
