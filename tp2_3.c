#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7
#define compu 3

struct PC
{
    int velocidadproc;
    int anio;
    int tipoproc;
    int nucleos;
}typedef pc;

//funciones del punto 4
void listarestruc(pc *punt);
void listarpc(pc *punt);
void pcmasvieja(pc *punt);
void masveloz(pc *punt);

int main() {
    //punto 3
    // srand((int)time(NULL));
    // int i,j,*puntero;
    // int mt[N][M];
    // puntero = &(mt[0][0]);
    // for(i = 0;i<N; i++)
    // {
    //     for(j = 0;j<M; j++)
    //     {
    //         *(puntero + i * M + j)=1+rand()%100;
    //         printf("%d ", *(puntero + i * M + j));
            
    //     }
    //     printf("\n");
    // }
    
    //punto 4
    int aux;
    pc computadora[compu];
    struct PC *punteropc;
    punteropc = computadora;
    
    
    
    for (int a = 0; a < compu; a++)
    {
        printf("\n-------------------------------PC[%d]-------------------------------\n",a+1);
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

        
        printf("Ingrese el tipo de procesador. \n 1.Intel \n 2.AMD \n 3.Celeron \n 4.Athlon \n 5.Core \n 6.Pentium ");
        scanf("%d", &(punteropc->tipoproc) );
        while (punteropc->tipoproc < 1 || punteropc->tipoproc > 6)
        {
            printf("Ingrese nro que corresponda al tipo de procesador. \n 1.Intel \n 2.AMD \n 3.Celeron \n 4.Athlon \n 5.Core \n 6.Pentium \n---> ");
            scanf("%d", &(punteropc->tipoproc) );
        }
        punteropc++;

    }
    
    struct PC *punteroaux=computadora;

    // printf("\nListado de pc cargadas\n");    
    // listarpc(punteroaux);

    // printf("\nCaracteristicas de la pc más vieja\n");
    // pcmasvieja(punteroaux);

    printf("\nCaracteristicas de la pc más veloz\n");
    masveloz(punteroaux);
}

void listarestruc(pc *punt) {
    int aux;
    printf("velocidad de procesamiento en GHz: %d \n",punt->velocidadproc);

        printf("año de fabricacion: %d\n",punt->anio);
        
        printf("cantidad de nucleos: %d\n",punt->nucleos);
        
        aux = punt->tipoproc;
        
        printf("tipo de procesador: ");
        switch (aux)
        {
        case 1:
            printf("Intel\n");
            break;
        case 2:
            printf("AMD\n");
            break;
        case 3:
            printf("Celeron\n");
            break;
        case 4:
            printf("Athlon\n");
            break;
        case 5:
            printf("Core\n");
            break;
        case 6:
            printf("Pentium\n");
            break;
        default:
            printf("que");
            break;
        }
}
void listarpc(pc *punt) {
    for (int a = 0; a < compu; a++)
    {
        printf("\n-------------------------------PC[%d]-------------------------------\n",a+1);
        
        listarestruc(punt);
        punt++;

    }
}
void pcmasvieja(pc *punt) {
    int anio =2018;
    pc *puntaux;
    for (int i = 0; i < compu; i++)
    {
        if (anio > punt->anio)
        {
            anio = punt->anio;
            puntaux = punt;
        }
        punt++;
    }
    listarestruc(puntaux);
}
void masveloz(pc *punt) {
    int velocidadproc=0;
    pc *puntaux;
    for (int i = 0; i < compu; i++)
    {
        if (velocidadproc < punt->velocidadproc)
        {
            velocidadproc = punt->velocidadproc;
            puntaux = punt;
        }
        punt++;
    }
    listarestruc(puntaux);
}