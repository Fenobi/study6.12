#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	printf("�����������ߣ�");
	int n = 0;
	scanf("%d", &n);
	int i = 98;
	printf("���ڷ�����...");
	while (i)
	{
		Sleep(10);
		printf("%d%%", i);
		printf("\b\b\b");

		i-=2;

	}
	printf("��������%d\n", n);
	return 0;
}