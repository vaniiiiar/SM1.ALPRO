#include <iostream>
using namespace std;

int main()
{
int A, B;
    
std :: cout << "Masukan Bilangan Ganjil :";
std :: cin >> A;

std :: cout << "Masukan Bilangan Genap :";
std :: cin >> B;

if (A % 2 !=0 && B % 2 == 0){
    std :: cout << "Benar," << A << "Bilangan Ganjil Dan" <<  B << "Bilangan Genap" << std :: endl;
} else if ( A % 2 == 0 && B % 2 !=0){
    std :: cout << "Maaf Salah," << A << "Bilangan Genap Dan " << B << "Bilangan Ganjil" << std :: endl;
} else if (A % 2 == 0){
    std :: cout << "Maaf Salah," << A << "Bilangan Genap";
}else if (B % 2 !=0){
    std::cout << "Maaf Salah" << B << "Bilangan Genap";

}


    return 0;
}
