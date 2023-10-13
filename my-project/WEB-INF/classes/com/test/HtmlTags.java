package com.test;

public class HtmlTags {
    public static final String htmlToBody = "<html><body>";
    public static final String bodyToHtml = "</body></html>";
    public static String htmlGenerator(String contents){
        return htmlToBody+contents+bodyToHtml;
    }
    public static String h1Generator(String contents){  
        return "<h1>"+contents+"</h1>";
    }
        public static String h2Generator(String contents){  
        return "<h2>"+contents+"</h2>";
    }
            public static String h3Generator(String contents){  
        return "<h3>"+contents+"</h3>";
    }
                public static String h4Generator(String contents){  
        return "<h4>"+contents+"</h4>";
    }
    public static String liGenerator(String contents){
        return "<li>"+contents+"</li>";
    }
    public static String olGenerator(String contents){
        return "<ol>"+contents+"</ol>";
    }

}
