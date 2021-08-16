package polymorphism;

import org.springframework.context.support.AbstractApplicationContext;
import org.springframework.context.support.GenericXmlApplicationContext;

public class TVUser {
	public static void main(String[] args) {
		//Spring 컨테이너 구동
		AbstractApplicationContext factory=
				new GenericXmlApplicationContext("applicationContext.xml");
		
		//Spring 컨테이너로부터 필요한 객체 요청(Lookup)
		TV tv=(TV)factory.getBean("tv");
		tv.powerOn();
		tv.channelUp();
		tv.channelDown();
		tv.powerOff();
		
		//Spring 컨테이너 종료
		factory.close();
	}
}
