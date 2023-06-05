public class ChatUser {
    private String name;
    private String nickname;

    public ChatUser(String name) {
        this.name = name;
        this.nickname = "";
    }

    public String getDisplayName() {
        if (nickname != "") return nickname;
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setNickName(String nickname) {
        this.nickname = nickname;
    }

    public void sendMessage(String message) {
        Chatroom.showMessage(this, message);
    }    
}
