We can't create an instance of abstract class but we can derived it into another class, but why?

A pure virtual function is a virtual member function that belongs to a base class and needs to be redefined in derived classes.

Regular Virtual Function: The function still allows derived classes to override it, but it also provides a default implementation in the base class. This means derived classes aren't required to override it. If they don't, the default behavior from the base class is used.

```cpp
class Base{
    public: 
        virtual void show(){
            cout << "Base class show fn." << endl;
        }
};
```
Concrete Class: The class that contains this function will not be abstract anymore (unless it has other pure virtual functions). This means you can create instances of this class directly if needed.

Pure virtual functions are functions that are declared in a base class but are not implemented there. The derived class must implement these functions to be considered concrete (i.e., it can be instantiated).

Compliance: If a derived class does not provide implementations for all pure virtual functions inherited from the base class, that derived class will still be abstract and cannot be instantiated.

Pure virtual function: derived class must implement the pure virtual function in order to be concrete class or else it is also another abstract class

Regular virtual function: when you define some default functionalities to virtual function then it is know as Regular virtual function. There is no need to override in order to be concrete class but if you wish you can.

Concrete vs Abtract class: Can't instantiation problem only.

```cpp
Shape* shape = new Cricle();

```
Polymorphism is one of the core principles of OOP that allows you to treat objects of derived classes as objects of their base class, enabling dynamic method dispatch


Why Can't We Create an Instance of a Class with Virtual Functions?: 
IMO because there is no implementation of pure virtual function, and what will happen if we try to access it? that's why we can't if there atleast one virtual fn, but if there are regular virtual function then instance can be created. 

But then why to make it virtual?
so that I can overriden by derived class, not actually...


What did I learn today? 11 Fab 2025.
1. Pure virtual function and Regular virtual function.
2. Why can't we create instance of Abstract class.
3. Abstract class(but more detail need to learn).
4. How to derived class implement base class.
5. Base class vs Derived class.