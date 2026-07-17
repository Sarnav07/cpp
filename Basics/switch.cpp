#include <iostream>
using namespace std;

int main()
{
    //P1
    int day;
    std::cout << "Enter a number between (1-7)"<<"\n";
    std::cin >> day;

    switch (day)
    {
    case 1:
        std::cout << "Monday";
        break;

    case 2:
        std::cout << "Tuesday";
        break;

    case 3:
        std::cout << "Wednesday";
        break;

    case 4:
        std::cout << "Thursday";
        break;

    case 5:
        std::cout << "Friday";
        break;

    case 6:
        std::cout << "Saturday";
        break;

    case 7:
        std::cout << "Sunday";
        break;
    }


    //P2
    int a ,b;
    std::cin>>a;
    std::cin>>b;

    switch(a+b) {
        case 15: 
            std::cout<<"The sum is 15!!"<<std::endl;
            break;

        case 25:
            std::cout<<"The sum is 25!!"<<std::endl;
            break;

        default :
            std::cout<<"It is niether 15 nor 25!!"<<std::endl;
            break;

    }

    //P3
    char grade;
    std::cin>>grade;

    switch(grade) {
        case 'A':
            std::cout<<"Excellent!!"<<std::endl;
            break;

        case 'B':
            std::cout<<"Good"<<std::endl;
            break;

        default: 
            std::cout<<"Not defined"<<std::endl;
            break;
    }


    return 0;
}