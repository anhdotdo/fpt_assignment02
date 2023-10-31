
#include<stdint.h>
#include<stdlib.h>
#include"MyLib_List.h"


static Node* HEAD = NULL;        // global variable
static uint32_t len = 0;

Node* List_getList();
int32_t List_getLength();
Node* List_createNewNode(int32_t data);
List_StatusType List_addHead(int32_t data);