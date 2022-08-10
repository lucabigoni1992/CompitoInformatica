#include "funzioni.h"
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	int len = 0;
	struct porto vet[posto];
	int risposta = -1;
	int Posto = 0;
	int lunghezzaRichiesta = 0;
	struct porto nuovo;
	while (risposta != 0)
	{
		cout << "Premi 0 per terminare il programma" << endl;
		cout << "Premi 1 per leggere tutti i posti dal file" << endl;
		cout << "Premi 2 per stampare i posti" << endl;
		cout << "Premi 3 per ordinare i posti per lunghezza" << endl;
		cout << "Premi 4 per ricercare un posto" << endl;
		cout << "Premi 5 per ricercare i posti liberi per la tua lunghezza richiesta" << endl;
		cout << "Premi 6 per salvare la lista su un secondo file" << endl;
		cout << "Premi 7 per aggiungere un posto alla lista" << endl;
		cin >> risposta;
		switch (risposta)
		{
		case 0: return 0;
		case 1: leggiPostiBarca(vet, &len);
			break;
		case 2: stampaPosti(vet, len);
			break;
		case 3: ordinaPerLunghezza(vet, len);
			break;
		case 4:
			cout << "che posto vuoi cercare" << endl;
			cin >> Posto;
			ricercaPerPosto(vet, Posto, len);
			break;
		case 5:
			cout << "quanto deve essere la lunghezza minima?" << endl;
			cin >> lunghezzaRichiesta;
			ricercaPostiLiberiPerLunghezza(vet, lunghezzaRichiesta, len);
			break;
		case 6: salvaSuSecondoFile(vet, len);
			break;
		case 7: 

			cout << "Inserisci costo al giorno del nuovo posto barca" << endl;
			cin >> nuovo.costoAlGiorno;
			cout << "Inserisci la lunghezza del nuovo posto barca" << endl;
			cin >> nuovo.lunghezzaposto;
			cout << "Inserisci Nome della barca (* se non si conosce) del nuovo posto barca" << endl;
			cin >> nuovo.nomeBarca;
			cout << "Inserisci numero del nuovo posto barca" << endl;
			cin >> nuovo.numero;
			vet[len ] = nuovo;
			len++;
			aggiungiPostoBarca(vet,  &len);
			break;

		}
	}
}

