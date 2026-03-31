#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("abc.txt", "r+");

    if (fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '1') {
            fseek(fp, -1, SEEK_CUR);  // Move back to overwrite
            fputc('0', fp);
            // After writing, pointer automatically moves forward
        }
    }

    printf("All '1's replaced with '0's");

    fclose(fp);
    return 0;
}