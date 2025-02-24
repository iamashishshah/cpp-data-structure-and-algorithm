#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {6, 5, 4, 3, 2, 1};
    int arrayLength = arr.size();
    for(int i = 0; i < arrayLength; i++){
        for(int j = i; j > 0; j--){
                bool flag = true;
                if(arr[j] < arr[j - 1]){
                        int temp = arr[j];
                        arr[j] = arr[j - 1];
                        arr[j - 1] = temp;
                        flag = false;
                }
                cout << "Inner loop" << endl;
                if(flag == true) break;
        }
    }
    
    cout << "Sorted array : " << endl;
    for(int i = 0; i < arrayLength; i++){
        cout << arr[i] << "\t";
    }
    return 0;
}