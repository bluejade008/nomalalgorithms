#include <stdio.h>
#include <stdlib.h>

typedef struct LinkNode LN {

  int data;
  LN *next;
} linklist;

LN *newnode(int a0) {
