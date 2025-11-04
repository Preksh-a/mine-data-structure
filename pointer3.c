#include<stdio.h>
int main()
{ int s=1000 ;
 int *p =&s;
 int **pp=&p;
 printf("value of s: %d\n",**pp);
 return 0;
}
