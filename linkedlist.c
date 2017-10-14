#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

//  Should take a pointer to a node struct and print out all of the data in the list
void print_list(struct node *node) {
  while (node) {
    printf("%d -> ", node->i);
    node = node->next;
  }
  printf("NULL\n");
}

/*
    Should take a pointer to the existing list and the data to be added,
      create a new node and put it at the beginning of the list.
    The second argument should match whatever data you contain in your nodes.
    Returns a pointer to the beginning of the list.
*/
struct node *insert_front(struct node *list, int data) {
  struct node *new = (struct node *)malloc(sizeof(struct node));
  new->i = data;
  new->next = list;
  return new;
}

/*
    Should take a pointer to a list as a parameter and then go through the entire list
      freeing each node and return a pointer to the beginning of the list
      (which should be NULL by then). 
*/
struct node *free_list(struct node *list) {
  while (list) {
    struct node *next = list->next;
    free(list);
    list = next;
  }
  //free does not set pointers to null
  return NULL;
}
