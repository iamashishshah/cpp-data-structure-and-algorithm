#include<iostream>
#include <iomanip>
using namespace std;

int main(){
//    unsigned smallTeaPack = -55100;
	__int8 smallTeaPack = 127;
    printf("%d\n", sizeof(smallTeaPack));
	printf("%d\n",smallTeaPack);
    cout<<(int)smallTeaPack<<endl;
    cout<<sizeof((int)smallTeaPack);

}