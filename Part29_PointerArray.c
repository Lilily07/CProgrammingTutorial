#include <stdio.h>

int main() {

       int A[] = {25, 24, 23, 20, 19, 17}; //index 0 - 5

       int *p = A; //points to the value in A[0]
       //A++; //this is invalid --> A is the base address which is the first element. A == A[0]
       p++; //this is valid --> increment the value in A[0]

       printf ("%p\n", A); //A -- address of the first element
       printf ("%p\n", &A[0]); //address of A[0]
       printf ("%d\n", A[0]); //value in A[0]
       printf ("%d\n", *A); //value points to in A[0]
       
       //for loop to print address for each element
       int indexA = 0;

       for (indexA = 0; indexA < 6; indexA++) {

               printf("\n\nAddress of A[%d]:%p\n", indexA, &A[indexA]); //& -- address. here it gives address of A[indexA]
               printf("Address of A[%d]:%p\n", indexA, A + indexA); //A == A[0]. A[0] + indexA
               printf("Value of A[%d]:%d\n", indexA, A[indexA]); //right away gives value in respective A[indexA]
               printf("Value of A[%d]:%d\n", indexA, *(A + indexA)); //points to the value in (A[0] + indexA) eg *A[2] = 24
       }
       
       printf("\n");

       return 0; 
}