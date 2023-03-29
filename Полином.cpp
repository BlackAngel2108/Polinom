#include <iostream>
#include "Polinom.h"
#include "NoSortedTable1.h"
#include "NoSortedTable2.h"
#include "SortedTable.h"
#include "HashTable1.h"
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
    f=a+2.1;
    cout << "f4=   ";
    f.Print();
    f = a - 2.1;
    cout << "f5=   ";
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
    Polinom* pa= A.Find("a");
    pa->Print();
    cout<<endl;
    cout << "Table";
    cout << endl;
    vector<string> temp=A.GiveTable();
    for (auto& elem:temp) {
        cout<<elem;
    }
    cout<<"end of Table";
    cout << endl;
    NoSortedTable2 <string, Polinom> B;
    B.Insert ("a",a);
    B.Insert("b", b);
    B.Insert("c", c);
    B.Insert("c", c);
    B.Delete("b");
    B.Print();
    Polinom* pb = B.Find("a");
    pb->Print();
    cout << endl;
    cout << endl;
    SortedTable <string, Polinom> C;
    C.Insert("a", a);
    C.Insert("b", b);
    C.Insert("c", c);
    C.Insert("c", c);
    C.Delete("b");
    C.Print();
    Polinom* pc = C.Find("a");
    pc->Print();
    cout << endl;
    cout << endl;
    HashTable1 <string, Polinom> D;
    D.Insert("a", a);
    D.Insert("a", a);
    D.Insert("b", b);
    D.Insert("c", c);
    D.Insert("c", c);
    D.Delete("b");
    D.Print();
    Polinom* pd = D.Find("a");
    pd->Print();
    
}
