//
// Created by victoria Sviridchik on 2020-04-13.
//

#ifndef INC_2SEM_LAB5_STACK_H
#define INC_2SEM_LAB5_STACK_H


struct node;
void push(struct node **head, int value);
int pop( struct node **head);
int peek(struct node *head);
void out_stack(struct node *head);
int size(struct node *head) ;
int not_exists(struct node *head, int val);
#endif //INC_2SEM_LAB5_STACK_H
