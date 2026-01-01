#include "que_7.h"


int main(void) {
    //code
    //allow watching in debuging
    setbuf(stdout, NULL);
    int arr[5]={15,32,26,95,27};
    size_t size=5;
    size_t *p_len=&size;
    printf("%s\n","Before deletion");
    for(size_t i=0;i<*p_len;i++){
        printf("%d ",arr[i]);
    }
    (*p_len)--;
    
    arr_remove_at(arr,p_len, 5);

    printf("%s","\n\n#################\n");

    printf("%s\n","\nAfter deletion");
    for(size_t i=0;i<*p_len;i++){
        printf("%d ",arr[i]);
    }
    printf("%s","\n\n");
    return 0;
}