#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> array = { 13, 46, 24, 3, 20, 9};
    
    int length = array.size();
    for(int i = 0; i < length - 1; i++){
        // int min = array[i];
        for(int j = i; j < length; j++){
                if(array[i] > array[j]){
                        int temp = array[i];
                        array[i] = array[j];
                        array[j] = temp;
                }
        }
    }
    
    cout << "Sorted array : " << endl;
    for(int i = 0; i < array.size(); i++){
        cout << array[i] << "\t";
    }
    return 0;
}