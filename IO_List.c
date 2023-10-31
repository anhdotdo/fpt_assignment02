
#include"IO_List.h"

void IO_List_show(Node* head){
    Node* pTemp1 = head;
    while (pTemp1 != NULL)
    {
        printf("%d ", pTemp1->data);
        pTemp1 = pTemp1->pNext;
    }
    printf("\n");
}

void IO_List_showMessage(List_StatusType status){
    // uint8_t *message = MESSAGE_LIST[status];
    printf("%s\n", MESSAGE_LIST[status]);
}