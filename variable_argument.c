#include <stdio.h>
#include <stdarg.h>


int sum(int count, ...) {
    int sum = 0;
    va_list sp;
    va_start(sp, count);

    for(int i = 0; i < count; i++) {
        sum += va_arg(sp, int);
    }

    va_end(sp);
    return sum;
}


int main() {
    int total = sum(5, 3, 43, 12, 4, 54);
    printf("Total is %d\n", total);
    return 0;
}