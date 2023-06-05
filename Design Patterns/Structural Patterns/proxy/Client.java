public class Client
{
    public static void main (String[] args)
    {
        Internet internet = new ProxyInternet();
        try
        {
            internet.connectTo("e-learning.hcmut.edu.vn");
            internet.connectTo("tinhyeu.net");
        }
        catch (Exception e)
        {
            System.out.println(e.getMessage());
        }
    }
}