#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int tugas,mid,akhir,na;
	char g,pil;
	cout<<"Program Menentukan Nilai Akhir Mahasiswa\n\n";
	cout<<"Masukkan Nilai Tugas Mandiri\t     = ";
	cin>>tugas;
	cout<<"Masukkan Nilai Ujian Tengah Semester = ";
	cin>>mid;
	cout<<"Masukkan Nilai Ujian Akhir Semester  = ";
	cin>>akhir;
	cout<<endl;
	
	cout<<"****************************************"<<endl;
	na=(tugas*2/10)+(mid*3/10)+(akhir*5/10);
	cout<<"Nilai Tugas Mandiri Anda\t = "<<tugas<<endl;
	cout<<"Nilai Tengah Semester Anda\t = "<<mid<<endl;
	cout<<"Nilai Akhir Semester Anda\t = "<<akhir<<endl;
	cout<<"Nilai Akhir Anda\t\t = "<<na<<endl;
	
	if (na<=100 && na>=85) {
	cout<<"Grade Anda\t\t\t = A";
	
	}else if (na<=84 && na>=75) {
	cout<<"Grade Anda\t\t\t = B";
	
	}else if (na<=74 && na>=65) {
    cout<<"Grade Anda\t\t\t = C";
	
	}else if (na<=64 && na>=50) {
	cout<<"Grade Anda\t\t\t = D";
	
	}else if (na<=49 && na>=0) {
	cout<<"Grade Anda\t\t\t = E";
	}
	
    getch();
}
