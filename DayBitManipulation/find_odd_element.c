/* Given an array all the elements appear even number of times , except one find that elemnet */
#include <stdio.h>
int main(){
    int arr[10]={2,1,3,2,1,1,1,4,4};
    int i,result=0;
    for(i=0;i<10;i++){
        result ^= arr[i];
    }
    printf("Odd occureness elem is %d", result);
}