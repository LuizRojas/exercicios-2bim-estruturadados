#include<stdio.h>

// Estrutura de Nó para Árvore N-ária (usando vetor de filhos)
#define MAX_FILHOS 10
#define MAX_NOS 100

typedef struct no_n_ario {
    int info;
    int numFilhos;
    int filhos[MAX_FILHOS]; // Armazena os índices dos filhos no vetor principal
} NoNario;

typedef struct arvore_n_aria {
    NoNario nos[MAX_NOS];
    int numNos;
    int raiz; // Índice do nó raiz
} ArvoreNaria;

// --- Operações ---

// 1. criaArvore()
ArvoreNaria criaArvore() {
    ArvoreNaria A;
    A.numNos = 0;
    A.raiz = -1; // -1 indica que está vazia
    return A;
}

// 2. insereArvore(Pai, Valor)
// Insere 'Valor' como filho do nó de índice 'indicePai'
int insereArvore(ArvoreNaria *A, int indicePai, int valor) {
    if (A->numNos >= MAX_NOS || indicePai < -1 || indicePai >= A->numNos) {
        return 0; // Erro: capacidade esgotada ou índice inválido
    }
    
    int novoIndice = A->numNos;
    
    // Inicializa o novo nó
    A->nos[novoIndice].info = valor;
    A->nos[novoIndice].numFilhos = 0;
    
    if (indicePai == -1) {
        // Insere como Raiz
        if (A->raiz != -1) return 0; // Já existe raiz
        A->raiz = novoIndice;
    } else {
        // Insere como filho do Pai
        NoNario *pai = &A->nos[indicePai];
        if (pai->numFilhos >= MAX_FILHOS) return 0; // Limite de filhos atingido
        
        pai->filhos[pai->numFilhos] = novoIndice; // Adiciona o índice do novo nó
        pai->numFilhos++;
    }
    
    A->numNos++;
    return 1;
}

// 3. imprimeArvore() - Exemplo: Pré-ordem com indentação
void imprimeRec(ArvoreNaria *A, int indice, int nivel) {
    if (indice == -1) return;
    
    // Imprime a indentação
    for (int i = 0; i < nivel; i++) printf("  |--");
    printf("%d\n", A->nos[indice].info);
    
    // Chamada recursiva para todos os filhos
    NoNario *noAtual = &A->nos[indice];
    for (int i = 0; i < noAtual->numFilhos; i++) {
        imprimeRec(A, noAtual->filhos[i], nivel + 1);
    }
}

void imprimeArvore(ArvoreNaria *A) {
    imprimeRec(A, A->raiz, 0);
}

// 4. liberaArvore() - Como usamos alocação estática (vetor fixo), 
// 'liberar' a estrutura significa redefini-la
void liberaArvore(ArvoreNaria *A) {
    A->numNos = 0;
    A->raiz = -1;
    // Em C, se a alocação fosse dinâmica (com malloc), teríamos que liberar nó por nó.
}