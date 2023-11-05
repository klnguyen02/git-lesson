#include <iostream>
using namespace std;

struct Person
{
    /* information of a person */
    string name;
    int age;
    string job;
};

void yourInfo(Person person)
{
    cout << "Amazing, here is a list of your information!" << endl;
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Job: " << person.job << endl;
    cout << "Thank you!" << endl;
}

int main()
{
    cout << "Hello! Welcome to this simple database!" << endl;
    cout << "The purpose of this is to store your information!" << endl;
    cout << "Now, please enter your name:" << endl;

    Person person;

    cin >> person.name;

    cout << "Please enter your age:" << endl;
    cin >> person.age;

    cout << "Please enter your job:" << endl;
    cin >> person.job;

    yourInfo(person);

    return 0; 
}