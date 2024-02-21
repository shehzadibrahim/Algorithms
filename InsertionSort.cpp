#include <iostream> 
using namespace std; 

// Function prototype
void insertion_sort(int array[], int n);

// Driver code 
int main() 
{ 
    int array[100], sortedArray[100], n;
    cout << "Enter the number of elements in the array (max 100): ";
    cin >> n;
    
    cout << "Enter the elements of the array to be sorted: ";
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    
    // Call the insertion_sort function
    insertion_sort(array, n);
    
    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    
    return 0; 
} 

// Function definition for insertion sort
void insertion_sort(int array[], int n)
{
    int temp, j;

    for (int i = 1; i < n; i++) {
        temp = array[i];
        for (j = i - 1; j >= 0 && temp < array[j]; j--) {
            array[j + 1] = array[j];
        }
        array[j + 1] = temp;
    }
}
