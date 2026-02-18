#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	char password[20];
	printf("Enter name:");
	scanf("%s", &name);
	printf("Enter password:");
	scanf("%s", &password);
	if(strcmp(password,"Ash2")==0)
	{
		printf("Verified");
	}
	else
	 {
	printf("Not verified");
}
	return 0;
}
