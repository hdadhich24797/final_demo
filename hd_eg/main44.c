#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>

#include "address44.pb-c.h"

void populate(Tutorial__Person *p)
{

    p->rolld = 0;
    p->id = 1;
    p->id3 = 3;
    p->id4 = 4;
    p->id5 = 5;
    p->id6 = 6;
    p->id7 = 7;
    p->id8 = 8;
    p->id9 = 9;
    p->id10 = 10;
    p->id11 = 11;
    p->id12 = 12;
    p->id13 = 13;
    p->id14 = 14;
    p->id15 = 15;
    p->id16 = 16;
    p->id17 = 17;
}

void print(Tutorial__Person *p)
{
    printf("%d\r\n", p->rolld);
    printf("%d\r\n", p->id);
    printf("%d\r\n", p->id3);
    printf("%d\r\n", p->id4);
    printf("%d\r\n", p->id5);
    printf("%d\r\n", p->id6);
    printf("%d\r\n", p->id7);
    printf("%d\r\n", p->id8);
    printf("%d\r\n", p->id9);
    printf("%d\r\n", p->id10);
    printf("%d\r\n", p->id11);
    printf("%d\r\n", p->id12);
    printf("%d\r\n", p->id13);
    printf("%d\r\n", p->id14);
    printf("%d\r\n", p->id15);
    printf("%d\r\n", p->id16);
    printf("%d\r\n", p->id17);
}
int main()
{
    Tutorial__Person p = TUTORIAL__PERSON__INIT;
    uint8_t *out;

    
    populate(&p);
    int len = tutorial__person__get_packed_size(&p);
    printf("len is %d\r\n", len);
    out = (uint8_t *) malloc(len);

    int packed_len = tutorial__person__pack(&p, out);
    printf("packed len is %d\r\n", packed_len);

    /*  De serialize    */
    Tutorial__Person *de = NULL;

    de = tutorial__person__unpack(NULL, packed_len, out);
    if (de == NULL)
        printf("error in de-serializing\r\n");
    print(de);
    tutorial__person__free_unpacked(de, NULL);
    return 0;
}
