#include<stdio.h>
int main()
{
	int num;
	int *ptr;
	//take input from keyboard
	printf("enter a number:");
	scanf("%d", &num);
	//assign address of num of pointer
	ptr=&num;
	//display value
	printf("\n value of num=%d",num);
	//display address using &
	printf("\n address of num=%d",num);
	//display address using pointer
	printf("\n address stored in ptr=%p",ptr);
	//display value using pointer
	printf("\n value using pointer (*ptr)=%d",*ptr);
	return 0;
}
