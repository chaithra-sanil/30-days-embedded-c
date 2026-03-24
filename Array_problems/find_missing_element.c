/*problem: Find the Missing Number in an Array

You are given an array of size n-1 containing numbers from 1 to n.
One number is missing. Find that missing number.
Input:  n = 5  
Array: {1, 2, 4, 5}

Output: 3 */

/* #include <stdio.h>
int main(){
    int a[50],n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    if(a[0] !=1){
        printf("Missing element is 1");
        return 0;
    }
    for(int i=0;i<n-1;i++){
        if(a[i+1] != a[i] + 1 ){
            printf("Missing element is %d", a[i]+1);
            return 0;
        }
    }
    printf("Missing element is =%d", a[n-1]);

} */


//Method 2: constraints of this method is it will work only when the arary is sorted
#include <stdio.h>

int main() {
    int a[50], n, xor1 = 0, xor2 = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n-1);
    for(int i = 0; i < n-1; i++) {
        scanf("%d", &a[i]);
        xor1 ^= a[i];
    }

    for(int i = 1; i <= n; i++) {
        xor2 ^= i;
    }

    printf("Missing element is %d", xor1 ^ xor2);

    return 0;
}