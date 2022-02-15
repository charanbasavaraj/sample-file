//sum of two numbers
#include<stdio.h>
int main()
{
int a=2,b=2,sum=0;
sum=a+b;
printf("sum of the numbers is :%d\n",sum);
return 0;
}
//sample code
#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<4;i++)
    {
    x=y++;
    printf("%d %d\n",x ,i);
    return 0;
    }
}
//largest of three numbers
int main()
{
    int num1=1 ,num2=0 ,num3=2;
    if (num1 > num2)
    {
	if(num1 > num3)
	{
	    printf("hello\n");
	}
	else
	{
	    printf("world\n");
	}
    }
    return 0;
}
//check underflow
int main()
{
    int a=2147483648;
    printf("unsigned %d",a);
    return 0;
}
