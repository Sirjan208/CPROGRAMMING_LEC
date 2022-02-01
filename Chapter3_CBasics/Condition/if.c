#include <stdio.h>

 void main(){
     int cmark;
     printf("Enter your obtained marks on C programming exams\n:");
     scanf("%d" , &cmark);

     if (cmark >= 40) {
         printf(" You have passed in C programming");
         if(cmark >= 85 ){
             printf("Your grade is A+");
              }
        else if (cmark >= 70 && cmark < 85) {
            printf ( "Your grade is A");
            }
            else if (cmark >= 50 && cmark < 70){
                printf ( "Your grade is B");
            }
            else if (cmark >= 40 && cmark < 50 ){
                printf ( "Your grade is D");
            }
     }
        else {
            printf (" Study hard and you will pass in next attempt");
        }
 }