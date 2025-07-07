// #include <iostream>
// using namespace std;

// int main(){

//      int a;
//      cout<<"Enter a Number: ";
//      cin>>a;
//      cout<<a;
// }



// #include <iostream>
// using namespace std;

// int main(){

//      int a;
//      cout<<"Enter a Number: ";
//      cin>>a;
//      cout<<a;
// }
#include <iostream>
#include <limits>
#include <climits>
using namespace std;
int main(){

     //a=10; //declare
     //single line comment
     /*multi line comment*/

     // int a;
     // cout<<"enter a number: ";
     // cin>>a;
     // cout<<"the number you have entered is: "<<a;

     // int a=10;
     // cout<<a<<endl;

     //  char ='p';
     // cout<<c<<endl;

     // bool d=true;
     // cout<<d;



     //   address-> variable we use &-> ampersent or address of 

     int a=10;
     cout<<&a<<endl;

     int b=20;
     cout<<&b<<endl;

     // size-> datatypes
     cout<<sizeof(int)<<endl;
     cout<<sizeof(float)<<endl;
     cout<<sizeof(double)<<endl;
     cout<<sizeof(char)<<endl;
     cout<<sizeof(bool)<<endl;

     //   limit-> datatypes

       cout<<numeric_limits<int>::max()<<endl;
       cout<<numeric_limits<int>::min()<<endl;

       cout<<numeric_limits<float>::max()<<endl;
       cout<<numeric_limits<float>::min()<<endl;

       cout<<numeric_limits<bool>::max()<<endl;
       cout<<numeric_limits<bool>::min()<<endl;

       cout<<INT_MAX<<endl;
       cout<<INT_MIN<<endl;

       cout<<CHAR_MAX<<endl;
       cout<<CHAR_MIN<<endl;



}

