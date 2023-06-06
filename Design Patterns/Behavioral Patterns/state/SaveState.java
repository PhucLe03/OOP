public class SaveState implements State {
    @Override
    public void handleRequest() {
        System.out.println("Document is saved");
    }
}