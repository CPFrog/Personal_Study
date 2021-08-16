package polymorphism;

public class TVUser {
	public static void main(String[] args) {
//		SamsungTV tv=new SamsungTV();
//		tv.powerON();
//		tv.channelUP();
//		tv.channelDown();
//		tv.powerOFF();
		
//		LGtv tv=new LGtv();
//		tv.turnON();
//		tv.chUP();
//		tv.chDown();
//		tv.turnOFF();
		
		TV tv=new SamsungTV();//new LGtv();
		tv.powerOn();
		tv.channelUp();
		tv.channelDown();
		tv.powerOff();
	}
}
