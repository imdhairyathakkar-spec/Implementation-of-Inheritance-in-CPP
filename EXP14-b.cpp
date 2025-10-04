//Dhairya Thakkar
//24070123037
//A2
//Multiple inheritance

#include <iostream>
#include <string>
using namespace std;

class Brand {
protected:
    string brand;
public:
    Brand() {
        brand = "Mercedes-Benz";
    }
};

class Features {
public:
    void classic() {
        cout << "Features: Luxury" << endl;
    }
};

class Carr : public Brand, public Features {
    string model;
public:
    Carr() {
        cout << "Enter Model: ";
        cin >> model;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};

int main() {
    Carr c;
    c.display();
    c.classic();
    return 0;
}

/* OUTPUT:
Enter Model: S-Class 
Brand: Mercedes-Benz
Model: S-Class
Features: Luxury
*/
