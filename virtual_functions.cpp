#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
    string name;
    int age;
    virtual void getdata() = 0;
    virtual void putdata() = 0;
    Person(string name, int age){;};
};


class Professor: public Person
{
    int publications;
    int cur_id;
public:
    Professor(string namee, int agee, int publicationss, int cur_idd ):Person(namee, agee)
    {
        publications = publicationss;
        cur_id = cur_idd;
    }
    virtual void getdata()
    {
        cin >> name >> age >> publications;
    }
    virtual void putdata()
    {
        cout << name << " " << age << " " << publications<< endl;
    }
    int prof_id()
    {
        cur_id++;
    }

};

class Student: public Person
{
    int *marks;
    int cur_id;
    Student(string nameee, int ageee, int markss [6], int cur_idd):Person(nameee, ageee)
    {
        marks = new int [6];
        cur_id = cur_idd;
    }
    virtual void getdata()
    {
        cin >> name >> age >> marks[6];
    }
    virtual void putdata()
    {
        int sum=0;
        for (int i =0; i<6; i++)

            sum += marks[i];
        cout << name << " " << age << " " << sum << endl;
    }
    int stud_id()
    {
        cur_id++;
    }


};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
