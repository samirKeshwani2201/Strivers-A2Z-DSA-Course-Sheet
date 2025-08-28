#include <stdio.h>

int main()
{
    int cond = 1;
    int newCond=1;
    newCond+=cond;
    newCond=newCond+cond;
    printf("%d", cond);

    return 0;
}

//&  &&