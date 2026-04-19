/*Given an array all the elments will ocuur even number of times except two , return that two numbers*/
/*First take xor of all numbs
  if the resukt take the first set bit and 
  then group the array two parts like set bit in the get position and unset based on that will get two numbs*/
#include<stdio.h>
int main(){
    int arr[8]={4,1,2,3,2,1,5,4};
    int xor=0,num1=0,num2=0,i=0,pos=0;
    for(i=0;i<8;i++){
        xor ^= arr[i];
    }
    /*consider the 32 bit integer*/
    for(i=0;i<32;i++){
        if((xor &(1<<i))>0){
            pos=i;
            break;
        }
    }
    for(i=0;i<8;i++){
        /*set bit group xor*/
        if((arr[i] &(1<<pos))>0){
            num1 ^= arr[i];
        }else{
            num2 ^= arr[i];
        }
    }
    printf("Two occured odd numbers are: %d %d", num1,num2);
}