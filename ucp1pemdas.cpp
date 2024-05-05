//1. int,string,boolean

//2. prosedur : void namaprosedur(){} misalkan void input(){
//    cout << "Array elements are: ";
//    for (i = 0; i < n; i++)
//	  cout << arr[i] << " ";
//    cout << endl
//  }
//    fungsi : tipedata namafungsi(){} misalkan float penjumlahan(float a, float b)

//3.// int main(){
    // char pilihan;}

//4.// if (nNilai > 70 || nAbsen < 3) {
    // status = "lulus"; }
    // else {
    // status = "mengulang" }

//5.// struct DetailAlamat {
    //string desa;
	//string kota;
   //};
//6.
#include <iostream>
using namespace std;

void display() {
    cout << endl;
    cout << "Nama Kota" << endl;
    cout << "Tangerang" << endl; 
    cout << "Bekasi" << endl;
    cout << endl;
}

int main() {
    int TidakSehat = 0; 
    int Sehat = 1;
    string status;

    if (TidakSehat) {
        status = "Tangerang"; 
    }
    else { 
        status = "Bekasi";
    }
    cout << "Statusnya adalah " << status << endl;

    char  pilihan;
    do {
        display();
        cout << "Apakah ingin mengecek lagi ?";
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'Y');

    return 0;
}