#include<stdio.h>
    int squareroot(int D);
    int main(){
        int a,b,c,D,deno;
        printf("Enter the value of a : ");
        scanf("%d",&a);
        printf("Enter the value of b : ");
        scanf("%d",&b);
        printf("Enter the value of c : ");
        scanf("%d",&c);
        D=b*b-4*a*c;
        deno=2*a;
        D=squareroot(D);
        int root1=(-b+D)/deno;
        int root2=(-b-D)/deno;
        printf("%d",root1);
        printf("%d",root2);
        if(root1>0){
            if(a==0){
            printf("Not a quadriatic equation");
            }
            else{
            printf("The nature of roots are real and distincts");
            }
        }
        if(root1==0){
            printf("The nature of roots are real and equal");
        }
        if(root1<0){
            printf("The nature of the roots are imaginary");
        }
        
        return 0;
    }
    int squareroot(int D){
        long long int high=D;
        long long int low=1;
        long long int ans=-1;
        while(low<=high){
            long long int mid=high+low/2;
            long long int sqr=mid*mid; 
            if(sqr==D){
                return mid;
            }
            else if(sqr<=D){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
