#include <iostream>
using namespace std;

//Pass by value

void modify(int a ) {
    a=a+10;
}

void mofi(int &b) {
    b+=10;

}
int main() {

    int x = 5;
    modify(x);
    std::cout<<x<<std::endl;

    int y=20;
    mofi(y);
    std::cout<<y<<std::endl;

    return 0;

}