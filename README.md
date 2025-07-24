# **Projet : _printf**

## Description

Ce projet consiste à recréer la fonction standard printf de la bibliothèque C.

## Lien GitHub

([GitHub Pages]())

## Fonctionnalités

%% : Affiche le caractère %

%c : Affiche un caractère

%s : Affiche une chaîne de caractères

%d / %i : Affiche un entier signé

%u : Affiche un entier non signé

%x / %X : Affiche un entier en hexadécimal (minuscule / majuscule)

%p : Affiche une adresse mémoire

## Utilisation

    #include "main.h"
    /**
    * main - Entry point
    *
    * Return: Always 0
    */
    int main(void)
    {
        _printf("DNegative:[%d]\n", -762534);
        printf("DNegative:[%d]\n", -762534);
        _printf("Positive:[%d]\n", 762534);
        printf("Positive:[%d]\n", 762534);
        _printf("short pos:[%d]\n", 4);
        printf("short pos:[%d]\n", 4);
        _printf("Negative short:[%d]\n", -4);
        printf("Negative short:[%d]\n", -4);
        _printf("INegative:[%i]\n", -762534);
        printf("INegative:[%i]\n", -762534);
        _printf("Positive:[%i]\n", 762534);
        printf("Positive:[%i]\n", 762534);
        _printf("short pos:[%i]\n", 4);
        printf("short pos:[%i]\n", 4);
        _printf("Negative short:[%i]\n", -4);
        printf("Negative short:[%i]\n", -4);
        _printf("Character:[%c]\n", 'H');
        printf("Character:[%c]\n", 'H');
        _printf("just a simple string\n");
        printf("just a simple string\n");
        _printf("just a simple [%s]\n", "string");
        printf("just a simple [%s]\n", "string");
        _printf("Unknown:[%r]\n");
        printf("Unknown:[%r]\n");
        _printf("percent:[%%]\n");
        printf("percent:[%%]\n");
        _printf("int %i str %s\n", 34, "chaine");
        printf("int %i str %s\n", 34, "chaine");
        _printf("percent:[%%] [%%x] [%%i]\n", 23);
        printf("percent:[%%] [%%x] [%%i]\n", 23);
        _printf("binary : %b\n", 23);
        printf("binary : %b\n", 23);
        return (0);
    }

Compile avec : gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format _printf.c types_functions_strchar.c types_functions_int.c types_function_binary.c anexfunctions.c testint.c -o printf

## Structure des fichier
+ _printf.c                             //fonction principale
+ main.                                 //header
+ types_function_binary.c               //fonction binaire
+ types_functions_int.c                 //fonction int
+ types_functions_strchar.c             //fonction string, char and %%
+ anexfunctions.c                       //fonction strlen
+ .gitignore                            //file where we put all the tests and executable files
+ README.md                             //explanation of the project

## Diagramme

