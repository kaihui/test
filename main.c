#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=9;

    char A[100000];
    FILE *fptr;
    fptr = fopen("data.txt", "r");


      if(fptr==NULL){
     printf("Error!!");
       }

while (fgets(A,100000,fptr)!= NULL){

     /* caculate s*/

     for(i=strlen(A)-2;i>=0;i--)
     printf("%c",A[i]);

 printf("\n");
}

    return 0;
}
