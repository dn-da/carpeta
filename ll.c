#include "stdio.h"
#include "stdlib.h"

struct node{
  int data;
  struct node* next;



};
/*struct node* BuildOneTwoThree(){
  struct node* head = NULL;
  struct node* second = NULL;
  struct node* third = NULL;

  head = malloc(sizeof(struct node));
  second = malloc(sizeof(struct node));
  third = malloc(sizeof(struct node));

  head->data =1;
  head->next=second;

  second->data=2;
  second -> next = third;

  third -> data=3;
  third ->next=NULL;

  return head;

}

void print(struct node* head){
  while (head) {
    printf("%p",&*head);
    printf("%d",head->data);
    printf("\n");
    head= head->next;
  
  }
}
void freeMemory(struct node* head){
  while (head) {
    struct node* next=head->next;
    free(head);
    head=next;
  
  }
}

int length(struct node* head){
  struct node* current = head;
  int count =0;

  while (current != NULL) {
    count++;
    current = current -> next;
  
  }

  return count;
}

void lengthTest(){
  struct node* myList = BuildOneTwoThree();
  print(myList);
  int len = length(myList);
  printf("%d",len);
  freeMemory(myList);
}
*/
struct node* BuildWithSpecialCase(){


}
int main(){
  //lengthTest();
  

  return 0;

}
