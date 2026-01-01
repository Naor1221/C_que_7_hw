#include "que_7.h"

void arr_remove_at(int arr[], size_t *p_len, size_t index){ 
    for(size_t i=index;i<*p_len;i++){
        arr[i]=arr[i+1];
    }
}
