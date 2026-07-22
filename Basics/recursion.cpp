#include <iostream>
using namespace std;

class Solution{
    public:

        void printnTimes(string name , int n , int count) {
            if(count==n) return;

            std::cout<<name<<"\n";

            printnTimes(name,n,count+1);
        }

        void print1ToN(int n) {
            if(n>1) return;
            n=n-1;
            print1ToN(n-1);
            std::cout<<n<<"\n";

        }

        // void NnumbersSum(int N) {
        //     if(N>0) return;
        //     int s
        // }
};

int main() { 
    Solution sol;
    // sol.printnTimes("Sarnav",5,0);
    sol.print1ToN(10);

}