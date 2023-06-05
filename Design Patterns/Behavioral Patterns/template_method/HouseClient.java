public class HouseClient {

    public static void main(String[] args) {
      System.out.println("--Build Wooden House--");
		HouseTemplate houseType = new WoodenHouse();
		houseType.buildHouse();
		System.out.println("--Build Glass House--");
		houseType = new GlassHouse();		
		houseType.buildHouse();
	}
}