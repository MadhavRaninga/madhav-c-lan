#include <stdio.h>

int main(){
    int a = 10, b = 15,c;

       printf("A = %d\n",a);
    printf("B = %d\n \n",b);
    
    c = a;
    a = b;
    b = c;
    printf("A = %d\n",a);
    printf("B = %d",b);

}