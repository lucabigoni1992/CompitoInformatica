#include <iostream>
#include <fstream>

#define nomefile "listaposti.txt"

#define NOMEfile "secondoFile.txt"

#define posto 20
struct porto {
	int numero;
	int lunghezzaposto;
	float costoAlGiorno;
	char nomeBarca[20];
};

void leggiPostiBarca(struct porto vet[], int* len);

void stampaPosti(struct porto vet[], int len);

void ordinaPerLunghezza(struct porto vet[], int len);

void ricercaPerPosto(struct porto vet[], int Posto, int len);

void ricercaPostiLiberiPerLunghezza(struct porto vet[], int lunghezzaRichiesta, int len);

void salvaSuSecondoFile(struct porto vet[], int len);

void aggiungiPostoBarca(struct porto vet[], int* len);