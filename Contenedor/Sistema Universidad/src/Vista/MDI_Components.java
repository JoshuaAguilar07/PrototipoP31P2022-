package Vista;

import java.net.InetAddress;
import java.net.UnknownHostException;


public class MDI_Components {

    public String getIp() throws UnknownHostException {
        InetAddress address = InetAddress.getLocalHost();
        return address.getHostAddress();
    }
}
