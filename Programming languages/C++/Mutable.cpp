/*
In C++, the mutable keyword is used to allow a particular data member of a class to be modified even if the object is declared as const.
By default, all member variables of a const object are also const, meaning they cannot be modified.
The mutable keyword provides an exception to this rule.
*/

class MyClass {
private:
    mutable int cacheValue; // Mutable member variable

public:
    MyClass() : cacheValue(0) {}

    // Const member function that modifies cacheValue
    int getValue() const {
        // Modifying mutable member variable inside const member function
        cacheValue++;
        return cacheValue;
    }
};
