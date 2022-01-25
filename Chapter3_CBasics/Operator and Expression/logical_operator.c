#include <stdio.h>
void main(){
    int a = 2;
    int b = 6;
    int c;
    if (a&&b) {
        printf("Line 1 - Condition is true\n");
    }
    if (a||b){
        printf("Line 2 - Condition is true\n");
    }
    a = 0;
    b = 4;
    if (a&&b){
        printf("Line 3 - Condition is true\n");
    } else {
        printf("Line 3 - Condition is false\n");
    }
     if (!(a&&b)){
        printf("Line 4 - Condition is true\n");
    }

    }
