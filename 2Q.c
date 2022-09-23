#include<stdio.h>
    int main(){
        int n;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf(n%5==0?"The number is divisible by five":"The number is not divisible by five");
        return 0;
    }
