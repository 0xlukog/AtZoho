package com.test.model;


public class User {
    private String name;
    private String email;
    private Long number;    


public User(String name, String email, Long number) {
    this.name = name;
    this.email = email;
    this.number = number;
}

public String getName() {
    return name;
}

public void setName(String name) {
    this.name = name;
}

public String getEmail() {
    return email;
}

public void setEmail(String email) {
    this.email = email;
}

public Long getNumber() {
    return number;
}

public void setNumber(Long number) {
    this.number = number;
}
}
