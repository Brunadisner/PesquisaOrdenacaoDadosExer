//FINALIZADO
void intercala (int *vet, int inicio, int meio, int fim) {
    int tam = fim - inicio + 1;
    int i = inicio;
    int j = meio + 1;
    int *aux;
    aux = (int *) malloc(tam*sizeof(int));
    int k = 0;

    while(i<=meio && j<=fim){  
        if(vet[i] < vet[j]){
            aux[k] = vet[i];
            i++;
        }
        else{
            aux[k] = vet[j];
            j++;
        }
        k++;
    }
    while(i<=meio){
        aux[k] = vet[i];
        k++;
        i++;

    }
    while(j<=fim){
        aux[k] = vet[j];
        k++;
        j++;

    }
       
    for (k = inicio; k<=fim; k++) {
        vet[k] = aux[k-inicio];

    }  
    free(aux);
}

void mergesort (int *vet, int inicio, int fim) {
    if (inicio < fim) {
        int meio =floor(((inicio + fim)/2));
        mergesort(vet, inicio, meio);
        mergesort(vet, meio+1, fim);
        intercala(vet, inicio, meio, fim);
    }
}