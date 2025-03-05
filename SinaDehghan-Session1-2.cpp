#include <iostream>

class Benz {
	public:
		bool startEngine() {
			if (startElectronicServices() && startLightSystem()) {
				std::cout << "Engine started successfully." << std::endl;
				return true;
			} else {
				std::cout << "Failed to start engine!" << std::endl;
				return false;
			}
		}

	private:
		bool startElectronicServices() {
			std::cout << "Electronic services started." << std::endl;
			return true;   
		}
		bool startLightSystem() {
			std::cout << "Light system started." << std::endl;
			return true;  
		}
	};
int main() {
    Benz b; 
    bool resault = b.startEngine();  
    return 0;
}