#include<stdio.h>
#include<stdlib.h>

typedef struct arvVar{
    char info;
    struct arvVar *pFilho;
    struct arvVar *prox;
}ArvVar;

ArvVar* criaArvVar(char c){
    ArvVar *a = (ArvVar*) malloc(sizeof(ArvVar));
}

void insereArvVar(ArvVar* a, ArvVar* fA){
    fA->prox = a->pFilho;
    a->pFilho = fA;
}

void imprimeArvVar(ArvVar* a){
    ArvVar* p;
    printf("%c ", a->info);
    for(p = a->pFilho; p != NULL; p = p->prox){
        imprimeArvVar(p);
    }
}

int pertenceArvVar(ArvVar* a, char c){
    ArvVar* p;
    if(a->info == c){
        return 1;
    } else {
        for(p = a->pFilho; p != NULL; p = p->prox){
            if(pertenceArvVar(p, c)){
                return 1;
            }
        }
    }
    return 0;
}

void liberaArvVar(ArvVar* a){
    ArvVar* aux = a->pFilho;
    ArvVar* pr;

    while(aux != NULL){
        pr = aux->prox;
        liberaArvVar(aux);
        aux = pr;
    }
    free(a);
}