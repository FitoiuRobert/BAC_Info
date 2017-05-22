#include <stdio.h>
#include <conio.h>

int main()
{
int nr;
FILE *f=fopen("file.in","rt");

while(!feof (f)){
    fscanf(f,"%d",&nr);
    if(nr%3==0)
    printf("%d__",nr);

}
fclose(f);
return 0;

}
