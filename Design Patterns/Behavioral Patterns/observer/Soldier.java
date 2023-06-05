public class Soldier implements Observer {
    private String name;
    public Soldier(String name) {
        this.name = name;
    }
    @Override
    public void update(String message) {
        System.out.println("Soldier " + name + " received order from " + message);
    }
}
