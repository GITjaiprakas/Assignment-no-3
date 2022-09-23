#include<stdio.h>
    int main(){
        float cp,sp,p,l,profit_percentage,loss_percentage; 
        printf("Enter the cost price of the product : ");
        scanf("%d",&cp);
        printf("Enter the selling price of the product : ");
        scanf("%d",&sp);
        if(cp>sp){    
            l=cp-sp;
            loss_percentage = (l/cp)*100;
            printf("loss percentage is %f\n",loss_percentage);
        }
        else if(sp==cp){
            printf("break even point");
        }
        else{
            p=sp-cp;
            profit_percentage = (p/cp)*100;
            printf("profit percentage is %f\n",profit_percentage);
        }
        return 0;
    }
