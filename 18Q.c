#include<stdio.h>
int main(){
    int m,x,year;
    printf("Enter the month number : ");
    scanf("%d",&m);
    if(m<8&&m!=2){
        if(m&1){
            printf("%d month has 31 days",m);
        }
        else{
            printf("%d month has 30 days",m);
        }
    }
    else if(m!=2){
        if(m&1){
            printf("%d month has 30 days",m);
        }
        else{
            printf("%d month has 31 days",m);
        }
    }
    else{
        printf("Enter the year : ");
        scanf("%d",&year);
        if(year%400==0){
            x=1;
        }
        else if(year%100==0){
            x=0;
        }
        else if(year%4==0){
            x=1;     
        }
        else{
            x=0;
        }
        if(x==1){
            printf("%d has 29 days",m);
        }
        else{
            printf("%d has 28 days",m);
        }
    }
}

