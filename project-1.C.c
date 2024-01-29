#include <stdio.h>
#include <stdlib.h>


struct NO {
    int codigo;
    float salario;
    int ano_nascimento;
    struct NO *proximo; 
};


int main(int argc, char *argv[]) {

    
    struct NO *estagiario = (struct NO *)malloc(sizeof(struct NO));

    printf("Informe o codigo : ");
    scanf("%d", &estagiario->codigo);

    printf("Informe o salario : ");
    scanf("%f", &estagiario->salario);

    printf("Informe o ano de nascimento : ");
    scanf("%d", &estagiario->ano_nascimento);

  
    struct NO *estagiario2 = (struct NO *)malloc(sizeof(struct NO));


    printf("\n Informe o codigo do outro estagiário: ");
    scanf("%d", &estagiario2->codigo);

    printf("Informe o salario do outro estagiário: ");
    scanf("%f", &estagiario2->salario);

    printf("Informe o ano de nascimento do outro estagiário: ");
    scanf("%d", &estagiario2->ano_nascimento);

 
    estagiario->proximo = estagiario2;


    printf("\nEstagiario:\n");
    printf("Codigo: %d\n", estagiario->codigo);
    printf("Salario: %.2f\n", estagiario->salario);
    printf("Ano de Nascimento: %d\n", estagiario->ano_nascimento);


    printf("\nOutro Estagiario:\n");
    printf("Codigo: %d\n", estagiario->proximo->codigo);
    printf("Salario: %.2f\n", estagiario->proximo->salario);
    printf("Ano de Nascimento: %d\n", estagiario->proximo->ano_nascimento);

    free(estagiario);

    return 0;
}
