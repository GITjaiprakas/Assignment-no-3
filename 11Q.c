#include<stdio.h>
    int main(){
        int m1,m2,m3,m4,m5;
        printf("Enter the marks of 5 subjects max marks 100 : ");
        scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
        if(m1>32&&m2>32&&m3>32&&m4>32&&m5>32){
            printf("Candidate has passed in all the examination");
        }
        else if(m1<32&&m2<33&&m3<33&&m4<33&&m5<33){
            printf("Candidate has failed in all the examination");
        }
        else{
            printf(m1<33?"candidate has failed in the first exam\n":"Candidate has passed in the first exam\n");
            printf(m2<33?"candidate has failed in the second exam\n":"Candidate has passed in the second exam\n");
            printf(m3<33?"candidate has failed in the Third exam\n":"Candidate has passed in the Third exam\n");
            printf(m4<33?"candidate has failed in the fourth exam\n":"Candidate has passed in the fourth exam\n");
            printf(m5<33?"candidate has failed in the fifth exam\n":"Candidate has passed in the fifth exam\n");
        }
        return 0;
    }
