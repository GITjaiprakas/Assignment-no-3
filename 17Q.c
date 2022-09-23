#include<stdio.h>
    int main(){
        int a,b,c;
        printf("Enter the length of the sides of the triangle : ");
        scanf("%d %d %d",&a,&b,&c);
        if((a+b<c)||(a+c<b)||(c+b<a)){
            printf("the triangle is not valid");
        }
        else{
            printf("The triangle is valid");
        }
        return 0;
    }
