//22Check whether a character is an uppercase or lowercase alphabet.....
#include <stdio.h>
void ul(char );
//Run...
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
     ul(c);
}
//Defination
void ul(char c){
    if (c >= 'a' && c <= 'z')
        printf("%c is an lower case", c);
    else if  (c >= 'A' && c <= 'Z')
        printf("%c is  an uper case", c);
    else 
    printf("%c is not an alphabet",c);
}
