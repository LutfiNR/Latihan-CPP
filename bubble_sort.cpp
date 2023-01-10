#include <iostream>
#include <conio.h>
using namespace std;

//deklarasi
int A[9]={10,2,100,50,35,25,70,65,85};
int n = sizeof(A)/sizeof(A[0]);
void fungsi_milih();
void swap();
void show();
void ascending();
void descending();

//prosedur pilih
void fungsi_milih(int pilihan){//nama pilihan bisa di ganti teserah kalian
    if(pilihan==1){
        //ascending();
    }
    else if(pilihan==2){//jika milih 2 dia manggil fungsi descending
        //descending();
    }
    else if (pilihan == 3){//pilihan kalo mau exit
        cout << "\n Have A Nice Day\n";//yang di dalem tanda petik tterserah mau di ganti apa
    }
    else {
        cout << "\nmasukin angka yang ada pilihannya\n";//ini juga sama
    }
}

//swapping data
void swap(int a,int b){
    int help;
    help=A[b];
    A[b]=A[a];
    A[a]=help;
}

//menampilkan data
void show(){//nama fungsi show bisa di ganti teserah kalian tapi semuanya ikut di ganti yang ada show shownya
    for (int i=0;i<n;i++){
        cout<<"["<<A[i]<<"] ";//nampilin datanya
    }
    cout<<endl;
}

//sorting ascending
void ascending(){
    for (int i=1; i<n;i++){
        for (int j=n-1; j>=i;j--){
            if (A[j]<A[j-1]){
                swap(j,j-1);
            }
        }
    }
    cout<<"Hasil"<<endl;
    show();
}

//sorting descending
void descending(){
    for (int i=1; i<n;i++){
        for (int j=n-1; j>=i;j--){
            if (A[j]>A[j-1]){
                swap(j,j-1);
            }
        }
    }
    cout<<"Hasil"<<endl;
    show();
}

int main(){
    int choice;
    cout<<"NAMA : LUTFI NUR ROHMAN"<<endl;
    cout<<"NPM : 2213025064"<<endl;
    do{
        cout<<endl;
        cout<<"MENGURUTKAN DATA METODE BUBBLE SORT"<<endl;
        cout<<"**************************"<<endl;

        show();
        cout<<"1. Mengurutkan dengan Ascending"<<endl;
        cout<<"2. Mengurutkan dengan Descending"<<endl;
        cout<<"3. Exit" << endl;
        cout<<"**************************"<<endl;
        cout<<"Inputkan Pilihan Anda : ";
        cin>>choice;
        cout << endl;
        fungsi_milih(choice);
    } while(choice != 3);

    return 0; 
}//
