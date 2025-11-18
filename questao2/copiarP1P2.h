// Assumindo a struct/classe PilhaLista com 'topo' sendo um nó
void copiaPilhaLista(PilhaLista *P1, PilhaLista *P2) {
    PilhaLista Aux = criaPilhaLista(); // Pilha auxiliar
    
    // 1. Esvazia P2 (se não estiver vazia)
    while (!pilhaVaziaLista(P2)) {
        desempilhaLista(P2);
    }

    // 2. Transfere P1 para Aux (Inverte a ordem)
    while (!pilhaVaziaLista(P1)) {
        empilhaLista(&Aux, desempilhaLista(P1));
    }
    
    // 3. Transfere Aux para P1 e P2 (Restaura e Copia)
    while (!pilhaVaziaLista(&Aux)) {
        int valor = desempilhaLista(&Aux);
        empilhaLista(P1, valor);
        empilhaLista(P2, valor); // P2 agora é uma cópia de P1
    }
}