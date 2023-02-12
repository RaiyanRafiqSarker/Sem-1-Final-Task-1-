#include <iostream>

using namespace std;

class customerDirectory

{
private:
    string cusFirstName ;
    string cusLastName ;
    string cusDoB ;
    string cusTelNum;
    string cusCountry ;
public :
    void setcusInfo (string first,string last,string dob,string tel,string con)
    {
        cusFirstName = first;
        cusLastName = last;
        cusDoB = dob;
        cusTelNum = tel;
        cusCountry = con;

    }

    void getCusInfo()
    {
        cout << "First Name:"<< cusFirstName << endl;
        cout << "Last Name:" << cusLastName << endl;
        cout << "DoB;" << cusDoB << endl;
        cout << "TelNum:" << cusTelNum << endl;
        cout << "Country:" << cusCountry << endl;
    }
};

int main()
{
    customerDirectory cus101;
    cus101.setcusInfo ("Nafisha", "Anzum", "18-11-2003", "01612****56", "Bangladesh");
    cus101.getCusInfo ();

    customerDirectory cus102;
    cus102.setcusInfo ("Raiyan", "Rafiq Sarker", "11-10-2003", "01789****09", "Bangladesh");
    cus102.getCusInfo ();

    return 0;
}
