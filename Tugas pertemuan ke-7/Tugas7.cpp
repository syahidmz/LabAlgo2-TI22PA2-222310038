#include <iostream>
#include <string>
using namespace std;

class DataMahasiswa {
    protected:
        string status_mahasiswa;
        string nama;
        int umur;
        string jurusan;
        string fakultas;
    public:
        DataMahasiswa(string status, string nma, int umr, string jrsn, string fklts) {
            status_mahasiswa = status;
            nama = nma;
            umur = umr;
            jurusan = jrsn;
            fakultas = fklts;
        }
        virtual void output() {
            cout << "Status Mahasiswa: " << status_mahasiswa << endl;
            cout << "Nama: " << nama << endl;
            cout << "Umur: " << umur << endl;
            cout << "Jurusan: " << jurusan << endl;
            cout << "Fakultas: " << fakultas << endl;
        }
};

class Alumni : public DataMahasiswa {
    private:
        int tahun_lulus;
        string pekerjaan;
    public:
        Alumni(string status, string nma, int umr, string jrsn, string fklts, int tl, string p) : DataMahasiswa(status, nma, umr, jrsn, fklts) {
            tahun_lulus = tl;
            pekerjaan = p;
        }
        void output() {
            cout << "Status Mahasiswa: " << status_mahasiswa << endl;
            cout << "Nama: " << nama << endl;
            cout << "Umur: " << umur << endl;
            cout << "Jurusan: " << jurusan << endl;
            cout << "Fakultas: " << fakultas << endl;
            cout << "Tahun Lulus: " << tahun_lulus << endl;
            cout << "Pekerjaan: " << pekerjaan << endl;
        }
};

int main() {
    DataMahasiswa *m[2];
    m[0] = new DataMahasiswa("Mahasiswa Aktif", "Syahid", 15, "Teknologi Informasi", "Informatika dan Pariwisata");
    m[1] = new Alumni("Alumni", "Ann", 25, "Pariwisata", "Informatika dan Pariwisata", 2019, "Dokter Hewan");

    cout << "Data Mahasiswa" << endl;
    for (int i = 0; i < 2; i++) {
        m[i]->output();
        cout << endl;
    }

    return 0;
}