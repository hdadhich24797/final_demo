#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>

#include "address8.pb-c.h"
int32_t s_arr11[] = {11, 22, 33, 44};
int32_t s_arr12[] = {55, 66, 77, 88};
int32_t s_arr13[] = {99, 111, 222, 333};
int32_t s_arr14[] = {444, 555, 666, 777};
int32_t s_arr15[] = {888, 999, 1111, 2222};

int32_t s_arr21[] = {112, 222, 332, 442};
int32_t s_arr22[] = {552, 662, 772, 882};
int32_t s_arr23[] = {992, 1112, 2222, 3332};
int32_t s_arr24[] = {4442, 5552, 6662, 7772};
int32_t s_arr25[] = {8882, 9992, 11121, 22222};

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
    Tutorial__Person p[2][5];

    tutorial__person__init(&p[0][0]);
    tutorial__person__init(&p[0][1]);
    tutorial__person__init(&p[0][2]);
    tutorial__person__init(&p[0][3]);
    tutorial__person__init(&p[0][4]);
    
    tutorial__person__init(&p[1][0]);
    tutorial__person__init(&p[1][1]);
    tutorial__person__init(&p[1][2]);
    tutorial__person__init(&p[1][3]);
    tutorial__person__init(&p[1][4]);

    Tutorial__SuperPerson sp = TUTORIAL__SUPER_PERSON__INIT;
    /*  p[0][0]    */
    p[0][0].id = 11;
    p[0][0].rolld = 111;
    p[0][0].n_arr = 4;
    p[0][0].arr = s_arr11;

    /*  p[0][1]    */
    p[0][1].id = 22;
    p[0][1].rolld = 222;
    p[0][1].n_arr = 4;
    p[0][1].arr = s_arr12;
    
    /*  p[0][2]    */
    p[0][2].id = 33;
    p[0][2].rolld = 333;
    p[0][2].n_arr = 4;
    p[0][2].arr = s_arr13;
    
    /*  p[0][3]    */
    p[0][3].id = 44;
    p[0][3].rolld = 444;
    p[0][3].n_arr = 4;
    p[0][3].arr = s_arr14;
    
    /*  p[0][4]    */
    p[0][4].id = 55;
    p[0][4].rolld = 555;
    p[0][4].n_arr = 4;
    p[0][4].arr = s_arr15;
    

    /*  Row 2   */
    /*  p[1][0]    */
    p[1][0].id = 112;
    p[1][0].rolld = 1112;
    p[1][0].n_arr = 4;
    p[1][0].arr = s_arr21;

    /*  p[1][1]    */
    p[1][1].id = 222;
    p[1][1].rolld = 2222;
    p[1][1].n_arr = 4;
    p[1][1].arr = s_arr22;
    
    /*  p[1][2]    */
    p[1][2].id = 332;
    p[1][2].rolld = 3332;
    p[1][2].n_arr = 4;
    p[1][2].arr = s_arr23;
    
    /*  p[1][3]    */
    p[1][3].id = 442;
    p[1][3].rolld = 4442;
    p[1][3].n_arr = 4;
    p[1][3].arr = s_arr24;
    
    /*  p[1][4]    */
    p[1][4].id = 552;
    p[1][4].rolld = 5552;
    p[1][4].n_arr = 4;
    p[1][4].arr = s_arr25;
    
    sp.money = 45;
    sp.e = TUTORIAL__MY_ENUM__B;
    sp.n_p1 = 10;
 
    Tutorial__Person *ptr = (Tutorial__Person *)&p[0][0];
    Tutorial__Person **d_ptr = NULL;
    //sp.p1 = (Tutorial__Person **)p;
    //sp.p1 = (Tutorial__Person **)&p[0][0];
    //sp.p1 = (Tutorial__Person **)&ptr;
    sp.p1 = (Tutorial__Person **)malloc(sizeof(Tutorial__Person) * 10);
   
    //sp.p1 = (Tutorial__Person **)&ptr;
    
    sp.p1[0] = &p[0][0];
    sp.p1[1] = &p[0][1];
    sp.p1[2] = &p[0][2];
    sp.p1[3] = &p[0][3];
    sp.p1[4] = &p[0][4];

    sp.p1[5] = &p[1][0];
    sp.p1[6] = &p[1][1];
    sp.p1[7] = &p[1][2];
    sp.p1[8] = &p[1][3];
    sp.p1[9] = &p[1][4];
   
    uint8_t out[1024] = {0};
    int packed_len = tutorial__super_person__pack(&sp, out);
    printf("packed len is %d\r\n", packed_len);

    /*  De serialize    */
    Tutorial__SuperPerson *sde = NULL;

    sde = tutorial__super_person__unpack(NULL, packed_len, out);
    if (sde == NULL)
        printf("error in de-serializing\r\n");


    printf("unpacked Money is %d\r\n", sde->money);
    printf("unpacked enum is %d\r\n", sde->e);

    for (int i = 0; i < 10; i++)
    {
        deref_person(sde->p1[i]);
    }

    tutorial__super_person__free_unpacked(sde, NULL);
    return 0;
}
