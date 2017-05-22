#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
char *s="i*am*famous",
     *s1,*s2,
     c[]="*";
s1 = strtok(s,c);
printf("%s\n",s1);
s1 = strtok(NULL,c);
printf("%s\n",s1);
return 0;
}
