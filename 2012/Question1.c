// Author : FinlayLiu
// Time : 2015-03-02
// Problem1
// Debug : VC6.0

#include <stdio.h>

int main()
{
    int n;
    int i;
    while(scanf("%d", &n) != EOF)
    {
        int begin, end;
        int found = 0;
        for(begin = 1; begin < n; begin++)
        {
            for(end = begin + 1; end < n; end++)
            {
                // �����������
                int sum = (begin + end) * (end - begin + 1) / 2;
                if(sum == n)
                {
                    // ���Էֽ⣬������
                    found = 1;

                    for(i = begin;  i <= end; i++)
                    {
                        printf("%d ", i);
                    }
                    printf("\n");
                }
            }
        }
        if(found == 0)
            printf("NONE\n");
    }
    return 0;
}