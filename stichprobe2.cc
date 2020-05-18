#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
	
	int main() {
	ifstream fin1("datensumme.txt");
	ifstream fin2("datensumme.txt");
	ofstream fout("mittelwerte.txt", ios::out);
	ofstream vout("varianzen.txt", ios::out);
	
	double Gesamtmittelwert=0;
	double Gesamtvarianz=0; 
	
	for(int n=1; n<=234/9; ++n) {
	double summ = 0;
	double sum = 0;
	
	  for(double m=1; m<=9; ++m) {
	  double a_m;
	  fin1 >> a_m;
	  summ += a_m;
	
	  }
	 
	double mittelwert = summ/9;
	fout << "Mittelwert = " << mittelwert << endl;
	
	for(double m=1; m<=9; ++m) {
	  double a_m;
	  fin2 >> a_m;
	  sum += (a_m-mittelwert)*(a_m-mittelwert);
	
	}
	
	double varianz = sum/9;
	
	vout << "Varianz = " << varianz << endl;
		
	Gesamtmittelwert += (mittelwert*9)/234;
	Gesamtvarianz += (varianz*9)/234;
	
  	}
	

	fout << "\nGesamtmittelwert: " << Gesamtmittelwert;
	vout << "\nGesamtvarianz: " << Gesamtvarianz;
	

	fin1.close();
	fin2.close();
	fout.close();
	vout.close();
	}
