#include <stdio.h>

int main()
{
    int n,i;
    printf("Number upto which we want to print :");
    scanf("%d",&n);
    printf("\nPrinting %d numbers using ",n);
    printf("while loop: ");
    i=n;
    while(i>=1){
        printf("\n %d",i);
        i--;
    }
    
    //////////////////////////////////////////////////////////////////////
    printf("\nPrinting %d numbers using ",n);
    printf("do-while loop:");
    i=n;
    do{
        printf("\n%d",i);
        i--;
    }while(i>=1);
    //////////////////////////////////////////////////////////////////
    printf("\nPrinting %d numbers using ",n);
    printf("For loop:");
    for(int i=n;i>=1;i--){
        printf("\n%d",i);
    }
   return 0;
}
