////////////////////////////////////////////////////////////////////////////////////|
////                                                                             ///|
////                 Código feito por: Alejandro Macha paiva                     ///|
////                                                                             ///|
////////////////////////////////////////////////////////////////////////////////////|

#include <stdio.h>
#include "ordenacoes.h"

int main() {

    int tam;
    int op;
    int* vet;
    int i;

    do{
        printf("\n\nDigite a escolha desejada no seguinte menu: ");
        printf("\n1 - Preencher um vetor;"
               "\n2 - Aplicar Bubble Sort em um vetor;"
               "\n3 - Aplicar Insertion Sort em um vetor;"
               "\n4 - Aplicar Selection Sort em um vetor;"
               "\n5 - Aplicar Merge Sort em um vetor;"
               "\n6 - Aplicar Quick Sort em um vetor;"
               "\n7 - Sair.\n \n Escolha: ");

        scanf("%d",&op);

        if(op == 1){
            printf("\nDigite o tamanho do vetor desejado: ");
            scanf("%d",&tam);
            vet = CriaVetor(tam);
            for(i=0;i<tam;i++){
                printf("\nDigite o %d elemento do vetor: ",i+1);
                scanf("%d",&vet[i]);
            }
        }
        if(op == 2){
            BubbleSort(vet, tam);
            PrintaVetor(vet, tam);
        }
        if(op == 3){
            InsertionSort(vet, tam);
            PrintaVetor(vet, tam);
        }
        if(op == 4){
            SelectionSort(vet, tam);
            PrintaVetor(vet, tam);
        }
        if(op == 5){
            MergeSort(vet, 0, tam);
            PrintaVetor(vet, tam);
        }
        if(op == 6){
            QuickSort(vet,0,tam);
            PrintaVetor(vet, tam);
        }

    }while(op < 7 && op >0);

    return 0;


}