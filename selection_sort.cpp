#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int A[9]={10,2,100,50,35,25,70,65,85};
int n = sizeof(A)/sizeof(A[0]);

void choose();
void swap();
void show();
void ascending();
void descending();

//prosedur pilih
void choose(int choice){
    if(choice==1){
        ascending();
    }
    else if(choice==2){
        descending();
    }
    else{
        cout << "\n Have A Nice Day\n";
    }
}

void swap(int idx_min,int i){
    int help;
    help=A[i];
    A[i]=A[idx_min];
    A[idx_min]=help;
}
void show(){
    for (int i=0;i<n;i++){
        cout<<"["<<A[i]<<"] ";
    }
    cout<<endl;
}
void ascending(){
    int idx_min;
    int sequence = 1;
    for(int i = 0; i < n - 1; i++) {
        idx_min = i;
        for(int j = sequence; j < n; j++) {
            if(A[j] < A[idx_min]) {
                idx_min = j;
                if(A[i] != A[idx_min]) {
                        if(A[i] > A[idx_min]) {
                            swap(idx_min,i);
                            }
                }
            }
        }
        sequence = sequence + 1;
    }
    show();
}
void descending(){
    int idx_min;
    int sequence = 1;
    for(int i = 0; i < n - 1; i++) {
        idx_min = i;
        for(int j = sequence; j < n; j++) {
            if(A[j] > A[idx_min]) {
                idx_min = j;
                if(A[i] != A[idx_min]) {
                        if(A[i] < A[idx_min]) {
                            swap(idx_min,i);
                            }
                }
            }
        }
        sequence = sequence + 1;
    }
    show();
}
int main()
{
    int choice;
    cout<<"NAMA : LUTFI NUR ROHMAN"<<endl;
    cout<<"NPM : 2213025064"<<endl;
    do{
        cout<<endl;
        cout<<"MENGURUTKAN DATA METODE SELECTION SORT"<<endl;
        cout<<"**************************"<<endl;
        show();
        cout<<"1. Ascending"<<endl;
        cout<<"2. Descending"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"**************************"<<endl;
        cout<<"Inputkan Pilihan Anda : ";
        cin>>choice;
        cout << endl;
        choose(choice);
    } while(choice != 3);

    return 0;   
}
