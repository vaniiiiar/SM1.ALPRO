#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
    int Darah, Power, Ragen = 5, Spell = 3; 
    int DarahMusuh, Serangan; 
     
    string Karakter, Opsi, Pilihan, Jenis, Model; 
    string Nama, Mode, Senjata, Item, Skill; 
     
    string Next, Akibat; 
         
        cout << endl; 
        cout << " Silahkan Masukkan Namamu : "; 
        cin >> Nama; 
         
        while(true){ 
         
        cout << "\033[2J\033[1;1H"; 
         
        cout << endl; 
        cout << " Selamat Datang Di Dunia Perang " << Nama << endl; 
         
        cout << endl; 
        cout << "Ada Beberapa Level Yang Harus Kamu Pilih : " << endl; 
         
        cout << endl; 
        cout << " 1. Brawl " << endl; 
        cout << " 2. Mytic " << endl; 
        cout << " 3. Rank " << endl; 
         
        cout << endl; 
        cout << " Silihkan Pilih Level : "; 
        cin >>  Pilihan; 
         
        if (Pilihan == "1"){ 
            Mode = "Brawl"; 
            Darah = 300; 
            Power = 50; 
             
            DarahMusuh = 200; 
            Serangan = 30; 
             
            break; 
        } 
         
        else if (Pilihan == "2"){ 
            Mode = "Mytic"; 
            Darah = 250; 
            Power = 40; 
             
            DarahMusuh = 225; 
            Serangan = 35; 
             
            break; 
        } 
         
        else if (Pilihan == "3"){ 
            Mode = "Rank"; 
            Darah = 200; 
            Power = 30; 
             
            DarahMusuh = 250; 
            Serangan = 40; 
             
            break; 
        } 
         
        else{ 
         
        continue; 
        } 
         
    } 
 
    cout << " Level Yang Anda Pilih Adalah Level : " << Mode << endl; 
     
    cout << endl; 
    cout << " Ketik Apa Saja Untuk Melanjutkan Permainan : "; 
    cin >> Next; 
     
    while(true){ 
         
        cout << "\033[2J\033[1;1H"; 
        cout << endl;  
        cout << " ****************************************" << endl; 
        cout << "  TENTUKAN SALAH SATU KARAKTER BERIKUT : " << endl; 
        cout << " ****************************************" << endl; 
        cout << " ||     KARAKTER YANG TERSEDIA         ||" << endl; 
        cout << " ****************************************" << endl; 
        cout << " ||          1. LAYLA                  ||" << endl; 
        cout << " ||          2. MIYA                   ||" << endl;  
        cout << " ||          3. LANCELOT               ||" << endl; 
        cout << " ****************************************" << endl;    
         
        cout << " Silahkan Pilih Karakter Anda : "; 
        cin >> Karakter; 
         
        if (Karakter == "1"){ 
        Model = "LAYLA"; 
        break; 
        } 
         
        else if (Karakter == "2"){ 
        Model = "MIYA"; 
        break; 
        } 
         
        else if (Karakter == "3"){ 
        Model = "LANCELOT"; 
        break; 
        } 
         
        else{ 
        continue; 
        } 
         
    } 
         cout << " Anda Memilih " << Model << endl; 
     
    cout << endl; 
    cout << " Ketik Apa Saja Untuk Melanjutkan Permainan : "; 
    cin >> Next; 
    while (true){ 
       
      cout << "\033[2J\033[1;1H"; 
        cout << endl;  
        cout << " ****************************************" << endl; 
        cout << "        PILIH SENJATA TERBAIK ANDA : "     << endl; 
        cout << " ****************************************" << endl; 
        cout << " ||       SENJATA YANG TERSEDIA         ||" << endl; 
        cout << " ****************************************" << endl; 
        cout << " ||          1. SAMURAI                  ||" << endl; 
        cout << " ||          2. PANAH                  | ||" << endl; 
        cout << " ||          3. PISTOL                   ||" << endl; 
        cout << " ****************************************" << endl;     
         
        cout << " Silahkan Pilih Senjata Anda : "; 
        cin >> Senjata;
if (Senjata == "1"){ 
        Item = "SAMURAI"; 
        break; 
        } 
         
        else if (Senjata == "2"){ 
        Item = "PEMANAH"; 
break; 
        } 
         
        else if (Senjata == "3"){ 
        Item = "PISTOL"; 
        break; 
        } 
         
        else{ 
        continue; 
        } 
         
    } 
 
    cout << " Anda Memilih " << Item << endl; 
     
    cout << endl; 
    cout << " Ketik 0 Untuk Melanjutkan Permainan : "; 
    cin >> Next; 
     
    while (true){ 
       
      cout << "\033[2J\033[1;1H"; 
        cout << endl;  
        cout << " ****************************************" << endl; 
        cout << "        PILIH SPELL TERBAIK ANDA : "       << endl; 
        cout << " ****************************************" << endl; 
        cout << " ||        SPELL YANG TERSEDIA         ||" << endl; 
        cout << " ****************************************" << endl; 
        cout << " ||        1. NUKLIR                  ||" << endl; 
        cout << " ||        2. API                     ||" << endl;  
        cout << " ||        3. PETIR                   ||" << endl; 
        cout << " ****************************************" << endl;     
         
        cout << " Silahkan Pilih SPELL Anda : "; 
        cin >> Skill; 
         
        if (Skill == "1"){ 
        Jenis = "NUKLIR"; 
        break; 
        } 
         
        else if (Skill == "2"){ 
        Jenis = "API"; 
        break; 
        } 
         
        else if (Skill == "3"){ 
        Jenis = "PETIR"; 
        break; 
        } 
         
        else{ 
        continue; 
        } 
         
    } 
    cout << " SPELL YANG KAMU PILIH ADALAH : " << Jenis << endl; 
     
    cout << endl; 
    cout << " Ketik Apa Saja Untuk Melanjutkan Permainan : "; 
    cin >> Next; 
     
    while(true){ 
         
        cout << "\033[2J\033[1;1H"; 
         
        cout << endl; 
        cout << "" << Model << " MENGGUNAKAN SENJATA " << "" << Item << " DAN SPELL " << " " << Jenis << endl; 
        cout << "STATUS KESEHATAN " << Model << endl; 
        cout << "DARAH : " << Darah << endl; 
        cout << "POWER : " << Power << endl; 
         
        cout << endl; 
        cout << " Ketik Apa Saja Untuk Melanjutkan Permainan : "; 
        cin >> Next; 
                     
        Akibat = " MUSUH DATANG MENGHAMPIRI MU "; 
                 
        while(true){ 
            cout << "\033[2J\033[1;1H"; 
            cout << Akibat << endl; 
             
            cout << endl; 
            cout << " KAMU MEMPUNYAI DARAH = " << Darah << endl; 
            cout << " JUMLAH RAGEN MU = " << Ragen << endl; 
             
            cout << endl; 
            cout << " DARAH MUSUH = " << DarahMusuh << endl; 
             
            if(Darah <= 0){ 
            cout << endl; 
            Akibat = " YOU LOST AND WERE KILLED BY THE ENEMY "; 
            break; 
            } 
            else if (DarahMusuh <= 0){ 
                cout << endl; 
                cout << " YOU WIN, YOUR ENEMY HAS BEEN SLAIN"; 
            } 
            cout << endl; 
             
            cout << endl; 
            cout << " 1. SERANG" << endl; 
            cout << " 2. GUNAKAN RAGEN" << endl; 
             
            cout << endl; 
            cout << " MASUKKAN PILIHAN : "; 
            cin >> Pilihan; 
             
            if(Pilihan == "1"){ 
                Akibat = " MUSUH TERKENA SERANGANMU"; 
                Darah -= Serangan; 
                DarahMusuh -= Power; 
                continue; 
            } 
            else if(Pilihan == "2"){ 
                if(Ragen >= 1){ 
                Akibat = " BERHASIL MENYEMBUHKAN LUKA, DARAH MU BERTAMBAH"; 
                Ragen -= 1; 
                Darah += 50; 
                continue; 
                }    
                else if(Ragen < 1){ 
                Akibat = " RAGEN MU TELAH HABIS"; 
                continue; 
                } 
            else{ 
            continue; 
            } 
        }     
    } 
} 
    return 0; 
    }
