#include <stdio.h>

int main(){
    int fa,sa,ta;

    printf("First Angle :");
    scanf("%d",&fa);

    printf("Second Angle :");
    scanf("%d",&sa);

    ta = 180 - (fa + sa);
    printf("Third Angle : %d",ta);

}