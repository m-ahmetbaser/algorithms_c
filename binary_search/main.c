#include <stdio.h>
#include "stdint.h"

void binary_search(int8_t *pArr, int8_t val);



int main() {

    int8_t arr[10] = {2,5,7,9,12,15,34,76,87,113};
    binary_search(arr,113);


    return 0;
}

void binary_search(int8_t *pArr, int8_t val)
{
    int8_t head = -1;
    int8_t end = 10;
    uint8_t flag = 0;

    while(end - head > 1)
    {
        int8_t x = (head + end) / 2;
        if(pArr[x] == val)
        {
            flag = 1;
            printf(" %d. idx",x);
            break;
        }
        else if(pArr[x] > val){ end = x;}
        else{ head = x; }
    }
    if(flag == 0){ printf("number not found");}
}
