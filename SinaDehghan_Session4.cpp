//OOP4
#include <iostream> 
#include <string> 
using namespace std;  
class Car { 
private: 
    bool fuelPump; 
    bool electricalSystem; 
 
public: 
    Car() { 
        fuelPump = false; 
        electricalSystem = false; 
    } 
    virtual string start() { 
    fuelPump = true; 
    electricalSystem = true; 
    string result; 
    result += "Fuel pump activated.\n"; 
    result += "Electrical system activated.\n"; 
    return result; 
} 
}; 
class Matiz : public Car { 
public: 
string start() override { 
    string result = Car::start(); 
    result += "Radio turned on.\n"; 
    result += "Odometer activated.\n"; 
    return result; 
} 
 
}; 
class BMW : public Car { 
public: 
    string start() override { 
    string result = Car::start(); 
    result += "GPS turned on.\n"; 
    result += "Headlights turned on.\n"; 
    result += "Mirrors unfolded.\n"; 
    return result; 
} 
 
}; 
int main() { 
    Car* car1 = new Matiz(); 
    Car* car2 = new BMW(); 
 
    cout << "Matiz:\n" << car1->start() << endl; 
    cout << " bmw:\n" << car2->start() << endl; 
 
    delete car1; 
    delete car2; 
 
    return 0; 
} 
#include <iostream> 
#include <string> 
using namespace std; 
class Car { 
private: 
    bool fuelPump; 
    bool electricalSystem; 
 
public: 
    Car() { 
        fuelPump = false; 
        electricalSystem = false; 
    } 
 
    virtual string start() { 
        fuelPump = true; 
        electricalSystem = true; 
        string result; 
        result += "Fuel pump activated.\n"; 
        result += "Electrical system activated.\n"; 
        return result; 
    } 
}; 
class Matiz : public Car { 
private: 
    string turnOnRadio() { 
        return "Radio turned on.\n"; 
    } 
 
    string activateOdometer() { 
        return "Odometer activated.\n"; 
    } 
 
public: 
    string start() override { 
        string result = Car::start(); 
        result += turnOnRadio(); 
        result += activateOdometer(); 
        return result; 
    } 
}; 
class BMW : public Car { 
private: 
    string turnOnGPS() { 
        return "GPS turned on.\n"; 
    } 
 
    string turnOnHeadlights() { 
        return "Headlights turned on.\n"; 
    } 
 
    string unfoldMirrors() { 
        return "Mirrors unfolded.\n"; 
    } 
 
public: 
    string start() override { 
        string result = Car::start(); 
        result += turnOnGPS(); 
        result += turnOnHeadlights(); 
        result += unfoldMirrors(); 
        return result; 
    } 
};  
int main() { 
    Car* car1 = new Matiz(); 
    Car* car2 = new BMW(); 
 
    cout << " Matiz:\n" << car1->start() << endl; 
    cout << " BMW:\n" << car2->start() << endl; 
 
    delete car1; 
    delete car2; 
 
    return 0; 
}
