// Assumindo a struct/classe PilhaVetor com 'dados[]' e 'topo'

int pilhasSaoIguaisVetor(PilhaVetor *P1, PilhaVetor *P2) {
    if (P1->topo != P2->topo) {
        return 0; // Tamanhos diferentes
    }
    
    PilhaVetor Aux1 = criaPilhaVetor(P1->capacidade);
    PilhaVetor Aux2 = criaPilhaVetor(P2->capacidade);
    int iguais = 1; // Assume que são iguais
    
    // Desempilha e compara
    while (!pilhaVaziaVetor(P1)) {
        int val1 = desempilhaVetor(P1);
        int val2 = desempilhaVetor(P2);
        
        if (val1 != val2) {
            iguais = 0;
        }
        
        empilhaVetor(&Aux1, val1); // Salva para restaurar P1
        empilhaVetor(&Aux2, val2); // Salva para restaurar P2
    }
    
    // Restaura P1 e P2 (os elementos são empilhados na ordem inversa)
    while (!pilhaVaziaVetor(&Aux1)) {
        empilhaVetor(P1, desempilhaVetor(&Aux1));
        empilhaVetor(P2, desempilhaVetor(&Aux2));
    }
    
    // Libera as pilhas auxiliares (se necessário)
    liberaPilhaVetor(&Aux1);
    liberaPilhaVetor(&Aux2);
    
    return iguais;
}