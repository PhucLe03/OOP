public class PublishState implements State {
    @Override
    public void handleRequest() {
        System.out.println("Document has been published");
    }
}