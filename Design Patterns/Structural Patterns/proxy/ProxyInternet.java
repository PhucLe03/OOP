import java.util.ArrayList;
import java.util.List;

public class ProxyInternet implements Internet
{
    private Internet internet = new RealInternet();
    private static List<String> bannedSites;
      
    static
    {
        bannedSites = new ArrayList<String>();
        bannedSites.add("nyc.com");
        bannedSites.add("ex.com");
        bannedSites.add("nguoiyeucu.com");
        bannedSites.add("quaytrolai.org");
        bannedSites.add("tinhyeu.net");
    }
      
    @Override
    public void connectTo(String serverhost) throws Exception
    {
        System.out.println("Requesting connection to " + serverhost);
        if(bannedSites.contains(serverhost.toLowerCase()))
        {
            throw new Exception("Access Denied. " + serverhost + " refused connection!");
        }
        internet.connectTo(serverhost);
    }
  
}