package com.services;

public class HtmlTags {
    
    public static final String htmlToBody = "<html><body>";
    public static final String bodyToHtml = "</body></html>";

    public static String htmlGenerator(String contents) {

        return htmlToBody + contents + bodyToHtml;

    }
    public static String imgGenerator(String location,String id){

        return "<img src = \""+location+"\" height=400px width=400px id=\""+id+"\">";

    }
    public static String h1Generator(String contents, String id) {

        return "<h1>" + contents + "</h1>";


    }
        public static String buttonGenerator(String contents, String id) {

        return "<button id=\""+id+"\">" + contents + "</button>";


    }

    public static String h2Generator(String contents, String id) {

        return "<h2>" + contents + "</h2>";

    }


    public static String h3Generator(String contents, String id) {

        return "<h3>" + contents + "</h3>";

    }

    public static String h4Generator(String contents, String id) {

        return "<h4>" + contents + "</h4>";

    }

    public static String liGenerator(String contents, String id) {

        return "<li>" + contents + "</li>";

    }

    public static String olGenerator(String contents, String id) {

        return "<ol>" + contents + "</ol>";

    }

}
