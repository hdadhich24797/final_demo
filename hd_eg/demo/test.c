#include <stdio.h>

int a = 10;
void fun(int *p)
{
    p = &a;
}

int main()
{
    int *ptr = NULL;
    fun(ptr);
    ptr = &a;
    printf("Hello %d", *ptr);
    return 0;
}
