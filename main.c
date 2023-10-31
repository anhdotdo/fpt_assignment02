#include<stdio.h>
#include<stdint.h>
#include"List.h"
#include"IO_List.h"

/*
++ buid list.h library that have global variable
+ create new node
+ add one node at Nth (at head, at tail)
+ delete one node at Nth (delete head or tail)
+ display all nodes of list
+ besides, get node, update list, reverse the list, sort the list 
++ apply node of struct data type
++ notice: build library that not including printf and scanf
*/

int8_t main(){
    // printf("%d", len);
    List_StatusType status;
    printf("At begin: ");
    List_show(List_getList());
    status = List_addHead(100);
    List_addHead(200);
    List_addHead(300);
    List_addHead(400);
    printf("After: ");
    
    List_show(List_getList());
    printf("len: %d\n", List_getLength());

    return 0;
}