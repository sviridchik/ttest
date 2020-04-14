//
// Created by victoria Sviridchik on 2020-04-10.
//
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
//#include <alloc.h>

struct tree{
    int key;
    struct tree *left;
    struct tree *right;
    struct tree *parent;
};

int exist(struct tree *root, int key){
    struct tree *mytree = root;
    while (mytree!=NULL){
        if(mytree->key == key){
            return 1;
        }else if(key<mytree->key){
            mytree = mytree->left;
        } else{
            mytree = mytree->right;
        }
    }
    return 0;
}

struct tree *init_root(struct tree *root, int key){
    struct tree *tmp = malloc(sizeof(struct tree));
    tmp->left = tmp->right=NULL;
    tmp->key = key;
    tmp->parent = NULL;
    root = tmp;
    return root;
}

void add_node(struct tree *root, int key){
    struct tree *mytree = root;
    struct tree *current_parent = NULL;
    struct tree *tmp =  malloc(sizeof(struct tree));
tmp->key=key;


while (mytree!=NULL){
    current_parent = mytree;
    if(key<mytree->key){
        mytree = mytree->left;
    } else{
        mytree = mytree->right;
    }
}
tmp->parent = current_parent;
tmp->left = NULL;
tmp->right = NULL;

if (key<current_parent->key){
    current_parent->left = tmp;
} else{
    current_parent->right = tmp;
}

}



struct tree *search(struct tree *root, int key){
    if((root == NULL) || (root->key==key)){
        return root;
    }
    if(key < root->key){
        return search(root->left,key);
    } else{
        return search(root->right, key);
    }
}


void out(struct tree *root)
{
    if (root->left)
        out(root->left);
    printf("%d ", root->key);
    if (root->right)
        out(root->right);
}

