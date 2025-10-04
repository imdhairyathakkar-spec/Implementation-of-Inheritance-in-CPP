// Dhairya Thakkar
// 24070123037
// A2
// Hierarchical Inheritance

#include <iostream>
#include <string>
using namespace std;

class Brand {
protected:
    string brand;
public:
    Brand() {
        brand = "Tata Motors";
    }
    void showBrand() {
        cout << "Brand: " << brand << endl;
    }
};

class Carr : public Brand {
    string model;
public:
    Carr() {
        cout << "Enter Model: ";
        cin >> model;
    }
    void display() {
        showBrand();
        cout << "Model: " << model << endl;
    }
};

class Features : public Brand {
public:
    void classic() {
        showBrand();
        cout << "Features: Safety, Comfort, and Fuel Efficiency" << endl;
    }
};

int main() {
    Carr c;
    c.display();

    Features f;
    f.classic();

    return 0;
}

/* OUTPUT:
Enter Model: Nexon
Brand: Tata Motors
Model: Nexon
Brand: Tata Motors
Features: Safety, Comfort, and Fuel Efficiency
*/
