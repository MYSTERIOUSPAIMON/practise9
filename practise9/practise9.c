#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//求一个整数存储在内存中的二进制中1的个数
int main()
{
	int a = 15;
	int i = 1;
	int new = 0;
	int flag = a & 1;
	int count = 0;

	for (i = 1; i <= 32; i++)
	{

		if (flag == 1)
		{
			count++;
		}
		new = a >> i;
		flag = new & 1;
	}
	printf("%d\n", count);
}