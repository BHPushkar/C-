#include<stdio.h>
int main()
{
	char a[30];
	int b,c,d,e,f,g,h,i,j,k,l;
	printf("enter item      ");
	scanf("%s",&a);
	
	printf("enter quantity  ");
	scanf("%d",&b);
	
	printf("enter rate      ");
	scanf("%d",&c);
	
	d=b*c;
	printf("item   rate  quantity  amount \n");
	printf(" %s     %d     %d      %d  \n",a,b,c,d);
	printf("                         net amount=%d \n",d);
	
	if(d>=1000)
	{
		e=d*10;
		f=e/100;
		printf("you will get the 10 percent discount \n");
		printf("                         discount rate=%d \n",f);
		i=d-f;
		printf("                            net amount=%d \n",i);
	}
	
	else if(d>=500 && d<1000)
	{
		g=d*5;
		h=g/100;
		printf("you will get the 5 percent  discount \n");
		printf("                       discount rate=%d \n",h);
		j=d-h;
		printf("                       net amount=%d \n",j);
    }
    else
    {
    	printf("you have secured no discount go and shop more ");
    }
}
