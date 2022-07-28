#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>

#include "address5.pb-c.h"

int main()
{

    int32_t s_arr[] = {11, 22, 33, 44};
    Tutorial__Person p = TUTORIAL__PERSON__INIT;
    uint8_t *out;

    int len = tutorial__person__get_packed_size(&p);
    p.id = 25;
    p.rolld = 32;
    p.n_arr = 4;
    //p.arr = (int32_t *) malloc(sizeof(int32_t) * 4);
    p.arr = s_arr;

    if (p.arr == NULL)
        return 0;
   
    /*
    p.arr[0] = 10;
    p.arr[1] = 20;
    p.arr[2] = 30;
    p.arr[3] = 40;
    */

    printf("len is %d\r\n", len);
    out = (uint8_t *) malloc(len);

    int packed_len = tutorial__person__pack(&p, out);
    printf("packed len is %d\r\n", packed_len);

    printf("packed data is %d %d\r\n", p.id, p.rolld);

    /*  De serialize    */
    Tutorial__Person *de = NULL;

    de = tutorial__person__unpack(NULL, packed_len, out);
    if (de == NULL)
        printf("error in de-serializing\r\n");

    printf("unpacked data is %d %d\r\n", de->id, de->rolld);
    printf("unpacked data is %d %d %d %d\r\n", de->arr[0], de->arr[1], de->arr[2], de->arr[3]);
    tutorial__person__free_unpacked(de, NULL);
    return 0;
}
