# include <iostream>
using namespace std;

int main() {

    // P1
    int age;
    std::cin>>age;
    if (age>18) {
        std::cout<<"You are an Adult"<<"\n";
    }
    else {
        std::cout<<"You are not an adult"<<"\n";
    }

    //P2
    int marks;
    std::cin>>marks;
    if ( marks<25) {
        std::cout<< "Your grade is F"<<"\n";
    }
    else if (marks>25 && marks<44) {
        std::cout<<"Your grade is E"<<"\n";
    }
    else if (marks>44 && marks<49) {
        std::cout<<"Your grade is C"<<"\n";
    }
    else if (marks>49 && marks <59) {
        std::cout<<"Your grade is B"<<"\n";
    }
    else if ( marks>59 && marks<79) {
        std::cout<<"Your grade is A";
    }
    else {
        std::cout<<"Invalid Marks"<<"\n";
    }

    return 0;
}