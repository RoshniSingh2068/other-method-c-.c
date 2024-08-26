//class
#include <iostream>
#include  <string>

C:\Users\ROSHNI SINGH\Documents\code block project\cppProject\10. horizontal escape sequence c++.cusing namespace std;
class Myclass{ // the class
    public: // accsee specifier
    int myNum; // attributes
    string myString;  // attributes

};

int main(){
    Myclass myobj; // create an object of my class
    myobj.myNum = 15;
    myobj.myString = " some text";
    cout << myobj.myNum <<"\n";
    cout << myobj.myString << "\n";
    return 0;

}







