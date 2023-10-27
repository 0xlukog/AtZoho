package com.services;

import org.thymeleaf.TemplateEngine;
import org.thymeleaf.context.Context;
import org.thymeleaf.templateresolver.FileTemplateResolver;

public class ThymeleafHelper {

    public static String process(Context c, String template) {
        TemplateEngine templateEngine = new TemplateEngine();
        FileTemplateResolver fileTemplateResolver = new FileTemplateResolver();
        fileTemplateResolver.setTemplateMode("HTML5");
        fileTemplateResolver.setPrefix("./../webapps/thymeleaf/WEB-INF/templates/");
        fileTemplateResolver.setSuffix(".html");
        fileTemplateResolver.setCacheable(false);
        templateEngine.setTemplateResolver(fileTemplateResolver);

        return templateEngine.process(template, c);
    }
}
