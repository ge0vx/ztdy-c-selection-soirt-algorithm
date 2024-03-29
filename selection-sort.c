# include <stdio.h>

// fucntion to swap elements
void swap(int arr[], int firstIndex, int secondIndex) {
	
	int temp;
	temp = arr[firstIndex];
	arr[firstIndex] = arr[secondIndex];
	arr[secondIndex] = temp;
}

// fucntion to look for the smallest element in the given subarray
int indexOfMinimum(int arr[], int startIndex, int n) {

	int minIndex = startIndex;
	int minValue = arr[startIndex];

	for(int i = minIndex + 1; i < n; i++){
		if(arr[i] < minValue){
			minIndex = i;
			minValue = arr[i];
		}
	}

	return minIndex;
}

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n; i++) 
    {
        int index = indexOfMinimum(arr, i, n);
        swap(arr, i, index);
    }
    
}

void printArray(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int arr[] = {46, 52, 21, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
