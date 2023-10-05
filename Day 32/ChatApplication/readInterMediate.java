package ChatApplication;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.util.Scanner;

public class readInterMediate extends Thread {
    DataInputStream input;
    DataOutputStream ouput;

    Scanner s = new Scanner(System.in);

    public readInterMediate(DataInputStream input, DataOutputStream output) {
        this.input = input;
        this.ouput = output;

    }

    @Override
    public synchronized void run() {
        while (true) {
            try {
                System.out.println(input.readUTF());
            } catch (IOException e) {
                System.out.println("error");
                e.printStackTrace();
            }
        }
    }
}