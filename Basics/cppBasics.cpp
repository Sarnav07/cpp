# include <iostream>
using namespace std;


class Solution {
        public:

        int findTheLengthOfString(std::string name1) {
            return name1.length();
        }

        void getTheCharactersOfString(std::string name2) {
            for (int a=0;a< name2.length();a++) {
                std::cout<<name2[a]<<std::endl;
            }
        }
        
        std::string modifyString(std::string str) {
            std::string newStr=str;

            newStr[0] = 'S';

            return newStr;

        }

        bool campareTwoString(std::string str1, std::string str2) {
            return str1 == str2;
        }
    };


int main() {

    std::cout<<"hey , Sarnav this side "<<"\n";
    std::cout<<"this is the new line !! "<<"\n";

    int age;
    std::cin>>age;
    std::cout<<"Age is "<<age<<"\n";

    int array[8]={};


    // finding the length of a string 

    Solution obj;

    std::string name="sarnav";
    std::cout<< obj.findTheLengthOfString(name)<<std::endl;

    obj.getTheCharactersOfString(name);

    std::cout<<obj.modifyString(name)<<"\n";

    std::string s1,s2;
    std::cin>>s1;
    std::cin>>s2;

    std::cout<<obj.campareTwoString(s1,s2);


    return 0;
}
