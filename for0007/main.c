#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int ii;
    int v;
    int co=0;
    int cot=0;
    int c=0;
    int f=0;
    int m=0;
    for (i=0;i<20;i++)
    {
        co=0;
        for(ii=0;ii<15;ii++)
        {
            printf("\ningrese unidades vendidas: ");
            scanf("%d", &v);
            co=co+v;
            if (v>c)
            {
                c=v;

            }
            v=0;
        }
        printf("\nEl vendedor %d vendio: %d", i, co);
        cot=cot+co;
        if (c>m)
        {
            m=c;
            f=i;
        }
        c=0;
    }
    printf("\ntotal vendido: %d", cot);
    printf("\nEl vendedor %d tuvo la mayor venta diaria: %d", f, m);
    return 0;
}
