#include<stdio.h>
    int main(){
        int n1,n2;
        printf("Enter any two numbers : ");
        scanf("%d %d",&n1,&n2);
        if(n1==n2){
            printf("%d",n1);
        }
        else{
            n1>n2?printf("%d",n1):printf("%d",n2);
        }
        return 0;
    }
