// Assumindo a struct/classe NoArvore com 'info', 'esq' e 'dir'
int contaFolhas(NoArvore *raiz) {
    if (raiz == NULL) {
        return 0;
    }
    // Caso base: é uma folha
    if (raiz->esq == NULL && raiz->dir == NULL) {
        return 1;
    }
    // Caso recursivo: soma as folhas da subárvore esquerda e direita
    return contaFolhas(raiz->esq) + contaFolhas(raiz->dir);
}