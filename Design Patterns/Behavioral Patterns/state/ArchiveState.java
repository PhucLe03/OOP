public class ArchiveState implements State {
    @Override
    public void handleRequest() {
        System.out.println("Document has been archived");
    }
}