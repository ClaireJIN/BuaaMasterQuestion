// Author : FinlayLiu
// Time : 2015-03-01
// Problem2: �˻ʺ�
// Debug : VC6.0

#include<stdio.h>
#include<math.h>

int x[100];
int place(int k) //����ʺ�k������x[k]���Ƿ�����ͻ
{
    int i;
    for(i = 1; i < k; i++)
        if(x[k] == x[i] || abs(k - i) == abs(x[k] - x[i]))
            return 0;
    return 1;
}

void queue(int n)
{
    int i, k;
    for(i = 1; i <= n; i++)
        x[i] = 0;
    k = 1;
    while(k >= 1)
    {
        x[k] = x[k] + 1; //����һ�з��õ�k���ʺ�
        while(x[k] <= n && !place(k))
            x[k] = x[k] + 1; //������һ��
        if(x[k] <= n && k == n) //�õ�һ�����
        {
            for(i = 1; i <= n; i++)
                printf("%d ", x[i]);
            printf("\n");
            //return;//��return��ֻ�������һ�ֽ⣬����return����Լ������ݣ����ȫ���Ŀ��ܵĽ�
        }
        else if(x[k] <= n && k < n)
            k = k + 1; //������һ���ʺ�
        else
        {
            x[k] = 0; //����x[k],����
            k = k - 1;
        }
    }
}

void main()
{
    int n;
    printf("����ʺ����n:\n");
    scanf("%d", &n);
    queue(n);
}