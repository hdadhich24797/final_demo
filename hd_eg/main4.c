#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>

#include "address4.pb-c.h"

void print(uint8_t *out, int count)
{
    for (int i = 0; i < count; i++)
        printf("%d ", out[i]);
    printf("\n");
}

int main()
{
    Tutorial__Person p = TUTORIAL__PERSON__INIT;
    uint8_t *out;

    int len = tutorial__person__get_packed_size(&p);
    p.id = 24;
    p.rolld = 33;
    printf("len is %d\r\n", len);
    out = (uint8_t *) malloc(len);

    int packed_len = tutorial__person__pack(&p, out);
    
    print(out, packed_len);

    printf("packed len is %d\r\n", packed_len);

    printf("packed data is %d %d\r\n", p.id, p.rolld);

    /*  De serialize    */
    Tutorial__Person *de = NULL;

    de = tutorial__person__unpack(NULL, packed_len, out);
    if (de == NULL)
        printf("error in de-serializing\r\n");

    printf("unpacked data is %d %d\r\n", de->id, de->rolld);
    tutorial__person__free_unpacked(de, NULL);
    return 0;
}
