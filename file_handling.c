#include <stdio.h>

void writeChars(FILE *fp) {
    for(char c = 'a'; c <= 'z'; c++) {
        // write a single character
        fputc(c, fp);
    }
}

void printFromFile(FILE *fp) {
    // for(char ch = fgetc(fp); ch != feof(fp); ch++) {
    //     printf("%c", ch);
    // }
    // get a single character
    char ch = fgetc(fp);
    while(!feof(fp)) {
        printf("%c", ch);
        ch = fgetc(fp);
    }
}


int main() {
    FILE *fp;
    fp = fopen("text.txt", "r");
    if(fp == NULL) {
        printf("Could not open file!\n");
        return 1;
    }
    // writeChars(fp);
    printFromFile(fp);

    fclose(fp);
    return 0;

}