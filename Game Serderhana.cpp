#include <iostream>
#include <string>
#include <locale.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>
using namespace std;

//preparasi
string username;
int dompet = 100000;
int taruhan;
int opsi[3]; //array
int pilihan;
int yesNo = 1;
//deklarasi prosedur
void uangKurang();
void inputTaruhan();
void generateOpsi();
void tampilkanOpsi();
void dompetAkhir();
//deklarasi fungsi
string winLose();
bool duplikat();

void inputTaruhan(){
	cout << "Masukan Taruhan Anda : ";
	cin >> taruhan;
    if (taruhan > dompet){
        uangKurang();
    }
}
void uangKurang(){
    cout << "Uang Anda Kurang Untuk Taruhan"<<endl;
    inputTaruhan();
}
bool duplikat(int value){   
    srand(time(NULL));
     for( int i = 0; i < 3; i ++){
          if( opsi[i] == value){
              return true;
          }
     }
     return false;
}
void generateOpsi(){
    srand(time(0));
    for (int i = 0; i < 3; i++)
    {
       int angka=rand()%9;
	   while(i !=0 && duplikat(angka)){
            angka =rand()%9;
        }
		opsi[i]=angka;
    }
    
}
void tampilkanOpsi(){
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1<< ") "<< opsi[i] <<  "\t";
    }
    cout << endl;
    
}
string winLose(){
	int terbesar = opsi[0];
	string result;
	for (int i = 0; i < 3; i++)
    {
        if(opsi[i]>terbesar) {
        terbesar = opsi[i];
        }
    }
	cout << "\nNilai Terbesar Adalah : " << terbesar<<endl;
	cout << "Pilihan Anda adalah : " << opsi[pilihan-1];
	if (opsi[pilihan-1] == terbesar){
		dompet = dompet + taruhan;
		result = "\nKamu Menang";

	}else{
		dompet = dompet - taruhan;
		result = "\nKamu Kalah";
	}
	return result;
}
int main()
{
    setlocale(LC_NUMERIC,"");

    cout << "\t\t\t-----------------" << endl;
    cout << "\t\t\t|  JUDI GEMING  |" << endl;
    cout << "\t\t\t|    by lutpi   |" << endl;
    cout << "\t\t\t-----------------" << endl;
    cout << endl;
    cout << "Masukan Username : ";
    getline(cin,username);
   	
   	while (yesNo){
		cout << "--------------------------------------------------------------------------------" << endl;
	    cout <<"    Username: " <<username<< "\t\t\tUang: Rp. "; printf("%'d\n", dompet);
	    cout << "--------------------------------------------------------------------------------" << endl;
		inputTaruhan();
		cout << "\nPilih Yang Menurut Anda Memiliki Nilai Terbesar" << endl;
	    cout << "1) *\t2) *\t3) *"<<endl;
	    cout << "\nMasukan Pilihan: ";
	    cin >> pilihan;
	    generateOpsi();
	    tampilkanOpsi();
	    cout << winLose();
	    cout << "\n--------------------------------------------------------------------------------" << endl;
	    cout <<"    Username: " <<username<< "\t\t\tUang: Rp. "; printf("%'d\n", dompet);
	    cout << "--------------------------------------------------------------------------------" << endl;
	    cout << "\nApakah Ingin Bermain Lagi?\n1) Ya\n2) Tidak" << endl;
	    cin >> yesNo;
        if (yesNo != 1){
            break;
        }
        
	}
}
