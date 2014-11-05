/**************************
*Ohjelman nimi:Harjoitus 10
*Tekijä:Ville Hakola
*lyhyt kuvaus
*Tee ohjelma, joka laskee syötetyistä kokonaisluvuista sekä positiivisten
*että negatiivisten kokonaislukujen osuuden. Lukujen syöttä lopetetaan
*syöttämällä luku 0.
*Versio:1.0
*PVM:10.10.2014
******************************/

#include <iostream>
#include <iomanip>
using namespace std;
int main()

{	
	
	cout << "Anna lukuja\n";
	cout << "Lopuksi anna 0\n";
	float pos = 0.00;
	float neg = 0.00;
	int luku;
	AB:
	cin >> luku;
	
	if (luku > 0)
	{(pos = pos + 1);
	goto AB; }

	if (luku < 0)
	{(neg = neg + 1);
	goto AB; }
	else
	{
		cout << "Syötit lukuja seuraavasti" << endl;
		cout << "Positiivisia: " << (int)pos << " kpl " << " positiivisia lukuja: " << (pos * 100) / (pos + neg) << "%" << endl;
		cout << "Negaatiivisia: " << (int)neg << " kpl " << " negatiivisia lukuja: " << (neg * 100) / (pos + neg) << "%" << endl;
		cout << "Lukuja Yhteensä: " << (int)neg + pos << " kpl Lukuja Yhteensä 100%" << endl;
		
		


	}
	

}