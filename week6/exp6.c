#include <stdio.h>
#include <conio.h>
int main()
{
    int x,y,i,j;
    int a[4][4]={10,25,36,77,
                  2,7,8,5,
                  4,2,93,55,
                  6,101,6,1};
    int enb=a[0][0];

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j] > enb)
            {
                enb = a[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("En buyuk eleman [%d,%d] indislidir\n", x,y);
    return 0;
}
