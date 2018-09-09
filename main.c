#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Programa com o objetivo primário de:
1. Receber um SPF genêrico
2. Aprensetar os números posivitivos representáveis em tal sistema
3. O maior número representável possível
4. O menor número representável possível
*/

void clrscr()
{
    system("@cls||clear");
}

void possibleNum (int x, int y, int w, int z) {
    int a, b, aux1, aux2;
    a = (x*y);
    if (w < 0) {aux1 = (w*(-1));} else {(aux1 = w);}
    if (z < 0) {aux2 = (z*(-1));} else {(aux2 = z);}
    b = (aux1 + aux2 + 1);
    printf("\n-------------------------------------------------------------------\n");
    printf(" O numero de representacoes possiveis em tal sistema e de %d\n", (a*b));
    printf("-------------------------------------------------------------------\n");
    return 0;
}

void maxNum (int x, int y, int z) {
    int i = 0;
    printf(" O maior numero representavel em tal sistema e igual a (0.");
    while (i < y) {
        printf("%d", (x-1));
        i++;
    }
    printf(")%d^%d\n", x, z);
    printf("-------------------------------------------------------------------\n");
}

void minNum (int x, int y, int w) {
    int i = 0;
    printf(" O menor numero representavel em tal sistema e igual a (0.1");
    while (i < (y-1)) {
        printf("0");
        i++;
    }
    printf(")%d^%d\n", x, w);
    printf("-------------------------------------------------------------------\n");
}

int main()
{
    int rept = 1;
    int B, t, expMin, expMax;

    while (rept == 1) {
        clrscr();
        printf("Insira um SPF do modelo a seguir:\n");
        printf("-----------------------------------------------------------------------------\n");
        printf("( BASE (B), MATISSA (t), EXPOENTE MINIMO (EXPmin), EXPOENTE MAXIMO (EXPmax) )\n");
        printf("-----------------------------------------------------------------------------\n\n");
        printf("Insira as informacoes na ordem: \n");
        printf("\nBASE (B): ");
        scanf("%d", &B);
        printf("\nMANTISSA (t): ");
        scanf("%d", &t);
        printf("\nEXPOENTE MINIMO (EXPmin): ");
        scanf("%d", &expMin);
        printf("\nEXPOENTE MAXIMO (EXPmax): ");
        scanf("%d", &expMax);
        printf("\nSPF inserido: ");
        printf("SPF (%d, %d, %d, %d)\n", B, t, expMin, expMax);

        possibleNum(B, t, expMin, expMax);
        maxNum(B, t, expMax);
        minNum(B, t, expMin);

        printf("\n\n\nDeseja repetir o procedimento?");
        printf("\n(1 - Sim | 0 - Nao): ");
        scanf("%d", &rept);
    }

    return 0;
}
