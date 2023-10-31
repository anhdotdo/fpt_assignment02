#include<stdint.h>
#include<stdio.h>
#include"MyLib_List.h"

static uint8_t* MESSAGE_LIST[] = {"The memory is overflowed", "The list's OK!"};

void IO_List_show(Node* head);
void IO_List_showMessage(List_StatusType status);