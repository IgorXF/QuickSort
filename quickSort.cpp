#include <iostream>
using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

// Função para particionar o array
int partition(int arr[], int left, int right){
    int pivot = arr[right]; // Escolhe o pivô
    int i = (left - 1); // Índice do menor elemento

    for (int j = left; j <= right - 1; j++){
        // Se o elemento atual for menor ou igual ao pivô
        if (arr[j] <= pivot){
            i++; // Incrementa o índice do menor elemento
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[right]);
    return (i + 1);
}

// Função principal que implementa o QuickSort
void quickSort(int arr[], int left, int right){
    if (left < right) {
        // pi é o índice de particionamento, arr[pi] está no lugar certo
        int pi = partition(arr, left, right);

        // Separa recursivamente os elementos antes e depois da partição
        quickSort(arr, left, pi - 1);
        quickSort(arr, pi + 1, right);
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = 6;
    quickSort(arr, 0, n - 1);
    cout << "Array ordenado: ";
    printArray(arr, n);
    return 0;
}
