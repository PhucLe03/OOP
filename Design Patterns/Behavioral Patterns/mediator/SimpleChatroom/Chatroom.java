import java.util.Date;

public class Chatroom {
    public static void showMessage(ChatUser user, String message) {
        System.out.println(new Date().toString() + "\n[" + user.getDisplayName() + "] : " + message);
    }
}
