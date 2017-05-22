#include <stdio.h>
#include <conio.h>
void f(int n){
    if(n!=0){
        printf("%d",n);
        f(n/10);
    }

}
int main()
{
    f(2016);
    return 0;
}
