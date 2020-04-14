//
// Created by victoria Sviridchik on 2020-04-13.
//

#ifndef INC_2SEM_LAB5_MYFILE_H
#define INC_2SEM_LAB5_MYFILE_H
int main();

struct tree;
int task1();
int task2();
int exist(struct tree *root, int key);
struct tree *init_root(struct tree *root, int key);
void add_node(struct tree *root, int key);
void out(struct tree *root);

struct node;
void push(struct node **head, int value);
int pop( struct node **head);
int peek(struct node *head);
void out_stack(struct node *head);
int size(struct node *head) ;
int not_exists(struct node *head, int val);


struct simpletree;
struct simpletree *init_root_simple(struct simpletree *root, int key);
void out_simple1(struct simpletree *root);

#endif //INC_2SEM_LAB5_MYFILE_H
