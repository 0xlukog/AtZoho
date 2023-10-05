package ChatApplication;

import java.io.DataInputStream;
import java.io.DataOutput;
import java.io.DataOutputStream;
import java.io.IOException;
import java.util.Scanner;

public class chatInterMediate extends Thread {
    DataInputStream input;
    DataOutputStream ouput;
    String name;

    Scanner s = new Scanner(System.in);

    public chatInterMediate(DataInputStream input, DataOutputStream output,String name) {
        this.input = input;
        this.ouput = output;
        this.name = name;

    }

    @Override
    public synchronized void run() {
        while (true) {
            try {
                ouput.writeUTF(name+" : "+s.nextLine());
            } catch (IOException e) {
                System.out.println("error");
                e.printStackTrace();
            }
        }
    }

}
