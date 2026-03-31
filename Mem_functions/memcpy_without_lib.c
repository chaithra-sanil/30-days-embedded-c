
/* "strcpy copies strings until null terminator, while memcpy copies a fixed number of bytes regardless of content. memcpy is more general and works for any data type."

💡 When to Use What?
Use strcpy() → for strings
Use memcpy() → for arrays, structs, buffers */

#include <stdio.h>

void mymemcpy(void *dest, void *source, int n){
    //Type cast defrence void pointer 
    char *d = (char *) dest;
    char *s = (char *) source;

    for(int i =0;i<n;i++){
        d[i] = s[i]; // this is equalent to  *(d+i) = *(s+i);
    }
}
int main(){

    int a[] ={1,2,3,4};
    int b[40];
    printf("copying form souce to dest");

    //here copying the bytes so total copying bytes are 4*4= 16 each is 4 bytes but we are cpying one one byte
    mymemcpy(b, a,sizeof(a));
    printf("after the copy the dest is");
    for(int i=0;i<4;i++){
        printf("%d",b[i]);
    }

}

//another method direct use pointer coying

/* void mymemcpy(void *dest, void *source, int n){
    char *d = (char *) dest;
    char *s = (char *)source;

    while(n--){
        *d++ = *s++; //this also equivalent to *(d+1) = *(s+1)
    }
} */