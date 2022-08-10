#include "funzioni.h"
#include <iostream>
#include <fstream>
using namespace std;

void leggiPostiBarca(struct porto vet[], int* len)
{
	int i = 0;
	ifstream fin(nomefile);
	while (fin >> vet[i].numero >> vet[i].lunghezzaposto >> vet[i].costoAlGiorno >> vet[i].nomeBarca)
	{
		i++;
	}
	fin.close();
	*len = i;
}

void stampaPosti(struct porto vet[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << vet[i].numero << "/" << vet[i].lunghezzaposto << "/" << vet[i].costoAlGiorno << "/" << vet[i].nomeBarca << endl;
	}
}

void ordinaPerLunghezza(struct porto vet[], int len)
{
	int n1 = 0;
	for (int j= 0; j< len - 1; j++)//si deve ripetere per ogni elmento
	{
		for (int i = 0; i < len - 1; i++)//a ogni giro interno si va a posizionare un solo elemento
		{
			if (vet[i].lunghezzaposto > vet[i + 1].lunghezzaposto) {
				n1 = vet[i].lunghezzaposto;
				vet[i].lunghezzaposto = vet[i + 1].lunghezzaposto;
				vet[i + 1].lunghezzaposto = n1;
			}
		}
	}
}

void ricercaPerPosto(struct porto vet[], int Posto, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (vet[i].numero == Posto) {
			cout << "il posto che cerchi ha il numero: " << vet[i].numero << endl << " e' lungo " << vet[i].lunghezzaposto << " metri" << endl << " costa  " << vet[i].costoAlGiorno << " euro al giorno " << endl << " e il nome della barca e' " << vet[i].nomeBarca << endl;
			return;
		}
	}
	cout << "Barca non trovata" << endl;
}

void ricercaPostiLiberiPerLunghezza(struct porto vet[], int lunghezzaRichiesta, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (vet[i].lunghezzaposto >= lunghezzaRichiesta && strcmp("*", vet[i].nomeBarca) == 0)
		{
			cout << "la lunghezza e' di: " << vet[i].lunghezzaposto << endl;
			cout << "il numero del posto e': " << vet[i].numero << endl;
			cout << "il posto costa: " << vet[i].costoAlGiorno << " euro al giorno" << endl;

		}
	}
}

void salvaSuSecondoFile(struct porto vet[], int len)
{
	ofstream fout(NOMEfile);
	for (int i = 0; i < len; i++)
	{
		fout << vet[i].numero<<" ";
		fout << vet[i].lunghezzaposto << " ";
		fout << vet[i].costoAlGiorno << " ";
		fout << vet[i].nomeBarca << endl;
	}
	fout.close();
}

void aggiungiPostoBarca(struct porto vet[], int* len)
{
	ofstream fin(nomefile);
	for (int i = 0; i < *len; i++)
	{
		fin << vet[i].numero << " ";
		fin << vet[i].lunghezzaposto << " ";
		fin << vet[i].costoAlGiorno << " ";
		fin << vet[i].nomeBarca << endl;
	}
	fin.close();
}