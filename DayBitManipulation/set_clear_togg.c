
#include <stdio.h>
void binarydisp(int num){
    int bit;

    for(int i=7;i>=0;i--){ // i= 7 because to print in the correct order MSB bit first
    printf("%d", (num>>i)&1);
   }
 
}
int main(){
    int num, pos,set,clear,togg;
    printf("Enter the number and position:");
    scanf("%d", &num);
    scanf("%d",&pos);
    set = num | (1<<pos);
    clear = num & (~(1<<pos)); //here negation beacuse only change respecive bit if we an with the zero result will be 0
                            //so keep all bits in number one after shifting 1 expect the bit 
    togg = num ^ (1<<pos);
    printf("set= %d, clear= %d, toggle= %d\n", set,clear,togg);
    binarydisp(set);
    printf("\n");
    binarydisp(clear);
    printf("\n");
    binarydisp(togg);
}