#include<stdio.h>
    int main(){
        int n;
        printf("Enter any number : ");
        scanf("%d",&n);
        if(n%21==0){
            printf("The number is divisible by both 7 and 3");
        }
        else if(n%7==0||n%3==0){
            printf("the number is divisible by either 7 or 3");
        }
        else{
            printf("The number is not divisible by both 7 and 3");
        }
        return 0;
    }
