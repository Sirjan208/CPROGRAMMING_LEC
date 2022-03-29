#include <stdio.h>
void main()
{
      int array[1000],a,sum=0,i;

      scanf("%d", &a);
    for (i=0;i<a;i++)
    {
        scanf("%d",&array[i]);
         sum=sum+array[i];
    }
    printf("%d",sum);

    
}