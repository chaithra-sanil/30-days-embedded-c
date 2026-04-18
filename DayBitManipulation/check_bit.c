/* #include <stdio.h>
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
} */

/* Given an array find the xor of all the elements where the number in that ithbit is set 
array= [2,4,10,1,3] and result should be 1^3 , ith pos is 0th*/

#include <stdio.h>
int main(){

    int arr[5]={2,4,10,1,3};
    int result, pos=0,i, xoresult=0;
    for(i=0;i<5;i++){
        result = (arr[i] & (1<<pos));
        if(result >0){
            xoresult ^= arr[i];
        }
    }
    printf("%d",xoresult);
}