#include <iostream>
#include <cmath>

int smallest(int arr[], int SIZE){
    int min = arr[0];
    for (int i = 1; i < SIZE; i++){
        if (min > arr[i]) min = arr[i];
    }
    return min;
}

int largest(int arr[], int SIZE){
    int max = arr[0];
    for (int i = 1; i < SIZE; i++){
        if (max < arr[i]) max = arr[i];
    }
    return max;
}

double avg(int arr[], int SIZE){
    double average = 0;
    for (int i = 0; i < SIZE; i++){
        average += arr[i];
    }
    return (average/SIZE);
}

double var(int arr[], int SIZE){
    double result = 0;
    for (int i = 0; i < SIZE; i++){
        result += pow((arr[i] - avg(arr, SIZE)),2);
    }
    return (result/SIZE);
}

double stndDev(int arr[], int SIZE){
    return sqrt(var(arr, SIZE));
}

void inputData(int arr[], int& size){
    size = 0;
    std::cout << "Input integers to calculate basic statistics for: \n";
    for (int i = 0; i < 10; i++){
        std::cin >> arr[i];
        size++;
        if(arr[i]==0) break;
    }   
}

void printCalculations(int arr[], int size){
    std::cout<< "Calculations:\n";
    std::cout<< "Largest: " << largest(arr,size) << "\n";
    std::cout<< "Smallest: " << smallest(arr, size) << "\n";
    std::cout<< "Average: " << avg(arr, size) << "\n";
    std::cout<< "Standard Deviation: " << stndDev(arr, size) << "\n";
    std::cout<< "Variance: " << var(arr, size) << "\n";
}

int main(){
    int array[10], size;
    inputData(array, size);
    printCalculations(array, size);
}