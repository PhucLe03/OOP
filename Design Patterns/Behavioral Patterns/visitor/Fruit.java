public class Fruit implements Product {
	
	private int pricePerKg;
	private int weight;
	private String name;
	
	public Fruit(int priceKg, int weight, String name){
		this.pricePerKg=priceKg;
		this.weight=weight;
		this.name = name;
	}
	
	public int getPricePerKg() {
		return pricePerKg;
	}

	public int getWeight() {
		return weight;
	}

	public String getName(){
		return this.name;
	}
	
	@Override
	public int accept(CartVisitor visitor) {
		return visitor.visit(this);
	}
}