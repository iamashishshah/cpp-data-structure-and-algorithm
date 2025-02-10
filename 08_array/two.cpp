#include<iostream>
using namespace std;

void takeInput(int* array, int length){
    // cout << "What array is cointaining here: " << array << endl;
    cout << "You're in takeInput function FYI.\n";
    for (int i = 0; i < length; i++){
        cin >> *(array + i);
    }
    
}

// In fact, both array[i] and *(array + i) are valid ways to access the same memory location.The[] is just a convenient way to express that you are accessing the array.

void printArray(int array[], int length){
    // `array[]` is just syntactic sugar for `int* array`
    cout << "What array is cointaining here: " << array << endl;
    cout << "You're in printArray function FYI.\n";
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << "\t";
    }
}
int main(){
    int numberOfElement;
    cout << "Enter the number of element: ";
    cin >> numberOfElement;

    int* array = new int[numberOfElement];
    // cout << "What array is cointaining here: " << array << endl;
    takeInput(array, numberOfElement);
    printArray(array, numberOfElement);
    delete[] array;
    return 0;
}