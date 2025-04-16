#include <stdio.h>


int main(){

    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("The uppercase character is: %c", ch + 32);
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("The lowercase character is: %c", ch - 32);
    }
    else{
        printf("You have entered a non-alphabetic character.");
    }

    return 0;
}
