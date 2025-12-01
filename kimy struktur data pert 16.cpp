#include <iostream>
#include <iomanip>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    int langkah = 1;

    cout << "\n===============================================================\n";
    cout << "Langkah| KIRI   |  TENGAH |  KANAN  |  arr[mid]   |   Arah\n";
    cout << "===============================================================\n";

    while (left <= right) {
        int mid = (left + right) / 2;

        cout << setw(6) << langkah << " | ";
        cout << setw(6) << left  << " | ";
        cout << setw(6) << mid   << " | ";
        cout << setw(7) << right << " | ";
        cout << setw(9) << arr[mid] << "  | ";

        if (arr[mid] == key) {
            cout << "Ditemukan\n";
            cout << "===============================================================\n";
            cout << "\nHasil: Angka " << key 
                 << " ditemukan pada indeks ke-" << mid 
                 << " setelah " << langkah << " langkah.\n";
            return mid;
        }

        if (arr[mid] < key) {
            cout << "Geser Kanan\n";
            left = mid + 1;
        } else {
            cout << "Geser Kiri\n";
            right = mid - 1;
        }

        langkah++;
    }

    cout << "===============================================================\n";
    cout << "\nHasil: Angka " << key << " TIDAK ditemukan!\n";
    return -1;
}

int main() {
    int data[] = {4, 9, 11, 16, 18, 21, 30, 33, 40, 45};
    int n = sizeof(data) / sizeof(data[0]);
    int cari;

    cout << "==============================\n";
    cout << "      KIMY EKA ARDIANSYAH     \n";
    cout << "==============================\n";

    cout << "Data array: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    cout << "\n------------------------------\n";
    cout << "Masukkan angka yang dicari: ";
    cin >> cari;

    binarySearch(data, n, cari);

    return 0;
}

