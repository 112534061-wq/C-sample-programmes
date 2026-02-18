#include<stdio.h>
int main()
{
	printf("c primitive data types and their sizes (in bytes):\n\n");
	printf("char :%d bytes\n",sizeof(char));
	printf("int :%d bytes\n",sizeof(int));
	printf("float :%d bytes\n",sizeof(float));
	printf("double :%d bytes\n",sizeof(double));
	printf("short int :%d bytes\n",sizeof(short int));
	printf("long int :%d bytes\n",sizeof(long int));
	printf("long long int :%d bytes\n",sizeof(long long int));
	printf("unsigned int :%d bytes\n",sizeof(unsigned int));
	printf("long double :%d bytes\n",sizeof(long double));
	
	return 0;
}
