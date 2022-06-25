#include <stdio.h>
#include "stdint.h"

int8_t linear_search(uint8_t *pArr, uint8_t size, uint8_t value);


int main() {

    uint8_t arr[10] = {12,32,25,65,84,12,61,98,99,203};
    int8_t returnVal = linear_search(arr,sizeof (arr),101);
    printf("return value : %d", returnVal);

    return 0;
}
int8_t linear_search(uint8_t *pArr, uint8_t size, uint8_t value)
{
    for(uint8_t i = 0 ; i<size; i++ )
    {
        if(pArr[i] == value) { return i; }
    }
    return -1;

}