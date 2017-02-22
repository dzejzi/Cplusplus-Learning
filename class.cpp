#include <iostream>
#include <sstream>
using namespace std;

class Student
{

    int age;
    string first_name;
    string last_name;
    int standard;
    int val, vald;
    string valb, valc, abcd;

public:
    void set_age(int age)
    {
        val = age;
    }

    int get_age()
    {
       return val;
    }
    void set_first_name(string first_name)
    {
        valb = first_name;
    }
    string get_first_name()
    {
       return valb;
    }
    void set_last_name(string last_name)
    {
        valc = last_name;
    }
    string get_last_name()
    {
       return valc;
    }
     void set_standard(int standard)
    {
        vald = standard;
    }
    int get_standard()
    {
        return vald;
    }

    string to_string ( )
    {
        stringstream ss1, ss2;
        //string s1, s2;
        ss1.clear();
        ss1 << age;
        ss2.clear();
        ss2 << standard;
        //ss1 >> s1;
        //ss2 >> s2;*/

        string napis = to_string(age)+ "," + valb + "," + valc + "," + to_string(standard);

        return napis;

    }


};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
