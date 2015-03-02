// Author : FinlayLiu
// Time : 2015-02-27
// Problem3 : ��ѧ������
// Debug : VC6.0
#include <stdio.h>
#include <string.h>

int main()
{
	int i,index,dot;
	char num[100];
	freopen("sample3.in", "r", stdin);

	while(fgets(num,200,stdin))
	{
		dot = -1;
		for(i = 0;i < strlen(num);i++)
			if(num[i] == '.')
				dot = i;

		if(dot == -1) // ������С����
		{
			index = strlen(num) - 1;
			printf("%c.",num[0]);
			for(i = 1;i < strlen(num);i++)
				printf("%c",num[i]);
			printf("e%d\n",index);
		}
		else if(dot != -1 && num[0] != '0')	//����1��С��
		{
			index = dot - 1;
			printf("%c.",num[0]);
			for(i = 1;i < strlen(num)-1;i++)
			{
				if(i == dot)
					continue;
				printf("%c",num[i]);
			}
			printf("e%d\n",index);
		}
		else if(dot != -1 && num[0] == '0')	//С��1��С��
		{
			for(i = 0;i < strlen(num) - 1;i++)
				if(num[i] != '.' && num[i] > '0' && num[i] <= '9')
					dot = i;

			index = - dot + 1;

			if(dot == strlen(num) - 2)	// 0.00002
				printf("%ce%d\n",num[dot],index);
			else
			{
				printf("%c.",num[dot - 2]);
				for(i = dot ;i < strlen(num) - 1;i++)
					printf("%c",num[i]);
				printf("e%d\n",index);
			}
		}
	}

	fclose(stdin);
	return 0;
}
