#include <stdio.h>
#include <time.h>

#include "tree.c"
#include "simpletree.c"




struct tree *destoy(struct simpletree *simpleroot_lab, struct tree *root_lab){
    struct simpletree *mytree = simpleroot_lab;
    if(simpleroot_lab){
        root_lab = destoy(simpleroot_lab->left, root_lab);
        root_lab = destoy(simpleroot_lab->right,root_lab);
        if (root_lab == NULL){
            root_lab = init_root(root_lab,simpleroot_lab->key);
        } else{
            if(!exist(root_lab,simpleroot_lab->key)){
                add_node(root_lab,simpleroot_lab->key);
            }
        }
        free(simpleroot_lab);
    }
    return root_lab;
}



int task2() {
    int i = 0;
    srand(time(NULL));
    int border = get_rand_range_int(4,10);


    struct tree *root_lab =  NULL;
    struct simpletree *simpleroot_lab =  NULL;

    simpleroot_lab = init_root_simple(simpleroot_lab, get_rand_range_int(1,10));


    for(i = 0; i<25; i++){
        simpleroot_lab = add_node_simple(simpleroot_lab,get_rand_range_int(-10,10));
    }

out_simple1(simpleroot_lab);
    printf("\n");
root_lab = destoy(simpleroot_lab,root_lab);

    out(root_lab);




    return 0;
}