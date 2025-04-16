#include <stdio.h>
#include <math.h>

int get_total_digits(int);
int is_amstrong(int);


int main() {
    
    for(int i = 1; i <= 1000; i++) {
        if(is_amstrong(i)) {
            printf("%d is an amstrong number\n", i);
        }
    }

}

int get_total_digits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}


int is_amstrong(int number) {
    int total_digits = get_total_digits(number);
    int sum = 0;
    int temp = number;
 
    while(number > 0) {
        int digit = number % 10;
        sum += pow(digit, total_digits);
        number /= 10;
    }

    return sum == temp;
   
}