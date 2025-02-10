//1. Challenge 1: Arithmetic Operators
//Write a program that calculates the price of tea packs. 
//A user enters the number of tea packs they want, and the price per pack. 
//Apply a 10% tax to the total price and display the final cost.

#include<iostream>
using namespace std;

int main(){
    int numberOfPacks;
    float pricePerPack;
    cout<< "Enter the number of packs: ";
    cin>>numberOfPacks;
    cout<< "Enter the price per pack: ";
    cin>>pricePerPack;

    float totalPrice = (float)(pricePerPack * numberOfPacks);
    float finalCost = totalPrice + totalPrice * 0.10;
    cout<< "Total cost is : "<<finalCost<<endl;
    return 0;
}
