#include<iostream>

using namespace std;

// class ClassC
// {
// public:
//     int max = 0;
//     int minn = 0;
//     int middlee= 0;

//     ClassC() {
//         cout << "without parameter.\n";
//     }


//     ClassC(int max)
//     {
//         this->max = max > 0 ? max : 10;
//         cout << "assigning max value constructor.\n";
//     }


//     ClassC(int max, int min)
//     {
//         this->max = max > 0 ? max : 10;
//         minn = min > 0 && min < max ? min : 1;
//         cout << "2 without parameter.\n";
//     }


//     ClassC(int max, int min, int middle)
//     {
//         this->max = max > 0 ? max : 10;
//         minn = min > 0 && min < max ? min : 1;
//         middlee = middle < max && middle > min ? middle : 5;
//         cout << "3 without parameter.\n";
//         // cout << max;
//     }
// };


class ClassC{
    public:
        int max;
        int middle;
        int min;

        ClassC(int max){
            this -> max = max > 0 ? max : 10;
        }

        ClassC(int max, int min): ClassC(max){
            this -> min = min > 0 && min < max ? min : 1;
        }

        ClassC(int max, int min, int middle): ClassC(max, min){
            this -> middle = middle < max && middle > min ? middle : 5;
        }
};

int main(){
    ClassC classs(10, 7, 6);
    cout << classs.max << endl;
    cout << classs.middle << endl;
    cout << classs.min << endl;

    cout << endl;
    return 0;
}