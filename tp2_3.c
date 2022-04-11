#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7
#define compu 5

struct PC
{
    int velocidadproc;
    int anio;
    char tipoproc[50];
    int nucleos;
}typedef pc;

int main() {
    // srand((int)time(NULL));
    // int i,j,*puntero;
    // int mt[N][M];
    // puntero = &(mt[0][0]);

    // for(i = 0;i<N; i++)
    // {
    //     for(j = 0;j<M; j++)
    //     {
    //         *puntero=1+rand()%100;
    //         printf("%d ", *puntero);
    //     }
    //     printf("\n");
    //     puntero = puntero + (i * M + j);
    // }
    pc computadora[compu];
    struct PC *punteropc;
    punteropc = computadora;
    
    
    for (int a = 0; a < compu; a++)
    {
        printf("Ingrese la velocidad de procesamiento en GHz. Considere valores enteros entre 1 y 3: ");
        scanf("%d", &(punteropc->velocidadproc) );
        while (punteropc->velocidadproc < 1 || punteropc->velocidadproc > 3)
        {
            printf("Considere valores enteros entre 1 y 3: ");
            scanf("%d", &(punteropc->velocidadproc) );
        }
        printf("Ingrese el año de fabricacion. Considere valores enteros entre 2000 y 2017: ");
        scanf("%d", &(punteropc->anio) );
        while (punteropc->anio < 2000 || punteropc->anio > 2017)
        {
            printf("Considere valores enteros entre 2000 y 2017: ");
            scanf("%d", &(punteropc->anio) );
        }
        printf("Ingrese la cantidad de nucleos. Considere valores enteros entre 1 y 8: ");
        scanf("%d", &(punteropc->nucleos) );
        while (punteropc->nucleos < 1 || punteropc->nucleos > 8)
        {
            printf("Considere valores enteros entre 1 y 8: ");
            scanf("%d", &(punteropc->nucleos) );
        }
        scanf("%d", &(punteropc->velocidadproc) );
        while (punteropc->velocidadproc < 1 || punteropc->velocidadproc > 3)
        {
            printf("Considere valores enteros entre 1 y 3: ");
            scanf("%d", &(punteropc->velocidadproc) );
        }
        printf("Ingrese el tipo de procesador. \n 1.Intel \n 2.AMD \n 3.Celeron \n4.Athlon \n 5.Core \ 6.Pentium ");
    }
    
    
    

}
    