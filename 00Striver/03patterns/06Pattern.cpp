#include<iostream>
#include<vector>

using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 1; j <= 5 - i; j++){
            cout << j;
        }
        cout<< endl;
    }
    return 0;
}