#include <stdio.h>
//#include <stdbool.h>
//#include <string.h>
#include <stdlib.h>


void arr_remove_at(int arr[], size_t *p_len, size_t index){
    for(size_t i=index;i<*p_len;i++){
        arr[i]=arr[i+1];
    }
}

int main(void) {
    //code
    //allow watching in debuging
    setbuf(stdout, NULL);
    int arr[5]={15,32,26,95,27};
    size_t size=5;
    size_t *p_len=&size;
    (*p_len)--;
    arr_remove_at(arr,p_len, 5);
    for(size_t i=0;i<*p_len;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}