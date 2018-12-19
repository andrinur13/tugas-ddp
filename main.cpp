#include <iostream>
#include <cstdlib>
using namespace std;

struct makanan {
    /*
    int nasi = 4000;
    int ayam = 6000;
    int rendang = 7000;
    int perkedel = 3000;
    int tahu = 2000;
    int tempe = 2000;
    int kikil = 4000;
    int telur_dadar = 3000;
    int telur_bulat = 2500;
    int kerupuk = 1000;
    int esteh = 3000;
    int esjeruk = 3000;
    int aires = 1000;
    int airputih = 0;
    */

    int menupilihan[14] = {
        4000, 6000, 7000, 3000, 2000, 2000, 4000, 3000, 2500, 1000, 3000, 3000, 1000, 0
    };

}mkn;

void menu() {
    awal:
    system("clear");
    cout << "===== KASIR RM. PADANG =====" << endl;
    cout << endl;
    cout << "1. Nasi" << endl;
    cout << "2. Ayam" << endl;
    cout << "3. Rendang" << endl;
    cout << "4. Perkedal" << endl;
    cout << "5. Tahu" << endl;
    cout << "6.  cin >> jumlah=1;Tempe" << endl;
    cout << "7. Kikil" << endl;
    cout << "8. Telur Dadar" << endl;
    cout << "9. Telur Bulat" << endl;
    cout << "10. Kerupuk" << endl;
    cout << "11. Es Teh" << endl;
    cout << "12. Es Jeruk" << endl;
    cout << "13. Air Es" << endl;
    cout << "14. Air Putih" << endl;
    cout << endl;
    cout << "0. -- Sudah --" << endl;

    bool sudah = false;
    int pilih;
    int total=0;
    int jumlah;
    int bayar;
    char ulang;

    while(!sudah) {
        cout << "makan : "; cin >> pilih;
        if(pilih == 0) {
            break;
        }
        total += mkn.menupilihan[(pilih-1)];
    }
    cout << endl;
    cout << "Total    : " << total << endl;
    cout << "Bayar    : "; cin >> bayar;
    cout << "Kembalian: " << bayar - total << endl;
    cout << endl;
    cout << "Ulangi ? "; cin >> ulang;
    if (ulang == 'y' || ulang == 'Y') {
        goto awal;
    }
}

void login() {
    string user, password;
    string userAuth = "admin";
    string passwordAuth = "admin";

    system("clear");

    login:
    cout << "===== KASIR RM. PADANG =====" << endl;
    cout << "User     : "; cin >> user;
    password:
    cout << "Password : "; cin >> password;

    if(user == userAuth) {
        if(password == passwordAuth) {
            menu();
        }
        else {
            cout << "Password salah!" << endl;
            goto password;
        }
    } else {
        cout << "User salah!" << endl;
        goto login;
    }
}

main() {
    cout << "===== KASIR RM. PADANG =====" << endl;
    cout << endl << endl;
    cout << "1. Login" << endl;
    cout << "2. Exit" << endl;
    cout << "3. History" << endl;
    cout << "Pilih : ";
    int pilih;
    cin >> pilih;

    switch(pilih) {
        case 1:
        login();
        break;

        case 2:
        system("exit");
        break;

        case 3:
        break;

    }
}