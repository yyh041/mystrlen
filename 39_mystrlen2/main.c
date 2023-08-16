#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int mystrlen(char* arr)
{
	char* end = arr;
	while (*end!= '\0')
	{
		end++;
	};
	return end - arr;
}
int main()
{
	char arr[] = "iloveu";
	int length = 0;
	length = mystrlen(arr);
	printf("%d" , length);
	return 0;
}