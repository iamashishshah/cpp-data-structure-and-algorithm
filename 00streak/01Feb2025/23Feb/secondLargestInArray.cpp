#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {3, 2, 5, 0, -1, 334, 1000, -3, 2};
    
    // int larg = arr[0];
        // for(int i = 1; i < arr.size(); i++){
        //     if(larg < arr[i]) larg = arr[i];
        // }
        
        // int secLarg = -1;
        // for(int i = 0; i < arr.size(); i++){
        //     if(arr[i] < larg && secLarg < arr[i]) secLarg = arr[i];
        // }
        
        int larg = arr[0];
        int secLarg = -1;
        for(int i = 1; i < arr.size(); i++){
            if(larg < arr[i]){
                secLarg = larg;
                larg = arr[i];
            }else if(arr[i] < larg && arr[i] > secLarg){
                secLarg = arr[i];
            }
        }
        
      
    cout << secLarg;
    return 0;
}