// PROGRAM TO Read a data from file if that is 1 then  replace that wilth 0

#include <stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp = fopen("abc.txt","r+");

    if (fp == NULL){
        printf("File cannot be openede");
    }else{
        ch = fgetc(fp);
        if(ch=='1'){
            fseek(fp,-1, SEEK_CUR);
            fputc('0',fp);
            printf("writing done to the file");
        }else{
            printf("file content is %c",ch);
        }

    }

    fclose(fp);
}