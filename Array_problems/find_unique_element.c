//METHOD:1 By using normal loops time complexity is o(n2) as two loops

/*#include <stdio.h>

int main(){
    int a[10],n,i,j, found=0;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            found=0;
            if(a[i]==a[j] && i !=j){
                found=1;
                break;
            }
        }
        if(found==0){
            printtzzzzf("UNique eleemnet is %d", a[i]);
            break;
        }
    }
   
} */

//METHOD 2: USING XOR Time complexity is o(n)
#include <stdio.h>
int main(){
    int a[10],i,n,result=0;
    printf("Enter the size of the array");
    scanf("%d", &n);

    printf("Enter the array Elements");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++){
        result ^= a[i];
    }
    printf("unique element is %d", result);
}
