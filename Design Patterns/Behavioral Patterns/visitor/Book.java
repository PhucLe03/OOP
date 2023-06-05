public class Book implements Product {

	private int price;
	private int id;
	
	public Book(int cost, int id){
		this.price = cost;
		this.id = id;
	}
	
	public int getPrice() {
		return price;
	}

	public int getID() {
		return id;
	}

	@Override
	public int accept(CartVisitor visitor) {
		return visitor.visit(this);
	}
}