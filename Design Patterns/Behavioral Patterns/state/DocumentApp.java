public class DocumentApp {
 
    public static void main(String[] args) {
        DocumentContext context = new DocumentContext();
 
        context.setState(new NewState());
        context.applyState();
 
        context.setState(new SaveState());
        context.applyState();
 
        context.setState(new PublishState());
        context.applyState();
    }
}