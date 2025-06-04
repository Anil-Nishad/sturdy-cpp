#include <iostream>
#include<vector>
#include<algorithm>
# include<numeric>
#include<iterator>
#include<string>

using namespace std;

struct Employee {
    int id;
    string name;
    int age;
    double salary;
};

void displayEmployee(const Employee& emp) {
    cout << "ID: " <<emp.id << " , nmae: " << emp.name << " , age: " << emp.age << " , salary: " << emp.salary << endl;
}


int main(){
    vector<Employee> employees = {
        {101, "Alice", 30, 50000},
        {102, "Bob", 25, 60000},
        {103, "Charlie", 35, 70000},
        {104, "David", 28, 80000},
        {105, "Eve", 32, 90000}
    };

    sort(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) {
        return a.salary > b.salary;
    });
    cout << "Employees sorted by salary in descending order:" << endl;
    for_each(employees.begin(), employees.end(), displayEmployee);

    vector<Employee> highSalaryEmployees;
    copy_if(employees.begin(), employees.end(), back_inserter(highSalaryEmployees), [](const Employee& emp) {
        return emp.salary > 60000;
    });
    cout << "Employees with salary greater than 60000:" << endl;
    for_each(highSalaryEmployees.begin(), highSalaryEmployees.end(), displayEmployee);

    cout << "Employees with age greater than 30:" << endl;
    for_each(employees.begin(), employees.end(), [](const Employee& emp) {
        if (emp.age > 30) {
            displayEmployee(emp);
        }
    });

    cout << "Employees with age greater than 30 using find_if:" << endl;
    cout << endl;
    auto it = find_if(employees.begin(), employees.end(), [](const Employee& emp) {
        return emp.age > 30;
    });

    double totalSalary = accumulate(employees.begin(), employees.end(), 0, [](double sum, const Employee& emp) {
        return sum + emp.salary;
    });
    cout << "Total salary of all employees: " << totalSalary << endl;
    double averageSalary = totalSalary / employees.size();
    cout << "Average salary of all employees: " << averageSalary << endl;
    cout << endl;

    auto highestPaid = max_element(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) {
        return a.salary < b.salary;
    });

    return 0;
}