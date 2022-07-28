#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>

#include "address6.pb-c.h"

int main()
{

    int32_t s_arr[] = {11, 22, 33, 44};
    Tutorial__Person p = TUTORIAL__PERSON__INIT;
    Tutorial__SuperPerson sp = TUTORIAL__SUPER_PERSON__INIT;
    p.id = 25;
    p.rolld = 32;
    p.n_arr = 4;
    //p.arr = (int32_t *) malloc(sizeof(int32_t) * 4);
    p.arr = s_arr;

    sp.money = 45;
    sp.p1 = &p;
    if (p.arr == NULL)
        return 0;

    int len = tutorial__person__get_packed_size(&p);
    printf("len is %d\r\n", len);
    len = tutorial__super_person__get_packed_size(&sp);
    printf("len is %d\r\n", len);

    uint8_t *out = NULL;
    out = (uint8_t *) malloc(len);
    

   
    /*
    p.arr[0] = 10;
    p.arr[1] = 20;
    p.arr[2] = 30;
    p.arr[3] = 40;
    */


    int packed_len = tutorial__super_person__pack(&sp, out);
    printf("packed len is %d\r\n", packed_len);

    printf("packed data is %d %d\r\n", p.id, p.rolld);

    /*  De serialize    */
    Tutorial__SuperPerson *sde = NULL;
    Tutorial__Person *de = NULL;

    sde = tutorial__super_person__unpack(NULL, packed_len, out);
    if (sde == NULL)
        printf("error in de-serializing\r\n");


    printf("unpacked Money is %d\r\n", sde->money);

    de = sde->p1;
    printf("unpacked data is %d %d\r\n", de->id, de->rolld);
    printf("unpacked data is %d %d %d %d\r\n", de->arr[0], de->arr[1], de->arr[2], de->arr[3]);
    tutorial__super_person__free_unpacked(sde, NULL);
    return 0;
}
