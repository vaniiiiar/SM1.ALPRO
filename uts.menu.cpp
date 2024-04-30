#include <stdio.h> 
 
#include<iostream> 
 
using namespace std; 
 
int main (){ 
 
 cout << "Menu Makanan" << endl; 
 cout << "Mie Goreng [kode MIGR] = 25000" << endl; 
 cout << "Nasi Goreng [kode NSGR] = 22000" << endl; 
 cout << "Soto Ayam [kode STAY] = 20000" << endl; 
  
 cout << endl; 
  
 cout << "Tingkat Pedas" << endl; 
 cout << "Sangat Pedas [kode SP]" << endl; 
 cout << "Pedas [kode PS]" << endl; 
 cout << "Tidak Pedas [kode TP]" << endl; 
  
 cout << endl; 
  
 cout << "Menu Minuman" << endl; 
 cout << "Jus Mangga [kode JM] = 10000:" << endl; 
 cout << "Air Putih [kode AP] = 1000" << endl; 
 cout << "Kopi [kode KP] = 5000" << endl; 
  
 cout << endl; 
  
 cout << "Jenis Minuman" << endl; 
 cout << "Dingin [kode DG]" << endl; 
 cout << "Panas [kode PN]" << endl; 
 cout << "Hangat [kode HT]" << endl;   
  
 cout << endl; 
  
 int uangAndre = 100000; 
 int MIGR = 25000; 
 int NSGR = 22000; 
 int STAY = 20000; 
 int JM = 10000; 
 int AP = 1000; 
 int KP = 5000; 
 int total = 0; 
 int TotalMakanan, TotalMinuman; 
  
 string kodeMakanan, kodeMinuman; 
 string Makanan, Minuman; 
 string PesanTidak; 
  
 cout << "Apakah Ada Yang Ingin Di Pesan? (PesanTidak):"; 
 cin >> PesanTidak; 
 
 if(PesanTidak == "Pesan"){ 
 cout << "MASUKKAN Kode Makanan : "; 
 cin >> Makanan; 
 cout << "Input Total Pesanan: "; 
 cin >> TotalMakanan; 
         
        if(kodeMakanan == "MIGR"){ 
        Makanan = "MIE GORENG"; 
        total += MIGR*TotalMakanan; 
         
    }   else if(kodeMakanan == "NSGR"){ 
        Makanan = "Nasi Goreng"; 
        total += NSGR*TotalMakanan; 
         
    }   else if(kodeMakanan == "STAY"){ 
        Makanan = "Soto Ayam"; 
        total += STAY*TotalMakanan; 
          
             
    }   else { 
        std::cout << endl << "Mohon maaf ya, kode makanan yang kamu masukkan tidak tersedia" << endl; 
    } 
         
    } else if(PesanTidak == "Tidak"){ 
        cout<< endl; 
         
            } 
     
 cout << endl; 
  
 
   while(true){ 
        cout<< "Ingin Pesan Minum ? (PesanTidak) : "; 
        cin >> PesanTidak; 
         
    if(PesanTidak == "Pesan"){ 
        cout << "MASUKKAN KODE MINUMAN : "; 
        cin >> Minuman; 
        cout << "Input Total Pesanan : "; 
        cin >> TotalMinuman; 
     
        if(kodeMinuman == "JM"){ 
        Minuman = "Jus Mangga"; 
        total += JM*TotalMinuman; 
             
    }   else if(kodeMinuman == "AP"){ 
        Minuman = "Air Putih"; 
        total += AP*TotalMinuman; 
             
    }   else if(kodeMinuman == "KP"){ 
        Minuman = "Kopi"; 
        total += KP*TotalMinuman; 
                 
    }   else { 
        std::cout << endl << "Mohon maaf ya, kode yang di masukan tidak tersedia" << endl; 
    } 
     
    } else if(PesanTidak == "Tidak"){ 
        cout<< endl; 
             
            } 
    } 
     
    while(true){ 
    cout << "Pesanan Anda :" << endl << "Makanan : " << TotalMakanan << " " << Makanan << endl << "Minuman : " << TotalMinuman << " " << Minuman << endl << "DENGAN total HARGA RP. " << total << endl; 
    cout << "KETIK OK UNTUK MENGKONFIRMASI DAN MEMBAYAR PESANAN : "; 
    cin >> PesanTidak; 
        if(PesanTidak == "OK"){ 
            cout << endl; 
            
        } else { 
            cout<<endl; 
            continue; 
        } 
    } 
     
    if(total > uangAndre){ 
        cout << endl << "Mohon maaf ya, Nominal Yang Di Berikan Kurang" << std::endl; 
    } else { 
        cout << endl << "PEMBAYARAN BERHASIL, Dan Total Pembayaran Yang Harus Andre Bayar Sebesar Rp. " << total; 
        cout << endl << "Kembalian Yang Andre Peroleh Sebesar Rp. " << uangAndre - total << endl; 
    } 
     
     
    cout << endl; 
     
      
    cout << "TERIMA KASIH ATAS PESANANNYA!<3" << endl; 
 
    return 0; 
}
