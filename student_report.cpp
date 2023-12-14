#include<iostream>
using namespace std;
class student
{
    int regno;
    char name[20];

public:
    void getdata()
    {
        cout << "Enter Student Details" << endl;
        cout << "_____________________________________________________" << endl;
        cout << "Regno : "; cin >> regno;
        cout << "Name : "; cin >> name;
    }

    void display()
    {
        cout << "\tStudent Report" << endl;
        cout << "_____________________________________________________" << endl;
        cout << "Regno : " << regno << endl;
        cout << "Name : " << name << endl;
    }
};
class exam :public virtual student
{

public:

    int m1, m2, m3;
    void getdata_exam()
    {
        getdata();
        cout << "Enter 3 subject marks:" << endl;
        cout << "Subject 1: "; cin >> m1;
        cout << "Subject 2: "; cin >> m2;
        cout << "Subject 3: "; cin >> m3;
    }
    void display_exam()
    {
        display();
        cout << "\n\tMarks" << endl;
        cout << "---------------------------------" << endl;
        cout << "Subject 1: " << m1 << endl;
        cout << "Subject 2: " << m2 << endl;
        cout << "Subject 3: " << m3 << endl;
    }
};
class sports :public virtual student
{
    char sport[20];
public:
    float weightage;
    void getdata_sports()
    {
        cout << "Enter sports details" << endl;
        cout << "Sport name : "; cin >> sport;
        cout << "Weightage in % : "; cin >> weightage;
    }
    void display_sports()
    {
        cout << "\n\tSports" << endl;
        cout << "---------------------------------" << endl;
        cout << "Sports name : " << sport << endl;
        cout << "Sport weightage : " << weightage << endl;
    }
};
class result :public  exam, public sports
{
    float total, result;

public:
    void getdata_result()
    {
        getdata_exam();
        getdata_sports();
    }
    
    void display_result()
    {
        display_exam();
        display_sports();

        total = m1 + m2 + m3;
        result = (total)*weightage / 100;
        cout << "_____________________________________________________" << endl;
        cout << "Total marks = " << total << endl;
        cout << "Result = " << result << endl;
    }
};

int main()
{
    result r;
    r.getdata_result();
    r.display_result();

    return 0;
}
