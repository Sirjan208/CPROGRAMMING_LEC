#include <stdio.h>

int natural  (int n)
{
    if 
    (n>1)
{
    return n + natural  (n-1);
}

    else
    {

    return 1;
    }
    
}
void main ()

{   
    int nat,n;

        printf("Enter a natural number : ");
        scanf ("%d", &n);
        nat  = natural(n);
        printf ("Your sum of number %d is %d  ",n,nat);

}
//sum of natural numbers
