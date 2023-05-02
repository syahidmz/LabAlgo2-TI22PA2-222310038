#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Deklarasi fungsi untuk Bubble Sort
void bubbleSort(string arr[], int n);

int main() {
    int n;

    cout << "Masukkan jumlah buku: ";
    cin >> n;

    string judul[n];

    // Input judul buku
    for (int i = 0; i < n; i++) {
        cout << "Masukkan judul buku ke-" << i+1 << ": ";
        cin >> judul[i];
    }

    // Sorting judul buku secara ascending berdasarkan alfabet
    bubbleSort(judul, n);

    // Output judul buku yang sudah diurutkan
    cout << "\nJudul buku yang sudah diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << judul[i] << endl;
    }

    return 0;
}

// Implementasi Bubble Sort
void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}