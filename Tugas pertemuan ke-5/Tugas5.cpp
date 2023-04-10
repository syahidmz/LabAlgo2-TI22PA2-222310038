#include <iostream>
#include <string>
using namespace std;

class Perpustakaan{
  private:
    string pinjam;
    string kembali;

  public:
    void setPinjam(string n){
      pinjam = n;
    }
    void setKembali(string s){
      kembali = s;
    }
    string getPinjam(){
      return pinjam;
    }
    string getKembali(){
      return kembali;
    }
};

int main(){
  Perpustakaan buku;
  buku.setPinjam(" The Silmarillion by J.R.R. Tolkien dipinjam oleh ");
  buku.setKembali(" The Silmarillion by J.R.R. Tolkien telah dikembalikan oleh ");
  cout << "Buku: " << buku.getPinjam() << "Anto" <<endl;
  cout << "Buku: " << buku.getKembali() << "Anto" << endl;

  return 0;
}