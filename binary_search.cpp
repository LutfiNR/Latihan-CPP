#include <iostream>

using namespace std;
void binary_search();
void choose();
void swap();
void bubble_sort();


void swap(int a,int b,int A[]){
    int help;
    help=A[b];
    A[b]=A[a];
    A[a]=help;
}



void bubble_sort(int n, int A[]){
    for (int i=1; i<n;i++){
        for (int j=n-1; j>=i;j--){
            if (A[j]<A[j-1]){
                swap(j,j-1,A);
            }
        }
    }
}

int binary_search(int A[],int left, int right, int key){
    if (right >= left) {
        int mid = left + (right - left) / 2;
        
        if (A[mid] == key)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (A[mid] > key)
            return binary_search(A, left, mid - 1, key);
 
        // Else the element can only be present
        // in right subarray
        return binary_search(A, mid + 1, right, key);
    }
    return -1;
}

void choose(int choice, int n, int A[]){
    if(choice==1){
        int key;
        bubble_sort(n,A);
        cout << "Masukan Data Yang Ingin Di Cari : ";
        cin >> key;
        int result = binary_search(A,0,n-1,key);
        (result==-1)
        ? cout << "\nTidak Ada"<<endl
        : cout << "\nData "<< key << " Ditemukan Pada Index "<<result<<endl;
    }
    else{
        cout << "\n Have A Nice Day\n";
    }
}

int main(){
    int A[10]={3, 25, 75, 5, 10, 1, 18, 50, 35, 25};
    int n = sizeof(A)/sizeof(A[0]);
    int choice;
    cout<<"NAMA : LUTFI NUR ROHMAN"<<endl;
    cout<<"NPM : 2213025064"<<endl;
    do{
        cout<<endl;
        cout<<"MENCARI DATA METODE BINARY"<<endl;
        cout<<"**************************"<<endl;
        cout<<"1. Cari Data"<<endl;
        cout<<"2. Exit"<<endl;
        cout<<"**************************"<<endl;
        cout<<"Inputkan Pilihan Anda : ";
        cin>>choice;
        cout << endl;
        choose(choice,n,A);
    } while(choice != 2);

    return 0;
}