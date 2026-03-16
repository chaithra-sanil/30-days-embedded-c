// #include <stdio.h>
// int main(){
//     int num,count=0;
//     printf("Enter the number:");
//     scanf("%d", &num);
//     while(num != 0){
//         if(num &1){
//             count ++;
//         }
//         num = num << 1;
//     }
//     printf("Number of set bits are: %d\n", count);
// }


//METHOD 2

#include <stdio.h>
int main(){
    int num, count=0;
    printf("Enter the numbe: ");
    scanf("%d", &num);
    while(num){
        num = num & (num-1);
        count ++;
    }
    printf("Number of set bits are %d", count);
}

