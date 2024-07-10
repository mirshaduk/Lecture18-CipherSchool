#include<iostream>
using namespace std;

void PrintHi() //no parameters required
{
    cout<<"Hi"<<endl;
    return;

}

int sum(int a, int b)
{
    int c;

    c = a+b;
    a= 500;

    //  cout<<"The value of c is"<<c<<endl;


    return c;
}
    //void swap(int a, int b)
    void swap(int &a, int &b)
    //

    //by including the keyword & after the name of the datatype and before the variable to change the actual parameteres
    {
        int c;
         c= a;
         a =b;
         b =c;

         cout<<"The value of a and b after  inside the fun function are; "<<a<<" "<<b<<endl;

    return;

    }

    void fun(int&a, int b)
    {
        a = 99999;
        b = 99999;

         cout<<"The value of a and b before passing into the fun  function are; "<<a<<" "<<b<<endl;

    }
int main()
{
    PrintHi();

    int a,b;
    int c;

    a= 4;
    b= 6;
    
 cout<<"The value of a and b before passing into the fun  function are; "<<a<<" "<<b<<endl;

    // c= 75;

    // int d;
    //  d = sum(a,b);

     //cout<<"The sum is equal to"<<d<<" "<<"The value of a is"<<a; // The value of a should

    // cout<<"The value of c is"<<c<<endl;
    fun(a,b);

        cout<<"The value of a and b after passing into the fun function are; "<<a<<" "<<b<<endl;

     return 0;
}