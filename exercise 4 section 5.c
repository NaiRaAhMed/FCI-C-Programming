// (Vowels or Constants) Write a C program to read a lower or upper case character (w) and determine if it is vowel or constant character. Vowel characters are (a, e, i, o, and u) otherwise it is constant.

#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel , uppercase_vowel ;
    printf ("Enter an alphabet: ");
    scanf ("%c", &c) ;

    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c) ;
    else
        printf("%c is a consonant.", c) ;
    return 0;
}
