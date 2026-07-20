# include <iostream>
using namespace std;

class Solution{
    public:

    int countDigits(int n) { 
        int count=0;
        while( n>0) {
            n%10;
            n=n/10;
            count+=1;
    }
    return count;
}
};

int main() {
    Solution obj;
    std::cout<<obj.countDigits(16534);

    // std::cout<<obj.reverseNumber(123451231);
}