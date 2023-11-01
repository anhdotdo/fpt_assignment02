#ifndef _MYLIB_LIST_H_
#define _MYLIB_LIST_H_

#include<stdint.h>

typedef struct Node{            // struct data type
    int32_t data;
    struct Node* pNext;
}Node;

typedef struct{
    uint8_t* name;
    uint32_t power;
    uint32_t unit_price;
}DeviceType;

typedef enum {                  // status type
    LIST_OVER_MEMORY,
    LIST_OK,
    LIST_EMPTY,
    LIST_OUT_OF_RANGE
}List_StatusType;

#endif /*_MYLIB_LIST_H_*/
