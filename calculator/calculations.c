#include <stdio.h>
#include <stdlib.h>

void getInputArr(int *arrSize, int **arr);
void println(char *printString, float printNum);
int findMax(int arr[], int arrSize);
float calcAverage(int *arr, int arrSize);

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int totalArrBytes = sizeof(arr);
    int firstArrBytes = sizeof(arr[0]);
    int arrSize = totalArrBytes / firstArrBytes;

    // Print Lengths for Understanding
    println("Total Array Bytes: ", totalArrBytes);
    println("First Element Bytes: ", firstArrBytes);
    println("Total Length of Array: ", arrSize);

    println("Max Element in Array: ", findMax(arr, arrSize));
    println("Average of Elements in Array: ", calcAverage(arr, arrSize)); 

    int *myArr;
    int myArrSize;
    getInputArr(&myArrSize, &myArr);

    for (int i = 0; i < myArrSize; i++) {
        printf("Element No.%i: %i\n", i, myArr[i]);
    }

    println("Average of Elements in Dynamic MyArray: ", calcAverage(myArr, myArrSize));

    free(myArr);
    return 0;
}

void getInputArr(int *arrSize, int **myArr) {
    printf("Please Enter Length of Array: \n");
    scanf("%i", arrSize);

    *myArr = malloc(*arrSize * sizeof(int));

    printf("Enter %i Numbers!\n", *arrSize);
    for (int i = 0; i < *arrSize; i++) {
        scanf("%i", &((*myArr)[i]));
    }
}

void println(char *printString, float printNum) {
    printf("%s%.2f\n", printString, printNum);
}

int findMax(int arr[], int arrSize) {
    int max = arr[0];
    for (int i = 1; i < arrSize; i++) { 
        if (arr[i] >= max) {
            max = arr[i];
        }
    }
    return max;
}

float calcAverage(int *arr, int arrSize) {
    int sum = 0;
    for (int i = 0; i < arrSize; i++) {
        sum += arr[i];
    }
    return (float) sum / arrSize;
}
