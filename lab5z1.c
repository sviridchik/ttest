//
// Created by victoria Sviridchik on 2020-04-13.
//

//Даны два упорядоченных стека, в которых могут быть одинаковые элементы.
//Разработать функцию создания одного общего упорядоченного стека,
//исключив повторяющиеся элементы.
#include <time.h>
#include "stack.c"




int task1() {
    int i;
    int f1=1;
    int f2 = 1;
    srand(time(NULL));
    int border1 = get_rand_range_int(2,4);
    int border2 = get_rand_range_int(2,4);
    printf("%d %d",border1,border2);
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *res = NULL;
    for (i = 0; i<border1; i++){
        push(&first,get_rand_range_int(1,35));
    }
    for (i = 0; i<border2; i++){
        push(&second,get_rand_range_int(1,25));
    }
    push(&first,12);

    push(&first,12);

    push(&second,12);
    printf("\n");
    printf("first: ");
    out_stack(first);
    printf("\n");
    printf("second: ");
    out_stack(second);
    printf("\n");

    printf("%d",not_exists(first,13));
    while (first || second){
        if(first){
            if(not_exists(res,peek(first))){
                push(&res,pop(&first));
            } else{pop(&first);}
        }
        if(second){
            if(not_exists(res,peek(second))){
                push(&res,pop(&second));
            } else{pop(&second);}
        }
    }
//    push(&first, 12);

    printf("\n");
    printf("res: ");
    out_stack(res);

//    printf("Hello, World!\n");
    return 0;
}