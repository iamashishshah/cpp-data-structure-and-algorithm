/*
Problem:
Write a class Student with private data members such as name, age, and grade. Ensure the age can only be set if it is within a valid range (e.g., 18–100 years), and the grade can only be set if it's a valid grade (A, B, C, etc.).

Hints:
Implement validation logic inside setter methods.
Use getter methods to retrieve the values of private data.

*/

#include<iostream>
#include<vector>

using namespace std;

class Student{
    private:
        string name;
        int age;
        char grade;
    
    public: 
        Student(const string name, const int age, const char grade){
            this -> name = name;
            this -> age = age;
            this -> grade = grade;
        }

        // getter and setter for all members
        int getAge() const {
            return this->age;
        }
        void setAge(const int age) {
            if(age >= 18 && age <= 100){
                this -> age = age;
                cout << "Age is set to: " << age << endl;
            }else{
                cout << "Please provide age betwen 18-100 YO." << endl;
            }
        }

        char getGrade() const {
            return this -> grade;
        }
        void setGrade(const char grade) {
            if(grade == 'A' || grade == 'B' || grade == 'C'){
                this -> grade = grade;
            }else{
                cout << "Other than the grade A, B, C is not acceptable." << endl;
            }
        }

        string getName() const{
            return this -> name;
        }

        void setName(const string name){
            this -> name = name;
        }

};

int main(){
    Student studentOne("Ashish shah", 21, 'A');
    studentOne.setGrade('D');
    char grade = studentOne.getGrade();
    
    cout << grade << endl;


    cout << endl;
    return 0;
}