#include <stdio.h>
#include <stdlib.h>



struct NO {
    int codigo;
    float salario;
    int ano_nascimento;
    struct NO* proximo;
};

int main(int argc, char *argv[]) {

    struct NO* estagiario = (struct NO*)malloc(sizeof(struct NO));

  
    printf("Informe o codigo, salario e ano de nascimento do estagiario:\n");
    scanf("%d %f %d", &(estagiario->codigo), &(estagiario->salario), &(estagiario->ano_nascimento));

 
    struct NO* estagiario2 = (struct NO*)malloc(sizeof(struct NO));

   
    printf("Informe o codigo, salario e ano de nascimento do segundo estagiario:\n");
    scanf("%d %f %d", &(estagiario2->codigo), &(estagiario2->salario), &(estagiario2->ano_nascimento));

   
    estagiario->proximo = estagiario2;

 
    struct NO* estagiario3 = (struct NO*)malloc(sizeof(struct NO));

   
    printf("Informe o codigo, salario e ano de nascimento do terceiro estagiario:\n");
    scanf("%d %f %d", &(estagiario3->codigo), &(estagiario3->salario), &(estagiario3->ano_nascimento));

    estagiario2->proximo = estagiario3;

  
    free(estagiario);
    free(estagiario2);
    free(estagiario3);

    return 0;
}

  
  
  
 
