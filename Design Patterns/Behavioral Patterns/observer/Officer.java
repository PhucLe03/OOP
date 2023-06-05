import java.util.ArrayList;
import java.util.List;

public class Officer implements Subject {

    private String name;
    private List<Observer> observers;

    public Officer(String name) {
        this.name = name;
        observers = new ArrayList<>();
    }

    @Override
    public void attach(Observer observer) {
        observers.add(observer);
    }
    @Override
    public void detach(Observer observer) {
        observers.remove(observer);
    }
    @Override
    public void announce(String message) {
        String notification = "Officer " + name + ": " + message;
        System.out.println("Officer " + name + " says: " + message);
        for (Observer observer : observers) {
            observer.update(notification);
        }
    }
}
