#include <stdio.h>

int main(){
    int x,y,ans;

    printf("Enter X Value :");
    scanf("%d",&x);

    printf("Enter Y Value :");
    scanf("%d",&y);

    ans = (x*x*x) + (3*x*x*y) + (3*x*y*y) + (y*y*y);
    
    printf("%d",ans);

}