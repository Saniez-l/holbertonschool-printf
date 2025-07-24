# **Project : _printf**

## Description

Ce projet consiste à recréer la fonction standard printf de la bibliothèque C.

## Linck GitHub

([GitHub Pages]())

## Fonctionnalités

%% : Print character -> %

%c : Print a character

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

![How the function works.](image/printf.drawio.png)

## Regles respectées

+ Editors such as vi, vim, and emacs were used during development.
+ Compilation was performed on Ubuntu 20.04 LTS using gcc with the following options: -Wall -Werror -Wextra -pedantic -std=gnu89.
+ Every source file was ensured to end with a newline character.
+ A README.md file was created and placed at the root of the project directory.
+ The codebase follows the Betty coding style and was verified using betty-style.pl and betty-doc.pl.
+ No global variables were used.
+ Each source file contains no more than five functions to maintain readability and structure.
+ Example main.c files were used for testing but were not included in the repository, in accordance with evaluation requirements. The final compilation was conducted using external main.c files.
+ All function prototypes have been declared within a header file named main.h, which is included in the repository.
+ Appropriate include guards were implemented in all header files to prevent multiple inclusions.
.........................................
## Auteur
Sarah Wacquier
Christophe Saniez-Lenthieul