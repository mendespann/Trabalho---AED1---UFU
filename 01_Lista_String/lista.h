#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct strLista Lista;

Lista* cria_lista();
char* getPos(Lista* lst, int idx);
int lista_vazia(Lista* lst);
int lista_cheia(Lista* lst);
int inserir_elem(Lista* lst, char str[]);
int insere_ord(Lista* lst, char string[]);
int remove_elem(Lista* lst, char str[]);
int tamanho(Lista* lst);
int esvazia_lista(Lista* *lst);
int remove_todas(Lista* lst, char elem[]);

#endif // LISTA_H_INCLUDED
