#include<stdio.h>

void main(){
long n;
int d,rem,count=0;
printf("Enter a number:");
scanf("%d", &n);
printf("Enter the digit whose frequency is to be found:");
scanf("%d",&d);
while(n > 0)
    {
	rem = n % 10;
	if(rem == d)
		count++;
    n = n / 10;

    }
printf("The digit %d is present %d times.",d,count);

}
