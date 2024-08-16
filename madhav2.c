#include <stdio.h>

int main(){
    int x,y,ans;
  
    printf("Enter X Value :");
    scanf("%d",&x);
    
    printf("Enter Y Value :");
    scanf("%d",&y);

    ans = (x*x) - (2*x*y) + (y*y);
     
    printf("%d",ans);
}