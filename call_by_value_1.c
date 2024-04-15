#include<stdio.h>

void add(int a,int b);
void sub(int a,int b);

int main()
{
	int a,b;
	printf("\n Enter the two No:");
	scanf("%d %d",&a,&b);
	add(a,b);
	sub(a,b);
	
	return 0;
}
void add(int a,int b)
{
	printf("\n Addition=%d",a+b);
}
void sub(int a,int b)
{
	printf("\n Subtrsction=%d",a-b);
}
