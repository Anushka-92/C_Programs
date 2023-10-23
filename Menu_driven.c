#include<stdio.h>
int main(){
int a,b,c,option,n;
do{
 printf("Enter your option of prefered action:\n 1.Addition \n2.Subtraction \n3.Multiplication \n4.division \n5.exit");
 scanf("%d",&option);
 if(option==5)
   {
     break;
   }
 switch(option)
  {
   case 1:
	  printf("Enter two no");
	  scanf("%d%d",&a,&b);
	  c=a+b;
	  printf("\3 Addition of %d and %d is %d \3",a,b,c);
	  break;
    
   case 2:
	  printf("Enter two no");
	  scanf("%d%d",&a,&b);
	  c=a-b;
	  printf("\3 subtraction of %d and %d is %d \3",a,b,c);
	  break;
	  
   case 3:
	  printf("Enter two no");
	  scanf("%d%d",&a,&b);
	  c=a*b;
	  printf("\3 multiplication of %d and %d is %d \3",a,b,c);
	  break;
	  
   case 4:
	  printf("Enter two no");
	  scanf("%d%d",&a,&b);
	  c=a/b;
	  printf("\3 division of %d and %d is %d \3",a,b,c);
	  break;	  
     }
     printf("\nDo you want to continue?\n1.yes \n2.no");
     scanf("%d",&n);
}
while(n==1);
    getc;
   
}