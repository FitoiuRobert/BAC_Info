#include <stdio.h>
#include <conio.h>

int main(){
int n,i,j,a[101][101];
printf("n: ");
scanf("%d",&n);
for(j=1;j<=n;j++){
    for(i=1;i<=n;i++)
        if(j==1) a[i][j]=i;
            else if(i==n) a[i][j]=n;
                else a[i][j]=a[i][j-1]+a[i+1][j-1];
}
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++)
        printf("%d ",a[i][j]);
    printf("\n");
}
    return 0;
}
