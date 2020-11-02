int particiona (int *vet, int inicio, int fim) {
    int pivo = vet[inicio];
    int aux, esq, dir;
    esq = inicio + 1;
    dir = fim;
    while(esq<dir){
        while(vet[esq]<=pivo){
            esq++;
        }
        while (vet[dir] > pivo){
            dir--;
        }
        if(esq < dir){
            aux = vet[esq];
            vet[esq] = vet[dir];
            vet[dir] = aux;
        }
        
        
    }
    vet[inicio] = vet[dir];
    vet[dir] = pivo;
    return dir;
}

void quicksort (int *vet, int inicio, int fim) {
    int pivo;
    printf("Inicio %d \n fim %d \n",inicio,fim);
    if (inicio < fim) {
        pivo = particiona (vet, inicio, fim);
        printf("pivo %d\n ",pivo);
        quicksort(vet, inicio, pivo-1);
        quicksort(vet, pivo+1, fim);

    }
}
