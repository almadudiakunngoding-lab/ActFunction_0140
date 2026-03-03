//liberary
#include <iostream>
using namespace std;

//deklarasi global
int p, l, luas;

//implementasi prosedur dan fungsi 
void input() {
    cout << "masukkan panjang  = ";
    cin >> p;
    cout << "masukkan lebar =  ";
    cin >> l;
}
int luaspersegi(){
    return p * l;
}

void output(){
    cout << "hasilnya = " << luaspersegi() << endl;
    cout << "terimakasih";
}
