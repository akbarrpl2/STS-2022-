#include <iostream>
using namespace std;

main() {
 int nilai;
 char predikat;
 string keterangan;
 
 cout << " nilai anda  : 86 ";
 cin >> nilai;
 
 if (nilai > 100){
  cout << "nilai yang anda masukkan salah\n";
 }else if (nilai >= 92){
  predikat = 'A';
 }else if (nilai >= 86){
  predikat = 'AB';
 }else if (nilai >= 80){
  predikat = 'C';
 }else if (nilai <= 80){
  predikat = 'D';
 }else{
  cout << "nilai yang anda masukkan salah\n";
 }
 
 if (nilai >= 86){
  keterangan = "LULUS";
 }else{
 }
 cout << "Nilai Huruf : " << predikat << " , Ket. " << keterangan <<endl;
 
}