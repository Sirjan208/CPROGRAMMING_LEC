#include <stdio.h>
 int main()

{
    int testInteger;
printf("the address of decleared variable is: %d\n", &testInteger);
printf("Enter a integer: ");
scanf("%d", &testInteger);
printf("number = %d", testInteger);
return 0;
}
