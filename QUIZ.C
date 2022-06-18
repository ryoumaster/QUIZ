#include <stdio.h>

int main()
{
    int x = -1, contc = 0, conte = 0;
    printf("(1) Quem foi o criador do primeiro modelo de atomo?\n");
    printf ("1 - Rutherford\n");
    printf ("2 - Thomson\n");
    printf ("3 - Dalton\n");
    printf ("4 - Bohr\n");
    while (x > 4 || x < 1){
        printf ("Digite o numero da alternativa: ");
        scanf("%d", &x);
    }
    if (x == 3){
        printf ("Alternativa correta!\n");
        contc = contc+1;
    }
    else {
    printf ("Alternativa incorreta!\n");
    conte = conte+1;
    }
    printf ("\n");
    x = -1;
    printf("(2) Qual o Primeiro nome do Heroi de quadrinhos conhecido como Batman?\n");
    printf ("1 - Bruce\n");
    printf ("2 - Wellington\n");
    printf ("3 - Patrick\n");
    printf ("4 - Tony\n");
    while (x > 4 || x < 1){
        printf ("Digite o numero da alternativa: ");
        scanf("%d", &x);
    }
    if (x == 1){
        printf ("Alternativa correta!\n");
        contc = contc + 1;
    }
    else {
    printf ("Alternativa incorreta!\n");
    conte = conte + 1;
    }
    printf ("\n");
    x = -1;
    printf("(3) Quais cores são invisiveis ao olhar humano?\n");
    printf ("1 - Ultra vermelho e Ultra azul\n");
    printf ("2 - Infra preto e Sub-branco\n");
    printf ("3 - Infra vermelho e Ultra violeta\n");
    printf ("4 - Ciano e Laboyeme\n");
    while (x > 4 || x < 1){
        printf ("Digite o numero da alternativa: ");
        scanf("%d", &x);
    }
    if (x == 3){
        printf ("Alternativa correta!\n");
        contc = contc + 1;
    }
    else {
    printf ("Alternativa incorreta!\n");
    conte = conte + 1;
    }
    printf ("\n");
    x = -1;
    printf("(4) Qual Rei da frança foi decaptado durante a Revolucao francesa?\n");
    printf ("1 - Luiz XV\n");
    printf ("2 - Napoleao Bonaparte\n");
    printf ("3 - Luiz XVI\n");
    printf ("4 - Carlos V\n");
    while (x > 4 || x < 1){
        printf ("Digite o numero da alternativa: ");
        scanf("%d", &x);
    }
    if (x == 3){
        printf ("Alternativa correta!\n");
        contc = contc + 1;
    }
    else {
    printf ("Alternativa incorreta!\n");
    conte = conte + 1;
    }
    printf ("\n");
    x = -1;
    printf("(5) Qual o Simbolo quimico do Cobre?\n");
    printf ("1 - BR\n");
    printf ("2 - CU\n");
    printf ("3 - F\n");
    printf ("4 - C\n");
    while (x > 4 || x < 1){
        printf ("Digite o numero da alternativa: ");
        scanf("%d", &x);
    }
    if (x == 2){
        printf ("Alternativa correta!\n");
        contc = contc + 1;
    }
    else {
    printf ("Alternativa incorreta!\n");
    conte = conte + 1;
    }
    printf ("\n");
    x = -1;
    printf("%d Alternativas corretas\n", contc);
    printf("%d Alternativas Incorretas\n", conte);
    return 0;
}
