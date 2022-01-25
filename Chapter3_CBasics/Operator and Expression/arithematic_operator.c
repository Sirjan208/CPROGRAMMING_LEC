#include <stdio.h>
void main () {
    int a = 6;
    int b = 2;
    int c;
    
    c = a+b;
    printf("Line 1 - Value of c is %d\n",c);
    c = a-b;
    printf("Line 2 - value of c is %d\n",c);
    c = a*b;
    printf("Line 3 - value of c is %d\n",c);
    c = a/b;
    printf("Line 4 - value of c is %d\n",c);
    c = a%b;
    printf("Line 5 - value of c is %d\n",c);
    c = a++;
    printf("Line 6 - value of c is %d\n",c);
    c = ++a;
    printf("Line 7 - value of c is %d\n",c);
    c = a--;
    printf("Line 8 - value of c is %d\n",c);
    }