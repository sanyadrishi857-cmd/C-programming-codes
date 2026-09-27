//program to find even or odd number with switch case method
#include<stdio.h>
int main()
{ int n;
printf("enter the mumber");
scanf("%d",&n);
switch(n%2) {
	case 0:
	printf("number is even");
	break;
case 1:
	printf("number is odd");
	break;
default:
	printf("numer is neither odd or even");
	}
	return 0;
}
