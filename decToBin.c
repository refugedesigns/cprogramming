#include <stdio.h>


void decToBin(unsigned int num) {
    if (num == 0) {
        return;
    }
    decToBin(num / 2);
    printf("%d", num % 2);
}

int main() {
    unsigned int num;
    num = 12;
    decToBin(num);
    return 0;
}
