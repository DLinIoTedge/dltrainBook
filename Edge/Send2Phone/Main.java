package c.e.fighter;

import org.apache.commons.io.IOUtils;

import java.io.*;
import java.net.Socket;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
	    Scanner sc = new Scanner(System.in);
        System.out.print("Enter file path: ");
	    String path = sc.nextLine();

	    File file = new File(path);
        byte[] bytes = IOUtils.toByteArray(new FileInputStream(file));

        System.out.print("Enter IP: ");
        String host = sc.nextLine();
        Socket socket = new Socket(host, 9090);
        DataOutputStream dos = new DataOutputStream(socket.getOutputStream());
        dos.write(bytes);
        dos.flush();
        socket.close();
        System.out.println("Done");
    }
}
