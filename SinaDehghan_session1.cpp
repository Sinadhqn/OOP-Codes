#include <iostream>
#include <string>

class person {
	private:
		std::string name;
		int age;
	public:
		person(std::string n, int a) : name(n), age(a) {};
		
		std::string GetName() {
			return name;
			};
		int GetAge() {
			return age;
			};
    };
	int main() {
		person p("Sina", 22);
		std::string n = p.GetName();
		int a = p.GetAge();
		std::cout << "User Name Is " << n << std::endl;
		std::cout << "User Age Is " << a << std::endl;
		return 0;
		}
		
		
