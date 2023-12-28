#include <stdio.h>
#define O 0
#define I 1

int main(){
  int caracter;
  int longitud = 0;

  while ((caracter = getchar())!= EOF) {
    if (caracter ==' ' || caracter=='\n'|| caracter == '\t') {
      if (longitud>0) {
        printf("longitud: %d\n", longitud);
        longitud =0;
     }
   }else{

     if(longitud==0)
       printf("palabra: ");
     longitud++;
     putchar(caracter);
 

   }
 }
 return 0;





}
