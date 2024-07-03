public class QuickSort{

    private static void swap(int[] array, int i, int j){
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    public static void quickSort(int[] array, int left, int right){
        if (left < right){
            int pivot = array[right];
            int i = left - 1;

            for (int j = left; j < right; j++){
                if (array[j] <= pivot){
                    i++;
                    swap(array, i, j);
                }
            }
            swap(array, i + 1, right);

            int partitionIndex = i + 1;

            // Recursividade
            quickSort(array, left, partitionIndex - 1);
            quickSort(array, partitionIndex + 1, right);
        }
    }

    public static void printArray(int[] array){
        for (int num : array){
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public static void main(String[] args){
        int[] array = {10, 7, 8, 9, 1, 5};
        int n = array.length;

        System.out.println("Array original:");
        printArray(array);

        quickSort(array, 0, n - 1);

        System.out.println("Array ordenado:");
        printArray(array);
    }
}
