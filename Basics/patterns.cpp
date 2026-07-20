#include <iostream>
using namespace std;


class solution
{
public:
    void pattern1(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    }

    void pattern2(int n) {
        for (int i=0 ; i<n;i++) {
            for (int j=0; j<n ; j++) {
                if(j<=i) {
                    std::cout<<"*";
                }
            }
            std::cout<<std::endl;
        }
    }

    void pattern3(int n) {
        for(int i=1; i<n+1;i++) {
        for (int j=0;j<n;j++) {
            if(j<i) {
                std::cout<<j+1;
            }
        }
        std::cout<<std::endl;

    }
    }

    void pattern4(int n) {
        for(int i=1; i<6;i++) {
        for (int j=0;j<5;j++) {
            if(j<i) {
                std::cout<<i;
            }
        }
        std::cout<<std::endl;

    }

    }

    void pattern5(int n) {
        for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(j>=i) {
                    std::cout<<"*";
                }
            }
            std::cout<<std::endl;

        }
    }
};

int main() {

    for(int i=1;i<4;i++) {
        for(int j=0;j<4;j++) {
            if(j<=i) {
                    std::cout<<i;
                }
        }
            std::cout<<std::endl;
        }

    // for(int i=0; i<4;i++) {
    //     for (int j=0 ; j<7;j++) {
    //         if(j=)
    //     }
    // }
}

