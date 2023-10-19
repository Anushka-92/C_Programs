#include <stdio.h>

int main() {
    int num;
    printf("Enter the number to find even or odd: ");
    scanf("%d",&num);
    if (num % 2 == 0)
       printf("The given number %d is even number ",num);  
    else
       printf("The given number %d is odd number ",num); 
    return 0;
}