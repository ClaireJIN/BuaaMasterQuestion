// Author : FinlayLiu
// Time : 2015-02-27 
// Problem3: �Ű梘
// Debug : VC6.0
// 

#include <stdio.h>
#include <string.h>

int main()
{    
    int n;
    
    int bytes_read;
    int nbytes = 100;
    char *strs;
    char *token1= strtok(strs,":");
    char *token2= strtok(token1,":");
    
	scanf("%d\n",&n);    
    
    strs = (char *) malloc (nbytes + 1);
    
	// C�����к���û��getline��������
    while( getline(&strs, &nbytes, stdin) != -1)
    {
        if(*strs == '\n')
            break;
        
        printf("%s%d",token1,n);
        printf(" : %s\n",token2);
    } 

    return 0;
}
