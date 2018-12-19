#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

//InshaAllah final

struct makanan {

   string menumkn[14] = {
       "nasi", "ayam", "rendang", "perkedel", "tahu", "tempe", "kikil", "t.dadar", "t.bulat",
       "kerupuk", "es teh", "es jeruk", "air es", "air putih"
   };

    int menupilihan[14] = {
        4000, 6000, 7000, 3000, 2000, 2000, 4000, 3000, 2500, 1000, 3000, 3000, 1000, 0
    };

}mkn;

void menu();

void bayar() {
    awal:
    ofstream data;
    data.open("log.txt", ios::app);

    system("clear");
    cout << "========== KASIR RM. PADANG ==========" << endl;
    cout << endl;
    cout << "1. Nasi" << endl;
    cout << "2. Ayam" << endl;
    cout << "3. Rendang" << endl;
    cout << "4. Perkedal" << endl;
    cout << "5. Tahu" << endl;
    cout << "6. Tempe" << endl;
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

    bool sudah = true;
    int pilih;
    int total=0;
    int jumlah;
    int bayar;
    char ulang;

    data << "{" << endl;

    while(sudah) {
        cout << "makan : "; cin >> pilih;
        if(pilih == 0) {
            break;
        }
        total += mkn.menupilihan[(pilih-1)];
        data << mkn.menumkn[(pilih-1)] << " ------------ " << mkn.menupilihan[(pilih-1)] << endl;
    }

    data << endl;

    cout << endl;
    cout << "Total    : " << total << endl;
    cout << "Bayar    : "; cin >> bayar;
    cout << "Kembalian: " << bayar - total << endl;
    cout << endl;
    cout << "Ulangi ? "; cin >> ulang;

    data << "Total   : " << total << endl;
    data << "}" << endl << endl;

    data.close();

    if (ulang == 'y' || ulang == 'Y') {
        goto awal;
    } else if (ulang == 'n' || ulang == 'N') {
        menu();
    }

}

void menu() {
    system("clear");
    cout << "========== KASIR RM. PADANG ==========" << endl;
    cout << endl << endl;
    cout << "1. Bayar" << endl;
    cout << "2. Exit" << endl;
    cout << "Pilih : ";
    pilih:
    int pilih;
    cin >> pilih;

    switch(pilih) {
        case 1:
        bayar();
        break;

        case 2:
        system("clear");
        break;

        default:
        cout << "Salah Pilih" << endl;
        goto pilih;
    }
}

void login() {

    system("clear");

    string user, password;
    string userAuth = "admin";
    string passwordAuth = "admin";

    login:
    cout << "========== KASIR RM. PADANG ==========" << endl;
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

main(int argc, char const *argv[])
{
    login();
}
