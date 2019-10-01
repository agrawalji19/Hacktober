#include<stdio.h>

int fac(int);

int main(){
    int i,result;
    scanf("%d",&i);
    result=fac(i);
    printf("%d",result);
}

int fac(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (n*fac(n-1));
    }
}