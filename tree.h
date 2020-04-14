//
// Created by victoria Sviridchik on 2020-04-13.
//

#ifndef INC_2SEM_LAB5_TREE_H
#define INC_2SEM_LAB5_TREE_H
struct tree;

int exist(struct tree *root, int key);
struct tree *init_root(struct tree *root, int key);
void add_node(struct tree *root, int key);
void out(struct tree *root);

#endif //INC_2SEM_LAB5_TREE_H
