#include"List.h"

Node* List_getList(){
    return HEAD;
}

int32_t List_getLength(){
    return len;
}

Node* List_createNewNode(int32_t data){
    Node* pTemp1 = (Node*)malloc(sizeof(Node));
    if(pTemp1 == NULL){
        return NULL;
    }
    pTemp1->data = data;
    pTemp1->pNext = NULL;
    return pTemp1;
}

List_StatusType List_addHead(int32_t data){
    List_StatusType status = LIST_OK;               // the default status of the List
    Node* pTemp1 = List_createNewNode(data);
    if(pTemp1 == NULL){                             // be out of memory or not
        status = LIST_OVER_MEMORY;
    }else{
        if(HEAD == NULL){                           // list of NULL or not
            HEAD = pTemp1;
            len++;
        }else{
            pTemp1->pNext = HEAD;
            HEAD = pTemp1;
            len++;
        }
    }
    return status;
}

