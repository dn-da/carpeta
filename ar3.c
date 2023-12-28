#include <stdio.h>
int main(){

  char* palabra = "abuelo";
  //*(palabra+1) = 'k';
  //printf("%c\n",*(palabra+1));
  for(int i=0;*(palabra+i)!='\0';++i){
    printf("%c",*(palabra+i));
  }
  putchar('\n');

    return 0;


}
