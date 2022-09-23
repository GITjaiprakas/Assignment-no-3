#include<stdio.h>
    int main(){
        char a;
        printf("Enter any alphabet : ");
        scanf("%c",&a);
        if(a>='a'&&a<='z'){
            printf("The entered alphabet is in lowercase");
        }
        else if(a>='A'&&a<='Z'){
            printf("The entered alphabet is in uppercase");
        }
        else{
            printf("You have not entered an alphabet");
        }
    }
