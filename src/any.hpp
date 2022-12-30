#include <iostream>
#include <vector>
#include <uinque_pointer>

class Any
{

public:

    template<typename T>
    Any(T t)
    {
        value_ = t;
    }

private:

    struct Value
    {
        virtual ~Value() {}
    };

    template<typename T>
    struct Data : public Value
    {
        T data;
    };


    UinquePoint<Value> value_;




};