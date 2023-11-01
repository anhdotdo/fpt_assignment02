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

List_StatusType List_addTail(int32_t data){
    List_StatusType status = LIST_OK;
    Node* pTmep1 = List_createNewNode(data);
    Node* pTemp2 = NULL;
    if(pTmep1 == NULL){
        status = LIST_OVER_MEMORY;
    }else{
        if(HEAD == NULL){
            HEAD = pTmep1;
            len++;
        }else{
            pTemp2 = HEAD;
            while (pTemp2->pNext != NULL)
            {
                pTemp2 = pTemp2->pNext;
            }
            pTemp2->pNext = pTmep1;
            len++;
        }
    }
    return status;
}

List_StatusType List_addAtNth(int32_t data, int32_t pos){       // pos = 1, 2, 3, ...
    List_StatusType status = LIST_OK;
    Node* pTmep1 = List_createNewNode(data);
    Node* pTemp2 = NULL;
    int32_t i;                                  // bien dem
    if(pTmep1 == NULL){
        status = LIST_OVER_MEMORY;
    }else{
        if(1 == pos){
            status = List_addHead(data);
        }else if(len+1 <= pos){
            status = List_addTail(data);
        }else if(1 < pos && len+1 > pos){
            pTemp2 = HEAD;
            for(i = 1; i < pos-1; i++){
                pTemp2 = pTemp2->pNext;
            }
            pTmep1->pNext = pTemp2->pNext;
            pTemp2->pNext = pTmep1;
            len++;
        }
    }
    return status;
}

List_StatusType List_deleteHead(){
    List_StatusType status = LIST_OK;
    Node* pTemp1 = NULL;
    if(HEAD == NULL){
        status = LIST_EMPTY;
    }else{
        pTemp1 = HEAD;
        HEAD = HEAD->pNext;
        free(pTemp1);
        len--;
    }
    return status;
}

List_StatusType List_deleteTail(){
    List_StatusType status = LIST_OK;
    Node* pTemp1 = NULL, *pTemp2 = NULL;
    if(HEAD == NULL){
        status = LIST_EMPTY;
    }else{
        pTemp1 = HEAD;
        while (pTemp1->pNext->pNext != NULL)
        {
            pTemp1 = pTemp1->pNext;
        }
        pTemp2 = pTemp1->pNext;
        pTemp1->pNext = NULL;
        free(pTemp1);
        len--;
    }
    return status;
}

List_StatusType List_deleteAtNth(int32_t pos){
    List_StatusType status = LIST_OK;
    Node* pTemp1 = NULL, *pTemp2 = NULL;
    int32_t i;
    if (1 == pos)
    {
        status = List_deleteHead();
    }else if(1 < pos && len >= pos){
        pTemp1 = HEAD;
        for(i = 1; i < pos-1; i++){
            pTemp1 = pTemp1->pNext;
        }
        pTemp2 = pTemp1->pNext;
        pTemp1->pNext = pTemp2->pNext;
        free(pTemp2);
        len--;
    }else if(len < pos){
        status = LIST_OUT_OF_RANGE;
    }
    return status;
}