#include<stdio.h>
    int main(){
        int n;
        printf("Enter any number : ");
        scanf("%d",&n);
        if((n/2*2)==n){
            printf("The number is even");
        }
        else{
            printf("The number is odd");
        }
        return 0;
    }