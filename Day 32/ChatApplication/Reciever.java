package ChatApplication;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.Scanner;

public class Reciever {
    public static void main(String[] args) throws UnknownHostException, IOException {
        String myName, yourName;
        Socket s = new Socket("localhost", 10000);
        ServerSocket sender = new ServerSocket(10001);
        Socket senderSocket = sender.accept();
        Scanner sc = new Scanner(System.in);
        DataInputStream input = new DataInputStream(s.getInputStream());
        DataOutputStream output = new DataOutputStream(senderSocket.getOutputStream());

        System.out.println("Enter your Name : ");
        myName = sc.nextLine();
        output.writeUTF(myName);
        yourName = input.readUTF();
        chatInterMediate c = new chatInterMediate(input, output, myName);
        readInterMediate r = new readInterMediate(input, output);
        c.start();
        r.start();
    }
}
