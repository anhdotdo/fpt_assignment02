#ifndef _MYLIB_LIST_H_
#define _MYLIB_LIST_H_

#include<stdint.h>

typedef struct Node{            // struct data type
    int32_t data;
    struct Node* pNext;
}Node;



typedef enum {                  // status type
    LIST_OVER_MEMORY,
    LIST_OK
}List_StatusType;

#endif
