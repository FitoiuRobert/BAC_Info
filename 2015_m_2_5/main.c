#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,m,a[21][21],i,j,val=1;
    do{
        printf("n: ");
        scanf("%d",&n);
    }while((n<2) || (n>20));
    do{
        printf("m: ");
        scanf("%d",&m);
    }while((m<2) || (m>20));
    for(i=n;i>0;i--)
        for(j=m;j>0;j--)
        {
            if(val%3==0) val += 2;
            a[i][j] = val;
            val += 2;
        }
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            printf("%d ",a[i][j]);
            printf("\n");
        }
    return 0;
}
