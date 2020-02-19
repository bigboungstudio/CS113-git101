//6210406599 Thanakorn Donklang
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *createnode(int n){
  struct node *node;
  node = (struct node*)malloc(sizeof(struct node));
  node->data = n;
  node->next = NULL;
  node->prev = NULL;
  return node;
}
void addnode(struct node *shinnode,struct node **head){
  struct node *tmp = *head;
  for(;tmp != NULL;tmp = tmp->next){
    if(shinnode->data < tmp->data){
      if(*head == tmp)
        {
          *head = shinnode;
          shinnode->next = tmp;
          tmp->prev = shinnode ;

        }
      else
        {
          tmp->prev->next = shinnode;
          shinnode->next = tmp;
          shinnode->prev = tmp->prev;
          tmp->prev = shinnode; 

        }
        break;
    }
    else if(tmp->next == NULL && shinnode->data >= tmp->data){
      shinnode->next = NULL;
      shinnode->prev = tmp;
      tmp->next = shinnode;
      break;
    }
  }

}
int main(){
    int x;
    struct node *head;
    struct node *tmp;
    scanf("%d",&x);
    head = (struct node*)malloc(sizeof(struct node));
    head->data = x;
    head->next = NULL;
    head->prev = NULL;
    while(1){
        scanf("%d",&x);
        if(x<=-1){
            break;
        }
        tmp = createnode(x);
        addnode(tmp, &head);
    }
    for(tmp=head; tmp; tmp = tmp->next)
      printf("%d\n", tmp->data);
    
    
}