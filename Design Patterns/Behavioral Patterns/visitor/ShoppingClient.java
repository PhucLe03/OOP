public class ShoppingClient {

	public static void main(String[] args) {
		Product[] items = new Product[]{
            new Book(20,1234),
            new Book(100,5678),
            new Fruit(10, 2, "Banana"),
            new Fruit(5, 5, "Apple")
        };
		int total = calculatePrice(items);
		System.out.println("Total cost: " + total);
	}

	private static int calculatePrice(Product[] items) {
		CartVisitor visitor = new ConcreteCartVisitor();
		int sum = 0;
		for(Product item : items){
			sum += item.accept(visitor);
		}
		return sum;
	}
}