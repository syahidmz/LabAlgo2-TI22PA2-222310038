#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#define MAX 1000

using namespace std;

int nomer[MAX];
int head=-1;
int tail=-1;

bool IsEmpty(){
   if(tail == -1){
       return true;
   }else{
       return false;
   }
}
bool IsFull(){
   if(tail == MAX-1){
       return true;
   }else{
       return false;
   }
}
void AntrianMasuk(int no){
    if (IsEmpty()){
        head=tail=0;
    }else {
        tail++;
    }
    nomer[tail]=no;
}
void AntrianKeluar(){
    if(IsEmpty()){
        cout<<"Antrian sudah kosong ! ";
        getchar();
    }else {
        for(int a=head;a<tail;a++){
            nomer[a]=nomer[a+1];
        }
        tail--;
        if(tail == -1){
            head = -1;
        }
    }
}
void Clear(){
     head=tail=-1;
}
void View(){
     if(IsEmpty()){
         cout<<"Antrian kosong ! ";

     }else {
         for(int a=head;a<=tail;a++){
              cout << "==============================="
                   << "\n >> No. Antri : [" << nomer[a] << "]"
                   << "\n==============================="<< endl;
         }
     }
}
int main(){
    int choose, p=1, urut;
    do{
        cout << "\n\n=====   MENU TICKETING   ===="
             << "\n==============================="
             << "\n|1. Tambah Pembeli            |"
             << "\n|2. Panggil Pembeli           |"
             << "\n|3. Lihat daftar Pembeli      |"
             << "\n|4. Format                    |"
             << "\n|5. Exit                      |"
             << "\n===============================";
        cout << "\nPilih Menu : "; cin >> choose;
        cout << "\n\n";
        if(choose == 1){
            if(IsFull()) {
                cout<<"Antrian sudah penuh, mohon tunggu beberapa saat lagi ";
            }
            else{
                urut=p;
                AntrianMasuk(urut);
                cout << "---------------------------------" << endl;
                cout << "|          NO. ANTRIAN          |" << endl;
                cout << "|               " << p << "              ||" << endl;
                cout << "---------------------------------" << endl;
                cout << "|       Silahkan Mengantri      |" << endl;
                cout << "|      Menunggu " << tail << " Antrian      ||" << endl;
                cout << "---------------------------------" << endl;
                p++;
            }
        }
        else if(choose == 2){
            cout << "=================================" << endl;
            cout << "No. Antri : [" << nomer[head] << "]";
            cout << "\n=================================" << endl;
            AntrianKeluar();
            cout << "Silahkan Dipanggil !" << endl;
        }
        else if(choose == 3){
            View();
        }
        else if(choose == 4){
            Clear();
            cout<<"Antrian dikosongkan ! ";
        }
        else if(choose == 5){
        }
        else{
            cout << "Masukan anda salah ! \n"<< endl;
        }
        getchar();
    }while(choose!=5);
}