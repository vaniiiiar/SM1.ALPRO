#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
    int Kode; 
    int Jumlah; 
    int A = 100000; 
    int B = 200000; 
    int C = 300000; 
    int Total = 0; 
    int Potongan; 
    string Tiket; 
    string Nama; 
     
    cout << " Pemesenan Tiket Kereta Api " << endl; 
    cout << " ========================== " << endl; 
    cout << " (KODE = 1) EKONOMI = RP 100.000" << endl;  
    cout << " (KODE = 2) BISNIS = RP 200.000" << endl;  
    cout << " (KODE = 3) EKSEKUTIF = RP 300.000" << endl;  
     
    cout << endl; 
     
    cout << "Pesanan Atas Nama : "; 
    cin >> Nama; 
    cout << endl; 
     
    cout << "Masukan Kode Tiket Kereta : " ; 
    cin >> Kode; 
    cout << endl; 
     
    cout << "Masukan Jumlah Tiket Kereta : " ; 
    cin >> Jumlah; 
    cout << endl; 
     
    switch (Kode){ 
        case 1 : 
        Tiket = "EKONOMI"; 
        Total += A * Jumlah; 
        break; 
         
        case 2 : 
        Tiket = "BISNIS"; 
        Total += B * Jumlah; 
        break; 
         
        case 3 : 
        Tiket = "EKSEKUTIF"; 
        Total += C * Jumlah; 
        break; 
    } 
     
    cout << "Pesanan Atas Nama "<< Nama << " Dengan Jumlah " << Jumlah << " Tiket " << Tiket << " Dengan Total Harga Rp " << Total << endl; 
    cout << endl; 
     
    if (Total >= 500000){ 
        Potongan = Total * 90/100; 
        cout << "Selamat Anda Mendapatkan Diskon 10%, Dengan Total Harga Rp " << Potongan; 
    } 
    else if (Total >= 300000){ 
        Potongan = Total * 95/100; 
        cout << "Selamat Anda Mendapatkan Diskon 5%, Dengan Total Harga Rp " << Potongan; 
    } 
    else if (Total >= 200000){ 
        Potongan = Total * 98/100; 
        cout << "Selamat Anda Mendapatkan Diskon 2%, Dengan Total Harga Rp " << Potongan; 
    } 
 
    return 0; 
}
