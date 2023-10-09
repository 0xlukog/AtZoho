package com.objectwriter.service;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;

public class FileService<T> {
    private FileInputStream fileInput;
    private FileOutputStream fileOutput;
    private ObjectInputStream objectInputStream;
    private ObjectOutputStream objectOutputStream;
    private String filePath;

    public FileService(String filePath) {
        this.filePath = filePath;
    }

    public void writeObjectToFile(ArrayList<T> obj) {
        try {
            fileOutput = new FileOutputStream(filePath);
            objectOutputStream = new ObjectOutputStream(fileOutput);
            objectOutputStream.writeObject(obj);

        } catch (FileNotFoundException f) {
            System.out.println("File not found ... ");
        } catch (IOException io) {
            System.out.println("Error in accessing the IO");
        } finally {
            try {
                // objectOutputStream.flush();
                objectOutputStream.close();
                fileOutput.close();
            } catch (IOException e) {
                System.out.println("Error in closing ouptut streams");
            }
        }
    }

    public ArrayList<T> readObjectFromFile() {
        ArrayList<T> objArrayList = new ArrayList<>();
        try {
            fileInput = new FileInputStream(filePath);
            objectInputStream = new ObjectInputStream(fileInput);
            while (true) {
                try {
                    T obj = (T) objectInputStream.readObject();
                    objArrayList.add(obj);
                } catch (Exception e) {
                    break;
                }
            }
        } catch (FileNotFoundException f) {
            System.out.println("File not found ... ");
        } catch (IOException io) {
            System.out.println("Error in accessing the IO");
        } finally {
            try {
                objectInputStream.close();
                fileInput.close();
            } catch (IOException e) {
                System.out.println("Error in closing ouptut streams");
            }
        }
        return objArrayList;
    }
}
