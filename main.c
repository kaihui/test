#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    char A[12];//�o�䥲���]��10�j2�A�]���n��\n
    FILE *fptr;
    fptr = fopen("data.txt", "r");


      if(fptr==NULL){
     printf("Error!!");
       }

while (fgets(A,12,fptr)!= NULL){
        //��C�@��12�Ӧr��(�]�A\n)

     /* caculate s*/

     for(i=strlen(A)-2;i>=0;i--)
     printf("%c",A[i]);

 printf("\n");
}

    return 0;
}