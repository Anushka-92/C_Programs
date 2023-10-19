#include <stdio.h>

int main() {
    int num,flag=0,n;
    printf("Enter the number to find prime or not: ");
    scanf("%d",&num);
    if (num == 0 || num == 1)
      flag = 1;
    for(n=2; n<num; n++){
      if (num%n==0){
          flag=1;
          break;
      }
    }
     if(flag==0) 
           printf("The given number %d is a prime number ",num);
    else
           printf("The given number %d is not a prime number ",num);
       
    return 0;
}