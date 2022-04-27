#include <iostream>
using namespace std;

class Nilai {
	friend istream& operator>>(istream&, Nilai&);
  friend ostream& operator<<(ostream&, Nilai&);
  public : 
    void input();
    void proses();
    void output();
  private :
    string nama, matkul[100];
	  int nilai[100];
	  int min;
	  int max;
	  float rata,jum;
};

void Nilai::input(){
    cout<<"====== Program Input Nilai ======"<<endl;
    cout<<"Masukkan Nama Dosen : ";
    cin>>nama;
    for (int i=0; i<4; i++) {
		cout<<"Masukkan Mata Kuliah : ";
    	cin>>matkul[i];
    	cout<<"Masukkan Nilai : ";
    	cin>>nilai[i];
	}
};

void Nilai::proses(){
	max = nilai[0];
   for (int i=0; i<4; i++) {
   		if (nilai[i] > max) {
   			max = nilai[i];
		   }
  }
		min = nilai[0];
		for (int i=0; i<4; i++) {
			if (nilai[i] < min) {
				min = nilai[i];
			}
		} 
		for (int i=0; i<4; i++) {
			jum+=nilai[i];
		}
		rata = jum/4;
};

void Nilai::output(){
       cout<<"Nama Dosen : " <<nama <<endl;
       for (int i=0; i<4; i++) {
	       cout<<"Mata Kuliah : " <<matkul[i] <<endl;
	       cout<<"Nilai : " <<nilai[i] <<endl <<endl;
	     }
       cout <<"Nilai terkecil : " <<min << endl;
       cout <<"Nilai terbesar : " <<max << endl;
	     cout<<"Nilai Rata-rata = "<<rata<<endl;
};

int main(){
  Nilai run;
  run.input();
  cout<<endl<<endl;
  run.proses();
  cout<<endl<<endl;
  run.output();
  cout<<endl;
  return 0;
}