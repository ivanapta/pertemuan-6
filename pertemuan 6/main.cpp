#include <iostream>

using namespace std;

//funsgi prosedur untuk mencari dan mencetak nilain yang dicari
void CariDanCetak(int X, int arr[], int n) {
    bool isFound = false;

    //untuk perulangan dan pencetakan atau output dari perulangan
    for (int i = 0; i < n; i++) {
        if (X == arr[i] && X % 2 == 0) {
            cout << "Bilangan Genap  " << X << " ditemukan." << endl;
            isFound = true;
            //menggunakan break, jika bilangan sudah ditemukan maka akan berhenti melakukan perulangan
            break;
        }
    }
    //dan jika tidak ditemukan maka akan dicetak demikian
    if (!isFound) {
        cout << "Bilangan " << X << " tidak ditemukan " <<endl;
        cout << "karena nilai yang dimasukkan mungkin bukan bilangan genap atau tidak ada dalam bilangan yang ditentukan."<< endl;
    }
}

int main()
{
    //deklarasi atau pengenalan variable
    int X, arr[] = {2, 2, 3, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    //input
    cout << "Masukkan X yang dicari: ";
    cin >> X;

    //output, menggunakan pemanggilan fungsi diatas untuk mencetak
    CariDanCetak(X, arr, n);

return 0;

}
