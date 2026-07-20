# include <iostream>
using namespace std;

class Solution{
    public:

    int countDigits(int a) { 
        int count=0;
        while( a>0) {
            a%10;
            a=a/10;
            count+=1;
    }
    return count;
}
    
    int reversedNumber(int b) {
        int reverse=0;
        while(b>0) {
            reverse=(reverse*10)+(b%10);
            b=b/10;
        }
        return reverse;
    }
};

int main() {
    Solution obj;
    std::cout<<obj.countDigits(16534)<<std::endl;
    std::cout<<obj.reversedNumber(1234);

}