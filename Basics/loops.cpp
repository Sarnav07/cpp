#include <iostream>
using namespace std;

int main() {

    //P1
    for ( int i=0; i<10 ; i++) {
        std::cout<<"This is the "<<i<<"th iteration !!"<<"\n";
    }

    //P2
    for (int a=0; a<2; a++) {
        for (int b=0 ; b<2 ; b++) {
            std::cout<<"the i="<<a<<"the j="<<b<<"\n";
        }
    }

    //P3
    for ( int d=0; d<=25; d+=5) {
        std::cout<<"the values are"<<d<<"\n";

    }

    //P4
    int factorial=1;
    int i;
    std::cin>>i;

    while(i>0) {
        factorial*=i;
        i--;
    }

    std::cout<<"The factorial of is"<<factorial<<endl;
}