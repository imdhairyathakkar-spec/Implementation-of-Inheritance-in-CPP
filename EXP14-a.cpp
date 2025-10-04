//Dhairya Thakkar
//24070123037
//A2
//Single inheritance

#include<iostream>
#include<string>
using namespace std;

class car {
    public:
    string a ="skoda ";
    void model(){
        cout<<"SUV"<<endl;
    }
};
class name: public car {
    public:
    string b ="octavia";
};

int main(){
    name u1;
    u1.model();
    cout<<u1.a ;
    cout<< u1.b;
}


/* OUTPUT:
SUV
skoda octavia
*/
