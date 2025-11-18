// Assumindo a struct/classe FilaVetor com 'dados[]', 'inicio' e 'fim'
void intercalaFilasOrdenadas(FilaVetor *F1, FilaVetor *F2, FilaVetor *F3) {
    // 1. Esvazia F3 (se necessário)
    while (!filaVaziaVetor(F3)) {
        desenfileiraVetor(F3);
    }
    
    // 2. Intercala F1 e F2 enquanto ambas não estiverem vazias
    while (!filaVaziaVetor(F1) && !filaVaziaVetor(F2)) {
        int v1 = F1->dados[F1->inicio]; // Espia F1
        int v2 = F2->dados[F2->inicio]; // Espia F2
        
        if (v1 <= v2) {
            desenfileiraVetor(F1);
            enfileiraVetor(F3, v1);
        } else {
            desenfileiraVetor(F2);
            enfileiraVetor(F3, v2);
        }
    }
    
    // 3. Transfere os elementos restantes de F1 para F3
    while (!filaVaziaVetor(F1)) {
        enfileiraVetor(F3, desenfileiraVetor(F1));
    }
    
    // 4. Transfere os elementos restantes de F2 para F3
    while (!filaVaziaVetor(F2)) {
        enfileiraVetor(F3, desenfileiraVetor(F2));
    }
}