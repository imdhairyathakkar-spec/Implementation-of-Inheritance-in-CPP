//Dhairya Thakkar
//24070123037
//A2
//Multilevel inheritance

#include<iostream>
#include<string>
using namespace std;

class Food {
    public:
    string cuisine="Indian";
    void type(){
        cout<<"Indian Subcontinental"<<endl;
    }
};
class Dish: public Food {
    public:
    string dish="Chole Bhature";
};
class Restaurant: public Dish {
    public:
    string name="Harsh's Kitchen";
};

int main(){
    Restaurant f3;
    f3.type();
    cout<<f3.cuisine<<": "<<f3.dish<<endl;
    cout<<"Restaurant: "<<f3.name;
}

/* OUTPUT:
Indian Subcontinental
Indian: Chole Bhature
Restaurant: Harsh's Kitchen
*/
