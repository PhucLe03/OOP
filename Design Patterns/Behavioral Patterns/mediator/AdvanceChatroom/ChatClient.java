public class ChatClient {
     
    public static void main(String[] args) {
        ChatMediator mediator = new ChatMediatorImpl("LTNC Group");
         
        User admin = new UserImpl(mediator, "Prof. Tuan Anh");
        User user1 = new UserImpl(mediator, "Le Hoang Phuc");
        User user2 = new UserImpl(mediator, "Hoang Phuc Le");
        User user3 = new UserImpl(mediator, "Phuc Le Hoang");
         
        mediator.addUser(admin);
        mediator.addUser(user1);
        mediator.addUser(user2);
        mediator.addUser(user3);
 
        admin.send("Hi All!");
        user1.send("Da em chao thay.");
    }
}