#ifndef ORDENACOES_H
#define ORDENACOES_H

int* CriaVetor(int tamanho);

void PrintaVetor(int* vetor, int tamanho);

int BubbleSort (int *vet, int tam);

void SelectionSort(int *vet, int tam);

void InsertionSort(int *vet, int tam);

void Merge(int *vet, int inicio, int meio, int fim);

void MergeSort(int *vet, int inicio, int fim);

int Particiona(int *vet, int inicio, int fim);

void QuickSort(int *vet, int inicio, int fim);

#endif