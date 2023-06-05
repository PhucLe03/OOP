public interface CartVisitor {
    
    int visit(Book book);
    int visit(Fruit fruit);
}