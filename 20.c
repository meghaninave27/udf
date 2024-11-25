#include<stdio.h>

	int add(int value1,int value2)
	{

	return value1+value2;
	}
	int sub(int value1,int value2)
	{
		return value1-value2;
	}
	
	
	int mul(int value1,int value2)
	{
		return value1*value2;
	}
	
	
	int div(int value1,int value2)
	{
		return value1/value2;
	}
	

int main()
{
	int num1,num2,ans,;
	char choice;
	
	printf("enter num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	scanf("%d",&num2);
	printf("enter your choice:");
	scanf(" %c",&choice);
	switch(choice)
	{
		case'+':
		ans=add(num1,num2);
		printf("add is %d",ans);
		break;
		case'-':
		ans=sub(num1,num2);
		printf("sub is %d",ans);
		break;
		case'*':
		ans=mul(num1,num2);
		printf("add is %d",ans);
		break;
		case'/':
		ans=div(num1,num2);
		printf("div is %d",ans);
		break;
	
		
	}
}

