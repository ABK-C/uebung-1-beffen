#include<fstream>
#include<iostream>
using namespace std;

int main() {
  ifstream fin ("daten.txt");
  ofstream fout("datensumme.txt");
  int Z1;
  int Z2;
  for(int i=1; i<=234; ++i) {
    fin >> Z1 >> Z2;
    fout << Z1+ Z2 << endl;
  }
  fin.close();
  fout.close();
}
