#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#ifndef STACH_H
#define STACH_H
typedef char StackEntry; 


typedef struct node {
    StackEntry data;
    struct node *next;
} StackNode;

typedef struct top{
    StackNode *top;
    int size;
} Stack;


Stack initStacks();
void initStack(Stack *);
void push(StackEntry ,Stack *);
void pop(Stack *);
StackEntry top(const Stack *);
bool isEmpty(const Stack *);
bool isFull(const Stack *);
int size(const Stack *);
void clear(Stack *);
void print(const Stack * ,void (*pf)(StackEntry));

#endif
