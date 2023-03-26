#include <iostream>
#include "Polinom.h"
#include "NoSortedTable1.h"
int main()
{
    Polinom a ("-2XYZ-3XY+8X^2Z^3");
    Polinom b ("XYZ+3XY+9X^2Z");
    Polinom c= a+b;
    cout<<a.Point(1.0,1.0,1.0)<<endl;
    a.Print();cout <<endl;
    b.Print(); cout << endl;
    c.Print(); cout << endl;
    Polinom f=a*3;
    Polinom f2 = a * (-3);
    cout<<"f=   ";
    f.Print();
    cout<<endl;
    cout << "f2=   ";
    f2.Print();
    cout << endl;
    Polinom d = a - b;
    d.Print(); cout << endl;
    NoSortedTable1 <string,Polinom> A;
    A.Insert("a",a);
    A.Insert("b",b);
    A.Insert("c", c);
    A.Insert("c", c);
    A.Delete("b");
    /*struct TTableRec {
        string key;
        Polinom value;
    };*/
    /*vector <TTableRec> output = A.GiveTable();
    for (auto& elem : output) {
        cout<<elem.key<<"  ";elem.value.Print();
        cout<<endl;
    }*/
    A.Print();
}
