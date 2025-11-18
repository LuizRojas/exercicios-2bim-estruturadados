// Assumindo a struct/classe FilaLista com 'inicio' e 'fim' sendo nós
int filasSaoIguaisLista(FilaLista *F1, FilaLista *F2) {
    if (filaVaziaLista(F1) != filaVaziaLista(F2)) {
        return 0; // Uma vazia e a outra não
    }

    FilaLista Aux1 = criaFilaLista();
    FilaLista Aux2 = criaFilaLista();
    int iguais = 1;
    
    // Desenfileira e compara
    while (!filaVaziaLista(F1) && !filaVaziaLista(F2)) {
        int val1 = desenfileiraLista(F1);
        int val2 = desenfileiraLista(F2);
        
        if (val1 != val2) {
            iguais = 0;
        }
        
        enfileiraLista(&Aux1, val1); // Salva para restaurar F1
        enfileiraLista(&Aux2, val2); // Salva para restaurar F2
    }
    
    // Verifica se os tamanhos são diferentes (se uma ficou vazia e a outra não)
    if (!filaVaziaLista(F1) || !filaVaziaLista(F2)) {
        iguais = 0;
    }
    
    // Restaura F1 e F2 (os elementos são enfileirados na mesma ordem)
    while (!filaVaziaLista(&Aux1)) {
        enfileiraLista(F1, desenfileiraLista(&Aux1));
        enfileiraLista(F2, desenfileiraLista(&Aux2));
    }
    
    return iguais;
}