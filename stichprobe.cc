#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;


int main() {
ifstream fin1("datensumme.txt");
ifstream fin2("datensumme.txt");
double summand = 0;


for(double n=1; n<=234; ++n) {
  double a_n;
  fin1 >> a_n;
  summand += a_n;
}
double mittelwert = summand/234;

cout << "Mittelwert = " << mittelwert << endl;

double sum = 0;


for(double n=1; n<=234; ++n) {
  double a_n;
  fin2 >> a_n;
  sum += (a_n-mittelwert)*(a_n-mittelwert);
}

double varianz = sum/234;

cout << "Varianz = " << varianz << endl;

double sigma = sqrt(varianz);

cout << "Standardabweichung = " << sigma << endl;

fin1.close();
fin2.close();
}
