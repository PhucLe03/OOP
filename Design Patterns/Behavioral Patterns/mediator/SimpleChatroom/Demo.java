public class Demo {
    public static void main(String[] args) {
        ChatUser phuc = new ChatUser("Phuc");
        phuc.setNickName("HaiLua03");
        ChatUser hacker = new ChatUser("Hacker");
        phuc.sendMessage("Hello");
        hacker.sendMessage("Hello");
    }
}
