#include <stdio.h>

int main(){
    int a = 45, b = 49;

    printf("A = %d\n",a);
    printf("B = %d\n\n",b);

   b = a - b;
   a = a - b;
   b = a + b;
    

    printf("A = %d\n",a);
    printf("B = %d\n",b);

    
}