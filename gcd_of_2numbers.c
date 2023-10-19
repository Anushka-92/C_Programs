#include <stdio.h>
int main() {
    int n1,n2,i,gcd;
    printf("Enter 2 numbers to find gcd of it:");
    scanf("%d%d",&n1,&n2);
    int min= (n1 < n2) ? n1: n2;
    for(i =min;i >=1;--i)
    {
     if(n1%i==0 && n2%i==0){
        gcd = i;
        break;
     }
    }
    printf("The gcd of given %d and %d numbers is %d",n1,n2,gcd);
}
