#include<stdio.h>
    int main(){
        int n;
        printf("Enter any number : ");
        scanf("%d",&n);
        if(n%6){
        printf("The number is not divisible by 3 and 2 ");
        }
        else{
        printf("The number is divisible by both 3 and 2");
        }
        return 0;
    }
