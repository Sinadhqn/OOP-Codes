#include <iostream>
using namespace std;

template < typename T >
class Parent{
protected:
    virtual T Add(T a, T b){
        return a + b;
    }
};

class Child : public Parent<int>{
public:
    int Add(int a, int b) override{
        int c = Parent<int> ::Add(5, 10);
        return c + 20;
    }
};

int main(){
    Child Joe;
    cout << Joe.Add(1, 2) << endl;
}
