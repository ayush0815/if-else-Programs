#include <stdio.h>
int main()
{ 
char a;
printf("enter a character \n");
scanf("%c",&a);   
if (a>='a'&&a<='z' || a>='A'&&a<='Z')
{
printf("%c is an alphabet",a);
}
else
{
printf("%c is a special character",a);
}
return 0;
}
