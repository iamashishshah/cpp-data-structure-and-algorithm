The key difference between brew() and serve() comes down to whether the function is virtual or not:

Virtual Functions: When a function is virtual (like brew() in your example), C++ uses dynamic binding (also known as late binding). This means that the function call is resolved at runtime based on the actual type of the object, not the type of the pointer.

Non-Virtual Functions: When a function is not virtual (like serve() in your example), C++ uses static binding (or early binding), which means that the function call is resolved at compile time based on the type of the pointer or reference, not the type of the object.

```cpp
Tea* teaOne = new GreenTea(2);  // teaOne points to a GreenTea object
teaOne->brew();  // Calls GreenTea's brew() because brew() is virtual
teaOne->serve();  // Calls Tea's serve() because serve() is not virtual

```