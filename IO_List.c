
#include"IO_List.h"

void IO_List_showMessage(List_StatusType status){
    // uint8_t *message = MESSAGE_LIST[status];
    printf("%s\n", MESSAGE_LIST[status]);
}