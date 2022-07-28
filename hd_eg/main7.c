#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>

#include "address7.pb-c.h"
int32_t s_arr1[] = {11, 22, 33, 44};
int32_t s_arr2[] = {55, 66, 77, 88};
int32_t s_arr3[] = {99, 111, 222, 333};

void deref_person(Tutorial__Person *node)
{
    if (!node)
    {
        printf("Person node is empty\r\n");
        return;
    }
    printf("unpacked data is %d %d\r\n", node->id, node->rolld);
    printf("unpacked data is %d %d %d %d\r\n", node->arr[0], node->arr[1], node->arr[2], node->arr[3]);

}


int main()
{
    Tutorial__Person p[3];

    tutorial__person__init(&p[0]);
    tutorial__person__init(&p[1]);
    tutorial__person__init(&p[2]);

    Tutorial__SuperPerson sp = TUTORIAL__SUPER_PERSON__INIT;
    /*  p[0]    */


    p[0].id = 11;
    p[0].rolld = 111;
    p[0].n_arr = 4;
    p[0].arr = s_arr1;

    /*  p[1]    */
    p[1].id = 22;
    p[1].rolld = 222;
    p[1].n_arr = 4;
    p[1].arr = s_arr2;
    /*  p[2]    */
    p[2].id = 33;
    p[2].rolld = 333;
    p[2].n_arr = 4;
    p[2].arr = s_arr3;
    
    sp.money = 45;
    sp.n_p1 = 3;
 
    Tutorial__Person *ptr = (Tutorial__Person *)&p;
    //TODO: It does not work if we uncomment this
    Tutorial__Person **d_ptr = &ptr;
   
    sp.p1 = (Tutorial__Person **)&ptr;
    //sp.p1 = (Tutorial__Person **)malloc(sizeof(Tutorial__Person) * 3);
    sp.p1[0] = &p[0];
    sp.p1[1] = &p[1];
    sp.p1[2] = &p[2];

    uint8_t out[256] = {0};
    int packed_len = tutorial__super_person__pack(&sp, out);
    printf("packed len is %d\r\n", packed_len);

    /*  De serialize    */
    Tutorial__SuperPerson *sde = NULL;

    sde = tutorial__super_person__unpack(NULL, packed_len, out);
    if (sde == NULL)
        printf("error in de-serializing\r\n");


    printf("unpacked Money is %d\r\n", sde->money);

    for (int i = 0; i < 3; i++)
    {
        deref_person(sde->p1[i]);
    }

    tutorial__super_person__free_unpacked(sde, NULL);
    return 0;
}
