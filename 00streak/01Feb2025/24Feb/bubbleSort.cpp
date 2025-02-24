#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = { 4, 1, 3, 9, 7};
    int arrayLength = arr.size();
    int isSwaped = 0;
    for(int i = 0; i < arrayLength - 1; i++){
        for(int j = 0; j < arrayLength - i - 1; j++){
                if(arr[j] > arr[j + 1]){
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1]  = temp;
                        isSwaped = 1;
                }
        }
        if(isSwaped == 0) break;
    }
    
    cout << "Sorted array : " << endl;
    for(int i = 0; i < arrayLength; i++){
        cout << arr[i] << "\t";
    }
    return 0;
}