package com.test.controller;

import java.util.ArrayList;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestParam;

import com.test.logic.ContactsApplication;
import com.test.model.User;

@Controller
public class ContactsController {
    @GetMapping("/contacts")
    public String displayContacts(Model model) {
        model.addAttribute("contactMap", ContactsApplication.contacts);
        if (ContactsApplication.contacts.size() == 0) {
            model.addAttribute("show", "-1");
        } else {
            model.addAttribute("show", "1");
        }
        return "contactsDashboard";
    }

    @PostMapping("/addContact")
    public String addContact(Model model, @RequestParam("name") String name, @RequestParam("number") Long number,
            @RequestParam("email") String email) {
        if (email == "")
            email = "dummymail@dummymail.com";
        ContactsApplication.contacts.add(new User(name, email, number));
        if (ContactsApplication.contacts.size() == 0) {
            model.addAttribute("show", "-1");
        } else {
            model.addAttribute("show", "1");
        }
        model.addAttribute("contactMap", ContactsApplication.contacts);
        return "contactsDashboard";
    }

    @PostMapping("/removeContact")
    public String removeContact(Model model, @RequestParam("number") int number) {

        ContactsApplication.contacts.remove(number);
        if (ContactsApplication.contacts.size() == 0) {
            model.addAttribute("show", "-1");
        } else {
            model.addAttribute("show", "1");
        }
        model.addAttribute("contactMap", ContactsApplication.contacts);
        return "contactsDashboard";
    }

    @PostMapping("/edit")
    public String edit(Model model, @RequestParam("name") String name, @RequestParam("number") Long number,
            @RequestParam("email") String email,
            @RequestParam("modify") Integer index) {
        if (ContactsApplication.contacts.size() == 0) {
            model.addAttribute("show", "-1");
        } else {
            model.addAttribute("show", "1");
        }
        model.addAttribute("contactMap", ContactsApplication.contacts);
        model.addAttribute("edit", "1");
        model.addAttribute("name", name);
        model.addAttribute("number", number);
        model.addAttribute("email", email);
        model.addAttribute("index", index);
        return "contactsDashboard";
    }

    @PostMapping("/editContact")
    public String editContact(Model model, @RequestParam("name") String name, @RequestParam("number") Long number,
            @RequestParam("email") String email,
            @RequestParam("modify") Integer index) {

        ContactsApplication.contacts.set(index, new User(name, email, number));
        if (ContactsApplication.contacts.size() == 0) {
            model.addAttribute("show", "-1");
        } else {
            model.addAttribute("show", "1");
        }
        model.addAttribute("contactMap", ContactsApplication.contacts);
        return "contactsDashboard";
    }

    @PostMapping("/search")
    public String search(Model model, @RequestParam("search") String search) {
        ArrayList<User> searchList = new ArrayList<>();
        for (User u : ContactsApplication.contacts) {
            if (u.getName().contains(search)) {
                searchList.add(u);
            }
            if ((u.getNumber() + "").contains(search)) {
                searchList.add(u);
            }
            if (u.getEmail().contains(search)) {
                searchList.add(u);
            }
        }
        if (search.equals(""))
            model.addAttribute("contactMap", ContactsApplication.contacts);
        else
            model.addAttribute("contactMap", searchList);
        if (searchList.size() == 0) {
            model.addAttribute("show", "-1");
        } else {
            model.addAttribute("show", "1");
        }
        return "contactsDashboard";
    }
}


<!-- HTML !-->
<button class="button-3" role="button">Button 3</button>

/* CSS */
.button-3 {
  appearance: none;
  background-color: #2ea44f;
  border: 1px solid rgba(27, 31, 35, .15);
  border-radius: 6px;
  box-shadow: rgba(27, 31, 35, .1) 0 1px 0;
  box-sizing: border-box;
  color: #fff;
  cursor: pointer;
  display: inline-block;
  font-family: -apple-system,system-ui,"Segoe UI",Helvetica,Arial,sans-serif,"Apple Color Emoji","Segoe UI Emoji";
  font-size: 14px;
  font-weight: 600;
  line-height: 20px;
  padding: 6px 16px;
  position: relative;
  text-align: center;
  text-decoration: none;
  user-select: none;
  -webkit-user-select: none;
  touch-action: manipulation;
  vertical-align: middle;
  white-space: nowrap;
}

.button-3:focus:not(:focus-visible):not(.focus-visible) {
  box-shadow: none;
  outline: none;
}

.button-3:hover {
  background-color: #2c974b;
}

.button-3:focus {
  box-shadow: rgba(46, 164, 79, .4) 0 0 0 3px;
  outline: none;
}

.button-3:disabled {
  background-color: #94d3a2;
  border-color: rgba(27, 31, 35, .1);
  color: rgba(255, 255, 255, .8);
  cursor: default;
}

.button-3:active {
  background-color: #298e46;
  box-shadow: rgba(20, 70, 32, .2) 0 1px 0 inset;
}



                display: inline-block;
                outline: 0;
                border:0;
                cursor: pointer;
                text-decoration: none;
                position: relative;
                color: #000;
                background: #fff;
                line-height: 30px;
                border-radius: 40px;
                padding: 20px;
                font-size: 30px;
                font-weight: 600;
                box-shadow: rgb(255, 198, 0) -2px -2px 0px 2px, rgb(246, 84, 174) 0px 0px 0px 4px, rgba(0, 0, 0, 0.05) 0px 0px 2px 7px;
                transition: all 0.2s;
                :hover{
                    box-shadow: rgb(246, 84, 174) -2px -2px 0px 2px, rgb(255, 198, 0) 0px 0px 0px 4px, rgba(0, 0, 0, 0.05) 0px 0px 2px 7px;
                    transform: scale(1.01);
                }
                