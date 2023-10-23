#include <stdio.h>

int main()
{
    int n,i=1;
    printf("Number upto which we want to print :");
    scanf("%d",&n);
    printf("\nPrinting %d numbers using ",n);
    printf("while loop: ");
    while(i<n+1){
        printf("\n %d",i);
        i++;
    }
    
    //////////////////////////////////////////////////////////////////////
    printf("\nPrinting %d numbers using ",n);
    printf("do-while loop:");
    i=1;
    do{
        printf("\n%d",i);
        i++;
    }while(i<=n);
    //////////////////////////////////////////////////////////////////
    printf("\nPrinting %d numbers using ",n);
    printf("For loop:");
    for(int i=1;i<=n;i++){
        printf("\n%d",i);
    }
   return 0;
}
