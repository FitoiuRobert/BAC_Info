#include <stdio.h>
#include <conio.h>

void f(int n){
int i;
for(i=2;i<=n/2;i++)
    if(n%i==0){
        printf("f\(%d,%d\)\n",n,i);
        f(n/i);
    }

}

int main()
{
    f(12);
    return 0;
}