![How the function works.](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=printf.drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22Page-1%22%20id%3D%22hDMjDn_aqMQqGBcxxVm3%22%3E7Vxbc5s4FP41nml3JhmQuPkxSZt2t91utmln233pKCDbtBh5sOzY%2FfUrATKWBAbbYJxNPZ0UhDjAOd%2B56jKAN9PVmwTNJn%2BSAEcDYASrAXw1AGAITfaXN6yzBtN1jaxlnIRB3lY03Ic%2Fcd4oui3CAM%2BljpSQiIYzudEncYx9KrWhJCGPcrcRieSnztAYaw33Por01n%2FCgE6yVg%2B4RftbHI4n4smmM8yuTJHonH%2FJfIIC8rjVBF8P4E1CCM2OpqsbHHHmCb5k991WXN28WIJj2uQG%2BMfn3z%2Bs7%2F6OE%2BqRn3cx%2FXf5%2FgJmVJYoWuQfHI4GwIkYxesgXLLDMT8cAFu0sgdIF9JPo2vBr2RCpg8LxvTrx0lI8f0M%2BfzKI0MHa5vQacTOzM2d26%2Bff9ESJxSvtpryz3mDyRTTZM265FfBMJdCDi5LgOaxkJQJ87bJlpS8vA3l4BhvSBf8Ywc5C8vZubj74vp%2Fvfmxwu8%2B%2FyTv%2FM%2Fv3ejC1Nh5%2F%2Bnq4yeNS4wUAzCu59IojKIbEpGEnUf8Ay4ClPx4MQDwChgGlwp7UXib%2Fl7y%2FiSmoj%2B7MEp%2FrH1OE%2FIDb11xbg32y%2B%2B4RdMw4kx8i6MlpqGP8gv3%2BSsbGxJCCayNCDV5lUi1UoTQHEoivHB0EXqOLkGrKwkCTYJL9G1OUZKhXdOMMeEWKSGL8YQfTDD7G4Vzyv4jo9QGjVOGzOc4SG3XptfIp3FTpSKLOMBBLohGinWcVAwgScUEJYoFShTL6Uoslm6nYhqiiPsL9riUwBIl7G%2BMccqqMmGxe%2FiDUqUxvnNJ4Tg7GUWIyyklnapFlWQ0mgweqbyrbzkzYYLehWlrwpS1aEQS5j3PjnGwd8Y5GuM0JrEoY8YP2WcyrcARGSdoyvgxw0nIXgIn6rW74kK9M1phEaJ1Bc6%2BWeyVGJrZokL3BVC5Bbm8vGxoABi3qMxYZsfGMTv2GddSQXCeMi8cXeUXpmEQRFXhgqwXbQgFKsC3NaE4JTKBXclkqMkkCOezCPFX9ifc6p%2BZpbCBzrHTwlhEwls8S33ddfpPA3IaliSYLpK4iGJwzN8zj2OyNhYDhnEa0LD%2FKY9onoTLc2DfZsXUMwMcBxqjGucFcjAOd2YKIxQMgyxTYJ8HsY1NbL4sSwoQtkym%2BwwPzETdi3zVVPIKmbqR%2FrI8JDt%2B2Y0Q3ZLU4MRC1JODsvCfsXXhM1Xixy98xjgUxpnWMK9LHrM8YD3Dc97CQcBrBf4k6zJaxD4NSTx%2F2bsWWUNDEoDVu3M2G5YrUn6mgeQibmyj9itcHMVZx1Y4a3g6Z0sLF3ZXnNUTLDSbRetycPYOTce2ZYfbv4HXkxoppzTLI8jUKWddrjWfe95OVpWBY%2FUugwb5EfO6V7wszKPtCM3noS8zRuYiY0Wy%2FsJPLm1x%2BnX72quVdLYWZ6uQbt3Gzr7m9PlxcRM%2FEfdkr4oDrR6tVUjnZJH4eAcjcj5QlIwx3dEPlAt4S4B2ifxEW4IjRMOl%2FLplQs2fcEey%2Bovw755sBE1bwUX2mfldBTQ0QhZUCBkKoYwPGqEUY5vPPgJ27i%2FYbVe%2Fa2Hn9Ak7NaoZHoo6hY6ppr9do06vVDxP1IGGqLP6RJ1tyGiBhxo7jZCK365hpxdjnifsrIaws3v1sUqicbC1UwnBE1s7EUc%2Be9jZOuyqB%2FZ7g51bY6Qaw04hZJ0adnrZ7ljYnQw%2BZwgLR5amrQbqjWHhAJkQODEswNOFRfUIy7nAwmkLFs6prYVennyeTkqMPtUGR2ZFiakf4LnmwcBTCKnRfdfA06u3rQFPgl2BwhrgmVuwK0B4GvfWBHegV9wplS9LrYgeWvmyVAB3jTu96P2%2Fx93OkcF64PUagDkqXg4FnjOEuwl1DbxflX55RLQeeL2WvzZjQwIvhyaErgF3E%2BoaeL9q%2FfKAcT3wei2AbUI6kRIcGuK5LtxNqGvg6eX%2BDxryzn9moSVnaJaXc7WvqYVAL2d%2FfXpstUyFrcI%2F9sVWqNfNniBbHVdenLJxNr2x9UR1J2OnF9l4LHO%2FGL2PsKdX56NP8zo46qkZPaxwPgwI6SRp0W3GO8x3eEsgP0cslGs6GLlvf%2FEdhU5kb9yq54R6Ve4Jek7H9WTWuaBnW9R%2B7t9zDt9voKqk5ra6RrWxrTDlaXnaYteWbIWn6LLj7tZ9tb%2Bi%2B7X9FdvSka1oMLuhAK1ZofxbCI%2FQA46uSRLgREyfj0nMrUaA5pMNFX5yhygzNNyy8GjOMEE7hkOz0frSFFA21Vh1Me0t5SyxE0x%2FxVJjktAJGZMYRa%2BL1muZ6UWf94TM8sbvmNJ1vjoNLSiRBbEJdPYwLv4iWW6s0x7yamd%2BSYVYj53%2BplRiTjxSYemJQfZ639LJziO%2BXiJdPJ2t6zJ%2BU5bY6asizt5z60FPMwXszHNb7lEKaByngPt495PrXEV1%2FkidA8pUUffERUurwbj0U%2FFqOxaDlWpRdzsS6PHvx2wBJbwqX%2BgxpnxNUrqyQ6yjfOLrhYUw3BKTZp7UpO03KzUHa2Umsr2WcgBgYGMv4BuejBMUhFjaYWXoBobrDkoWU3rgATpOjU4MspVBFcOeTYcAGpduWrSVdtPZ%2FnavczystqYi1hJqKa9SnyNqMpV5knlcfzgcKurXQV5l62HfLeHxXcTDh9MavHaVu4UAUUfWUDOnZaUdddJje%2Fuz7DePrc6a1tg%2FoMtk5PnY98tlgpHzkHJek8mDZ1v2PlauL5sEVIEfWheuJdRWrQeUP6fSxij9RXGr6Xco%2FTuySfqkuXOxSa3g%2FyibVIms3mzSfjN%2B9o3wEPZGFQx3GcexUcZwx%2Ffww6iZhTsswmtqyc5%2Bra86QVbdv6%2FxTFulmGKqgGvJ4gG7%2FIUrLZhd%2Fl7dWjB9MlJaRRuInUi2tu2UEky%2B1cCI8M1Isn0dsmLbk9hlAIqpDh3sMsBOi%2B1YMyEVm9rC1%2F8B%3C%2Fdiagram%3E%3C%2Fmxfile%3E#%7B%22pageId%22%3A%22hDMjDn_aqMQqGBcxxVm3%22%7D))

## Regles respectées

+ -> Code compilated on  Ubuntu 20.04 LTS using gcc with this option -Wall -Werror -Wextra -pedantic -std=gnu89
+ -> All file end with a new line
+ -> Code use betty style
+ -> No use global variable
+ -> 5 function maximum per file
+ -> Protype of all function incled in the main.h
.........................................
## Auteur


