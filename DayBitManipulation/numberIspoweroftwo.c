#include <stdio.h>

int main() {
    // Write C code here
   int num;
   scanf("%d", &num);
   if(num==0){
       printf("number is not power of two");
   }
   else if( (num &(num-1))>0){
       printf("Number is not power of two");
   }else{
       printf("number is  power of two");
   }

    return 0;
}