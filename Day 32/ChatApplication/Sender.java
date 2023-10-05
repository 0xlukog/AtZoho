package ChatApplication;

import java.io.DataInputStream;
import java.io.DataOutput;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

public class Sender {
    public static void main(String[] args) throws IOException {

        String myName;
        String yourName;
        ServerSocket serverSocket = new ServerSocket(10000);
        Socket s = serverSocket.accept();
        Socket reciever = new Socket("localhost", 10001);
        DataInputStream input = new DataInputStream(reciever.getInputStream());
        DataOutputStream output = new DataOutputStream(s.getOutputStream());

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your Name : ");
        myName = sc.nextLine();
        output.writeUTF(myName);
        yourName = input.readUTF();
        chatInterMediate c = new chatInterMediate(input, output,myName);
        readInterMediate r = new readInterMediate(input, output);
        r.start();
        c.start();

    }
}
