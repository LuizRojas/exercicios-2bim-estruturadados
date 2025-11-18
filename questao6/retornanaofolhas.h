// Assumindo a struct/classe NoArvore com 'info', 'esq' e 'dir'
int contaNaoFolhas(NoArvore *raiz) {
    if (raiz == NULL) {
        return 0;
    }
    // Se for folha, não é não-folha, então 0 + recursão
    if (raiz->esq == NULL && raiz->dir == NULL) {
        return 0;
    }
    // Se não for folha, conta 1 para si mesmo + recursão
    return 1 + contaNaoFolhas(raiz->esq) + contaNaoFolhas(raiz->dir);
    
    // Alternativa: (total de nós - total de folhas)
    // return contaTotalNos(raiz) - contaFolhas(raiz); 
}