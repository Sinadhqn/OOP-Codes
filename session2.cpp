#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    std::string GetName() {
        return name;
    }

    int GetAge() {
        return age;
    }
};

class Student : protected Person {
private:
    double gpa; // به جای سن استفاده میشود برای وضوح بیشتر

public:
    double GetGPA() {
        return gpa;
    }

    std::string GetStudentName() {
        return name; // دسترسی به عضو محافظت شده از کلاس اصلی
    }

    void SetDetails(std::string n, int a, double g) {
        name = n; // دسترسی به عضو محافظت شده
        age = a;   // دسترسی به عضو محافظت شده
        gpa = g;
    }
};

class Teacher : public Person {
private:
    double salary;

public:
    double GetSalary() {
        return salary;
    }

    void SetDetails(std::string n, int a, double s) {
        name = n; // دسترسی به عضو محافظت شده
        age = a;   // دسترسی به عضو محافظت شده
        salary = s;
    }
};

int main() {
    Student student;
    student.SetDetails("Sina", 22, 20);
    std::cout << "Student Name: " << student.GetStudentName() << std::endl;

    Teacher teacher;
    teacher.SetDetails("Khosrojerdi", 40, 22000000);
    std::cout << "Teacher Name: " << teacher.GetName() << std::endl;
    std::cout << "Teacher Age: " << teacher.GetAge() << std::endl;
    std::cout << "Teacher Salary: " << teacher.GetSalary() << std::endl;

    return 0;
}
// `### Different Access Specifier Scenarios:

// 1. Scenario 1: `protected` in `Person`, `protected` in `Student`, and `public` in `Teacher`
//    - Output: You can access members of `Person` through `Teacher`, but you cannot access `Person` from `Student`.
//    - Example Output:
     
//      Student Name: Sina
//      Teacher Name: Khosrojerdi
//      Teacher Age: 40
//      Teacher Salary: 22000000
     

// 2. Scenario 2: Change `protected` to `private` in `Person`
//    - Output: You cannot access `name` and `age` from `Student`.
//    - Example Output: (Compilation error when trying to access `name` and `age` in `Student`)

// 3. Scenario 3: Change `private` in `Student` to `protected`
//    - Output: You can access `gpa` from derived classes of `Student`, but you still cannot access members of `Person` from outside.
//    - Example Output: (No change in output, but derived classes of `Student` can access `gpa`)

// 4. Scenario 4: Change `public` in `Teacher` to `private`
//    - Output: You cannot access members of `Person` from outside.
//    - Example Output: (Compilation error when trying to access `GetName` and `GetAge` from `main`)

// 5. Scenario 5: Change `public` in `Student` to `protected`
//    - Output: Only derived classes of `Student` can access its methods.
//    - Example Output: (Compilation error when trying to access `GetStudentName` from `main`)

// 6. Scenario 6: Change `protected` in `Student` to `public`
//    - Output: You can access members of `Person` through `Student`.
//    - Example Output:
     
//      Student Name: Sina
//      Teacher Name: Khosrojerdi
//      Teacher Age: 40
//      Teacher Salary: 22000000




