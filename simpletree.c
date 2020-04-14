//
// Created by victoria Sviridchik on 2020-04-13.
//

//
// Created by victoria Sviridchik on 2020-04-10.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "simpletree.h"

//#include <alloc.h>

struct simpletree{
    int key;
    struct simpletree *left;
    struct simpletree *right;
    struct simpletree *parent;
};


struct simpletree *init_root_simple(struct simpletree *root, int key){
    struct simpletree *tmp = malloc(sizeof(struct simpletree));
    tmp->left = tmp->right=NULL;
    tmp->key = key;
    tmp->parent = NULL;
    root = tmp;
    return root;
}

struct simpletree *add_node_simple(struct simpletree *root, int key){
    srand(time(NULL));

    struct simpletree *mytree = root;
    struct simpletree *current_parent = NULL;
    struct simpletree *tmp =  malloc(sizeof(struct simpletree));
    tmp->key=key;
    int hod = 0;
    while (mytree!=NULL){
        hod = rand()%2;
        current_parent = mytree;
        if(hod == 0){
            mytree = mytree->left;
        } else{
            mytree = mytree->right;
        }
    }
    tmp->parent = current_parent;
    tmp->left = NULL;
    tmp->right = NULL;

    if (hod==0){
        current_parent->left = tmp;
    } else{
        current_parent->right = tmp;
    }
    return root;
}





void out_simple1(struct simpletree *root)
{
    if (root->left)
        out_simple1(root->left);
    printf("%d ", root->key);
    if (root->right)
        out_simple1(root->right);
}

