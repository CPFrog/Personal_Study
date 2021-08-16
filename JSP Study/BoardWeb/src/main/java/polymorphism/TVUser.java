package polymorphism;

import org.springframework.context.support.AbstractApplicationContext;
import org.springframework.context.support.GenericXmlApplicationContext;

public class TVUser {
	public static void main(String[] args) {
		//Spring 컨테이너 구동
		AbstractApplicationContext factory=
				new GenericXmlApplicationContext("applicationContext.xml");
		
		//Spring 컨테이너로부터 필요한 객체 요청(Lookup)
		TV tv1=(TV)factory.getBean("tv");
		TV tv2=(TV)factory.getBean("tv");
		TV tv3=(TV)factory.getBean("tv");
		
		//Spring 컨테이너 종료
		factory.close();
	}
}
