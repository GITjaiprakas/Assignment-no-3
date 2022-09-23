#include<stdio.h>
    int main(){
        char c;
        printf("Enter any character : ");
        scanf("%c",&c);
        if(c>='A'&&c<='Z')
            printf("The entered character is an uppercase");
        else if(c>='a'&&c<='z')
            printf("The entered character is an lowercase");
        else
            printf("The entered character is a special character or digit");
        return 0;
    }
