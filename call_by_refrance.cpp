#include<stdio.h>
void swap(int* ,int* );
int main()
{
	int a,b;
	printf("Enter the two NO:");
	scanf("%d%d",&a,&b);
	
	printf("\n Before calling swap :");
	printf("value of A=%d,value of B=%d",a,b);
	printf("\n A=%d\n B=%d",a,b);
	
	swap(&a,&b);
	
}
void swap(int *a,int *b)
{
	
	int temp=*a;
	*a=*b;
	*b=temp;
	
	printf("\n values after swap:*A=%d,*B=%d",*a,*b);
}
