#include<stdio.h>
#include<conio.h>


int emicalc(int amount,int interest,int month)
{
	
	float total=(amount+(amount*interest)/100);
	float emi=total/month;
	return emi;
}
int main()
{
	float emi=emicalc(500000,10,15);
	printf("emi is %f",emi);
}
