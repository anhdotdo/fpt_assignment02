
#include"IO_List.h"

void List_show(Node* head){
    Node* pTemp1 = head;
    while (pTemp1 != NULL)
    {
        printf("%d ", pTemp1->data);
        pTemp1 = pTemp1->pNext;
    }
    printf("\n");
}