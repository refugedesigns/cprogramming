#include <stdio.h>
#include <string.h>


unsigned int my_function(unsigned int, unsigned int, unsigned int);


// Now start implementing my_function below, please note that the name of the function must be my_function and the prototype 
// should be exactly as instructed. 

unsigned int my_function(unsigned int first, unsigned int second, unsigned int third) {
    unsigned int highest = 0;
    if(third > second) {
        return 0;
    }
    for(unsigned int i = first + 1; i <= second; i++) {
        if(i % third == 0 && i > highest) {
            i = highest;
        }
    }
    return highest;
}

int main() {

    printf("%d", my_function(10, 25, 3));

    return 0;
}