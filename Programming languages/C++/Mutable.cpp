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
