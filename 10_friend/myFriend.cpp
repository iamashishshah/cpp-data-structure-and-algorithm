#include<iostream>
#include<vector>

using namespace std;

class Chai{
    private: 
        int servings;
        string teaName;
    
    public:
        Chai(int serve, string name): servings(serve), teaName(name){
            // cout << "Paramatrized constructor is called." << endl;
        }

        void display() const{ // because it also has the access of members can change
            // teaName = "masala chai";
            cout << "Tea name: " << teaName << endl;
            cout << "People serving: " << servings << endl;
        }

        friend bool compareServings(const Chai &chaiOneObj, const Chai &chaiTwoObj);
};

bool compareServings(const Chai &chaiOne, const Chai &chaiTwo){
    return chaiOne.servings > chaiTwo.servings;
}

    int
    main()
{

    Chai lemonChai(4, "Lemon tea");
    Chai gingerChai(445, "Ginger tea");

    lemonChai.display();
    gingerChai.display();

    // now I want to check if masala chai having more servings or ginger but but "servings" is private so it can't be accessed but I'm saying make a method who has the access to these members and we can get it from there
    if(compareServings(lemonChai, gingerChai)){
        cout << "Lemon chai has more servings." << endl;
    }else{
        cout << "Ginger chai has more servings." << endl;
    }

    cout << endl;
    return 0;
}