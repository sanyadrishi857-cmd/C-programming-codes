//program to find divisible number by 3 or 7
#include<stdio.h>
int main()
{ int n;
printf("enter the number/n");
scanf("%d",&n);
if(n%3==0)
{ printf("number is divisible by 3",n);
}
else if (n%7==0) {
printf("number is divisible by 7",n);
}
else
{printf("number is not divisible by 3 or 7");
	}	
	
return 0;	
}
