#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int nilaiAwal, nilaiPangkat;
	cout << "Inputkan Nilai Yang Ingin Dipangkatkan : ";
	cin >> nilaiAwal;getchar();
	cout << "Inputkan Nilai Pangkat : ";
	cin >> nilaiPangkat;getchar();
	cout << "Hasil Per Pangkatan : " << pow(nilaiAwal,nilaiPangkat) << endl;
	return 0;
}
