#include <stdio.h>
int main(){
    int num, pos, result;
    printf("Enter the number and position:");
    scanf("%d %d", &num, &pos);
    result = (num & (1<<pos));
    if(result>0){
        printf("bit is set in the pos %d", pos);
    }else{
        printf("bit is unset in the pos %d", pos);
    }
}