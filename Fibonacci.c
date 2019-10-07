#include <stdio.h>

void main(){
    int a,b,c,n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    a=0,b=1;
    printf("%d %d",a,b);
    for(int i=0;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf(" %d ",c);
    }
}