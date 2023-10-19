#include <stdio.h>

int main() {
    int fact=1, num,x;
    printf("Enter the number to find its factorial: ");
    scanf("%d",&num);
    for(x=1;x<=num ; x++)
      fact=num*x;
    printf("factorial of %d is %d",num,fact);  
    return 0;
}