#include<stdio.h>
int main()
{
	int i,fact,num;
	fact=1;
	
	printf("ENTER NUMBER ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	
	}
}
