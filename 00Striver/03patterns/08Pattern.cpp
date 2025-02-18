#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;

    for(int i = n; i > 0; i--){
        for(int j = 0; j < n - i; j++){
            cout << " ";
        }
        for(int j = 0; j < 2*i - 1; j++){
            cout << "*";
        }
        cout<< endl;
    }
    return 0;
}
