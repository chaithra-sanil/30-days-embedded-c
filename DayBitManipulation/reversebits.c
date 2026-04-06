
//Given an integer, reverse its binary representation and print the result.
//Code without the compiler specific only the actuall numbers not includes 0
/* #include <stdio.h>
int main(){
    int num = 2, result=0,bit;
    while(num>0){
        bit= num & 1;
        result = result << 1;
        result = result | bit;
        if(result &1){
            printf("%d", 1);
        }else{
            printf("%d",0);
        }
        num =num >>1;
    }
    printf("\n%d",result);
} */

#include <stdio.h>

int main(){
    int num = 6;  // Example
    int result = 0, bit;

    for(int i = 0; i < 8; i++){   // 8-bit reversal
        bit = num & 1;
        result = result << 1;
        result = result | bit;
        num = num >> 1;
    }

    printf("Reversed number = %d\n", result);

    return 0;
}