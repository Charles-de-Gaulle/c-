#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
union Un1
{
	char c;
	int a;
};
union Un2
{
	int m ;
	int n;
};
int main()
{
	union Un1 un1;
	union Un2 un2 ;
	un2.m = 100;
	un2.n = 200;
	printf("%d\n", sizeof(un1));
	printf("%d\n", sizeof(un2));
	printf("%d\n", un2.m);
	printf("%d\n", un2.n);

	return 0;
}