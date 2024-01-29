#include <stdio.h>
#include <stdlib.h>

struct funcionario {
    int cod;
    char nome[30];
    double salario;
};

int main(void) {
    struct funcionario *p;
    int qtd_func, i; 
    char op;

    printf("Informe a quantidade inicial de funcion�rios a serem cadastrados: ");
    scanf("%d", &qtd_func);

    p = (struct funcionario *)malloc(qtd_func * sizeof(struct funcionario));

    for (i = 0; i < qtd_func; i++) {
        printf("\nInforme o c�digo do funcion�rio: ");
        scanf("%d", &p[i].cod);

        printf("Informe o nome do funcion�rio: ");
        scanf("%s", p[i].nome);

        printf("Informe o sal�rio do funcion�rio: ");
        scanf("%lf", &p[i].salario);
    }

    do {
        fflush(stdin); // Limpa o buffer do teclado
        printf("\nDeseja incluir mais funcion�rios? (S para sim, N para n�o): ");
        scanf(" %c", &op);

        if (op == 'S') {
            int qtd_nova;
            printf("Quantos funcion�rios deseja incluir? ");
            scanf("%d", &qtd_nova);

            p = (struct funcionario *)realloc(p, (qtd_func + qtd_nova) * sizeof(struct funcionario));

            for (i = qtd_func; i < (qtd_func + qtd_nova); i++) {
                printf("\nInforme o codigo do funcionario: ");
                scanf("%d", &p[i].cod);

                printf("Informe o nome do funcionario: ");
                scanf("%s", p[i].nome);

                printf("Informe o salario do funcionario: ");
                scanf("%lf", &p[i].salario);
            }

            qtd_func += qtd_nova;
        }
    } while (op == 'S');

    printf("\n*****************\n");
    printf(" FUNCION�RIOS CADASTRADOS \n");
    printf("*****************\n");

    for (i = 0; i < qtd_func; i++) {
        printf("C�digo: %d\n", p[i].cod);
        printf("Nome: %s\n", p[i].nome);
        printf("Sal�rio: %.2lf\n", p[i].salario);
        printf("----------------------------\n");
    }

    free(p);

    return 0;

}

