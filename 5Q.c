#include<stdio.h>
    int main(){
        int n;
        printf("Enter any number : ");
        scanf("%d",&n);
        n=n/100;
        printf((n>0)&&(n<10)?"It's a three digit number":"It's not a three digit number");
        return 0;
    }
