#include <iostream> // pre-porcessing command
#include <string>
using namespace std; // using rather than using direct lib

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
};

class Employee
{
public:
    string name;
    int salary;

    Employee(string name , int salary ) {
        this->name = name;
        this->salary=salary;
    }

    void details()
    {
        cout << "the name of our first employee is " << this->name << "and the salary is " << this->salary << endl;
    }

    void pass() {
        cout<<"the secret password is "<< this->secretPassword<<endl;
    }

private:
 
   int secretPassword=123123312;
};

int main()
{
    cout << "Hello World" << endl;
    cout << "Hii" << endl;

    int a, b, c;
    // short sarnav=18;

    // cout<<sarnav;

    // int marksInMath=99;
    // cout<<"The marks of student in math is :"<<marksInMath<<endl;

    // float const score=0.10;
    // cout<<"the score is :"<<score<<endl;

    // int d,e;

    // cin>>d;
    // cin>>e;
    // cout<<"the sum of d and e is :"<<d+e<<endl;

    // int age;
    // cout<<"the age of person is: ";

    // cin>>age;
    // if (age>150 ) {
    //     cout<<"Invalid age";
    // }
    // else if (age>=18) {
    //     cout<<"you are eligble to vote";
    // }
    // else {
    //     cout<<"You are not eligible to vote";
    // }

    // switch (age)
    // {
    // case 12:
    //     cout<<"you are 12 years old";
    //     break;

    // case 18:
    //     cout<<"you are 18 years old";
    //     break;

    // default:
    //     cout<<"you are niether 12 or 18 years old";
    //     break;
    // }

    // int i;

    // while(i<10) {
    //     cout<<"the current index is : "<<i<<endl;
    //     i++;
    // }

    // do {
    //     cout<<"the current is :"<<i<<endl;
    //     i++;

    // } while (i>10);

    // return 0;

    // for( int i=0 ; i<10;i++) {
    //     cout<<"the current state is:"<<i<<endl;
    // }

    // int d,e;

    // cin>>d;
    // cin>>e;

    // cout<< "sum:"<<sum(d,e);

    // int arr[] ={1,2,3};

    // for ( int i=0; i<=2 ; i++) {
    //     cout<<"the marks of "<<i<<"th student is" <<arr[i]<<endl;

    // }

    // int arr2d[2][3] = {
    //     {1,2,3},
    //     {4,5,6}
    // };

    // for (int j=0 ;j<2 ; j++) {
    //     for ( int k =0 ; k<=2 ; k++) {
    //         cout<<"the value at "<<j<<k<<"is"<<arr2d[j][k]<<endl;
    //     }

    // }

    // int i = 10 ;
    // cout<< (float) i/3 <<endl;
    // float j = 23.45;
    // // cout<< (int) j;

    // string name="sarnav";
    // cout<<"the lenth of name is "<<name.length()<<endl;
    // cout<<"the name is "<<name<<endl;
    // cout<<"the first three letters are"<<name.substr(0,3)<<endl;

    // int s= 10;
    // int* ptsd;
    // ptsd = &s;

    // cout<<"the value of s is"<<s<<endl;
    // cout<<"the vlue of s is"<<*ptsd<<endl;
    // cout<<"the address of s is"<<ptsd<<endl;
    // cout<<"the address of s is"<<&s<<endl;

    Employee developer("Sarnav", 5000);

    developer.details();
    developer.pass();


    return 0;
}