#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {3, 2, 5, 0, -1, 334, 1000, -3, 2};
    int larg = (arr[0]);
    for(int i = 1; i < arr.size(); i++){
        if(larg < (arr[i])){
            larg = (arr[i]);
        }
    }
    cout << larg;
    return 0;
}