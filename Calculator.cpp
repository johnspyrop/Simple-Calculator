#include <stdio.h>
#include <math.h>
int main ()
{
	float a,b;
	char op;
	float sum;
	char ERROR;
	printf ("May the calculations, with only two numerical values, begin\n");
	scanf ("%f%c%f",&a,&op,&b);
	if (op=='+')
	{
		sum=a+b;
		printf ("%f%c%f=%f",a,op,b,sum);
	}
	else if (op=='-')
	{
		sum=a-b;
		printf ("%f%c%f=%f",a,op,b,sum);
	}
	else if (op=='*')
	{
		sum=a*b;
		printf ("%f%c%f=%f",a,op,b,sum);
	}
	else if (op=='/')
	{
		if(b==0)
		{  		
           printf ("ERROR");
		}
		else if (b!='0')
		{			 					
		   sum=a/b;
		   printf ("%f%c%f=%f",a,op,b,sum);
        }
    }
	else if (op=='^')
	{
		sum=pow(a,b);
		printf ("%f%c%f=%f",a,op,b,sum);
	}
	else if (op=='s')
	{
		sum=sqrt(a);
		printf ("%f%c=%f",a,op,sum);
	}
	return 0;
}
