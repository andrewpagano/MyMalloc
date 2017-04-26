/*
Author: Abdulrahman Althobaiti. RUID: 158006706 Section: 06
Author: Peter Santana-Kroh. RUID: 161007620 Section: 05
Professor: Francisco, John-Austen
Assignment 1 - A better malloc() and free()
*/
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#include <stdlib.h>
#include <errno.h>
#include "mallocPlus.h"

//#define malloc( x ) mymalloc( x, __FILE__, __LINE__ ) 
//#define free( x ) myfree( x, __FILE__, __LINE__ )


int main()
{
 int i;
 int x_2;
 char* p_3;
 char* p_4;
 char* q_4;
 char* p_5;
 char* p_6;
 char* p_7;
 char* q_7;
 char temp;
 char* p_9;
 char* q_9;

 char** p = (char**)malloc(50*sizeof(char*))  ;


 printf("Test case 2 (9pts):\n");
 printf("Expected output: free() non pointer\n");
 printf("Actual output:\n");
 x_2 = 5;
 free(&x_2);
 printf("\n");
 printf("\n");
 while( getchar() != '\n' );


 printf("Test case 3 (9pts):\n");
 printf("Expected output: free() that were not allocated\n");
 printf("Actual output:\n");
 p_3 = (char*)malloc(100);
 free(p_3+200);
 printf("\n");
 printf("\n");
 while( getchar() != '\n' );
 free(p_3);


 printf("Test case 4 (10pts):\n");
 printf("Expected output: free() that were not allocated\n");
 printf("Actual output:\n");
 p_4 = (char*)malloc(10);
 q_4 = (char*)malloc(10);
 free(p_4+15);
 printf("\n");
 printf("\n");
 while( getchar() != '\n' );
 free(p_4);
 free(q_4);


 printf("Test case 5 (10pts):\n");
 printf("Expected output: free() that were not allocated\n");
 printf("Actual output:\n");
 p_5 = (char*)malloc(10);
 free(p_5-5);
 printf("\n");
 printf("\n");
 while( getchar() != '\n' );
 free(p_5);


 printf("Test case 6 (10pts):\n");
 printf("Expected output: free() two times\n");
 printf("Actual output:\n");
 p_6 = (char*)malloc(100);
 free(p_6);
 free(p_6);
 printf("\n");
 printf("\n");
 while( getchar() != '\n' );
 


 printf("Test case 7 (10pts):\n");
 printf("Expected output: swap values: (*p7)==b, (*q7)==a\n");
 p_7 = (char*)malloc(1);
 q_7 = (char*)malloc(1);
 *p_7 = 'a';
 *q_7= 'b';
 temp = *p_7;
 *p_7=*q_7;
 *q_7=temp;
 printf("Actual output: (*p7)==%c, (*q7)==%c\n", *p_7, *q_7);
 printf("\n");
 printf("\n"); 
 while( getchar() != '\n' );
 free(p_7);
 free(q_7);


 printf("Test case 9 (5pts):\n");
 printf("Expected output: memory saturation\n");
 printf("Actual output:\n");
 p_9 = malloc(3000);
 q_9 = malloc(3500);
 printf("\n");
 printf("\n");
 while( getchar() != '\n' );
 free(p_9);


 /*test case 8*/
 printf("Test case 8 (12pts):\n");
 printf("Expected output: test alternation btw malloc and free without segfault\n");
 
 printf("8.1: malloc(50) 25 times.\n");
 for(i = 0; i < 25; i++)
 { 
   *(p+i) = (char*)malloc(50);
 }
 while( getchar() != '\n' );
 
 printf("8.2: free(p) 10 times.\n");
 for(i = 0; i < 10; i++)
 { 
   free(*(p+i));
 }
 while( getchar() != '\n' );

 printf("8.3: malloc(50) 10 times\n");
 for(i = 0; i < 10; i++)
 { 
   *(p+i) = (char*)malloc(50);
 }
 while( getchar() != '\n' );

 printf("8.4: free(p) 25 times\n");
 for(i = 0; i < 25; i++)
 { 
   free(*(p+i));
 }
  
 printf("\n");




 return(0);  
}
