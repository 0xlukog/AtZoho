package com.objectwriter.model;

import java.io.Serializable;

public class Teacher implements Serializable {
    private int teacherId;
    private String teacherName;

    public Teacher(int teacherId, String teacherName) {
        this.teacherId = teacherId;
        this.teacherName = teacherName;
    }

    public int getteacherId() {
        return teacherId;
    }

    public void setteacherId(int teacherId) {
        this.teacherId = teacherId;
    }

    public String getteacherName() {
        return teacherName;
    }

    public void setteacherName(String teacherName) {
        this.teacherName = teacherName;
    }
}
