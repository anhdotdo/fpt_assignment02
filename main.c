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
    // List_StatusType status;
    // printf("At begin: ");
    // List_show(List_getList());
    // status = List_addHead(100);
    // List_addHead(200);
    // List_addHead(300);
    // List_addHead(400);
    // printf("After: ");
    // List_show(List_getList());
    // printf("len: %d\n", List_getLength());

    uint8_t user_input;
    List_StatusType status = LIST_OK;           // default status of the list
    int32_t data;
    do{
        do{
            scanf("%s", &user_input);
        }while(!(user_input == 'i' || user_input == 'd' || user_input == 'p' || user_input == 'e'));

        switch (user_input)
        {
        case 'i':
            printf("Enter data: ");
            scanf("%d", &data);
            status = List_addHead(data);
            break;
        case 'p':
            IO_List_show(List_getList());
            break;
        default:
            break;
        }
        IO_List_showMessage(status);
    }while(user_input != 'e');

    return 0;
}