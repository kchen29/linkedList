#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

int main() {
  struct node *n1 = (struct node *)calloc(1, sizeof(struct node));

  print_list(n1);

  n1 = insert_front(n1, 1);
  n1 = insert_front(n1, 2);
  n1 = insert_front(n1, 3);
  
  print_list(n1);

  n1 = free_list(n1);

  printf("%p\n", n1);
  
  return 0;
}
