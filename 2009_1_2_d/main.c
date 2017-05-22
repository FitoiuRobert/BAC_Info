#include <stdio.h>
#include <conio.h>

int main()
{
int n,i,j,k;
printf("n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        if(i<j){
            k=n-i-j;
            if(j<k && i<k)
                printf("%d %d %d\n",i,j,k);
        }

    return 0;
}
