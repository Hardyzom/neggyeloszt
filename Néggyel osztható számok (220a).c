#include <stdio.h>

int main()
{
    int szam;
    int kezdo=1;
    printf("n1: ");
    scanf("%d",&szam);
    
    while(kezdo!=szam+1){
       if (kezdo%4==0){
        printf("%d\n",kezdo);
       }
        kezdo++;
        }
        return 0;
    }