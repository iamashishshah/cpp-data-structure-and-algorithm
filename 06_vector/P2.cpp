#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> cars = {"BMW", "Mercedes", "Audi", "MG Motors", "Tesla", "Porsche", "Pagani"};
    cars.push_back("Ashish");
    cout<< cars.back()<<endl; 
    cout<<cars.size();
    return 0;
}