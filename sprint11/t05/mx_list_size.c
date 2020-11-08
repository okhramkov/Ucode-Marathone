#include "list.h"

int mx_list_size(t_list *list) {
    t_list *temp = NULL;
    int count = 0;
    if (list) {
        temp = list;
        while (temp->next != NULL) {
            count++;
            temp = temp -> next;
        }
    }
    return count;
}
