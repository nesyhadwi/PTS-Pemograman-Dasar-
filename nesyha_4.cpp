#include <iostream>
using namespace std;

int main ()
{
    cout << "Kehadiran"<<endl;
    cout << "Masukan nilai Kehadiran= ";
    int nilai1;
    cin >> nilai1;
    
    cout << "Masukan nilai Tugas= ";
    int nilai2;
    cin >> nilai2;
    
    cout << "masukan nilai UTS=";
    int nilai3;
    cin >> nilai3;
    
    cout << "masukan nilai UAS=";
    int nilai4;
    cin >> nilai4;
    
    cout << "masukan angka=";
    int nilai5;
    cin >> nilai5;
    
    int hasil;
        hasil=(nilai1+nilai2+nilai3+nilai4)/nilai5;
        cout << "Hasil ="<< hasil;
   }