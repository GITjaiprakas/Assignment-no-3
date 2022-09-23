#include<stdio.h>
    int main(){
        int n;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf(n%2==0?"The given number is even":"The given number is odd");
        return 0;
    }
