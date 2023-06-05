public class ConcreteCartVisitor implements CartVisitor {

	@Override
	public int visit(Book book) {
		int cost = book.getPrice();
		System.out.println("Book id " + book.getID() + " cost: " + cost);
		return cost;
	}

	@Override
	public int visit(Fruit fruit) {
		int cost = fruit.getPricePerKg()*fruit.getWeight();
		System.out.println(fruit.getName() + " cost: " + cost);
		return cost;
	}

}