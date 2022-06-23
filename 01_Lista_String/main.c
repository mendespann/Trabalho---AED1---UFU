#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lista.h"

int main()
{
	int opc;
	Lista* L = NULL;

	while(1){
		printf("\n\t\t[0] Criar uma lista\n");
		printf("\t\t[1] Inserir STRING\n");
		printf("\t\t[2] Remover STRING\n");
		printf("\t\t[3] Mostrar a lista\n");
		printf("\t\t[4] Consultar uma posicao\n");
		printf("\t\t[5] Esvaziar lista\n");
		printf("\t\t[6] REMOVE TODOS");
		printf("\t\t[Outro] Sair do programa\n");
		printf("\n\t\tDigite uma opcao: ");
		scanf("%d", &opc);
		char elem[12],teste[16];
		int idx, s;

		switch(opc){
			case 0:
				L = cria_lista(); // cria lista vazia (sem nodes)
				printf("\nLista criada\n");

				break;

			case 1:
				printf("\nDigite o elemento a ser inserido: ");
				scanf(" %[^\n]", elem);
				if(insere_ord(L, elem))
					printf("Elemento inserido com sucesso!\n");
				else
					printf("Erro ao inserir elemento na lista!\n");

				break;

			case 2:
				printf("\nDigite o elemento a ser removido: ");
				scanf(" %[^\n]", elem);
				if(remove_elem(L, elem))
					printf("Elemento removido com sucesso!\n");
				else
					printf("Erro ao remover elemento da lista!\n");

				break;

			case 3:
				if(lista_vazia(L))
					printf("\nLista vazia\n");
				else{
					int i = 0, s = tamanho(L);
					while(i < s){
						printf("%s\n", getPos(L, i));
						i ++;
					}
				}

				break;

			case 4:
				printf("Digite a posicao de consulta: ");
				scanf("%d", &idx);
				s = tamanho(L);
				if(idx < s){
					strcpy(elem, getPos(L, idx));
					printf("%s\n", elem);
				}else
					printf("Erro ao consultar\n");

				break;

			case 5:
				if(esvazia_lista(&L))
					printf("Lista Limpa com sucesso!\n");
				else
					printf("\nErro ao Limpar lista!\n");
				break;
            case 6:
                printf("\nDIGITE A STRING A SER REMOVIDA: ");
                scanf("%s", &teste);
                if ( remove_todas(L,teste) == 1){
                    printf("A string %s foi removida com sucesso.", teste);
                }
                else{
                    printf("TA ERRADO");
                    return -1;
                }


                break;

			default:
				return 0;
		}

	}

	return 0;
}
