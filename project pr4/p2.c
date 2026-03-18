#include <stdio.h>
int main()
{
    int i,j,no=11;
    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ",no);
            no++;
        }
        printf("\n");
    }
    return 0;
}
   
