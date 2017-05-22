#include <stdio.h>
#include <conio.h>

void subperfect(int a, int b)
{
int sumdiv,nu_ex=1,i,j;
    for(i=b;i>=a;i--)
    {
        sumdiv = 0;
        for(j=2;j<=i/2;j++)
            if(i%j==0) sumdiv += j;
        if(i<sumdiv)
        {
                printf("%d ",i);
                nu_ex = 0;
        }

    }
    if(nu_ex) printf("nu exista");
}
int main()
{
    subperfect(10,20);
    return 0;
}
