#include<stdio.h>
int main(void)
{
	int a[10];
	printf("%p\n",a);
	printf("%p\n",&a);
	printf("%p\n",&a[0]);
	printf("%p\n",&a[1]);
	printf("%p\n",&a[9]);
	return 0;
}
