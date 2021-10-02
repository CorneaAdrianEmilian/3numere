#include "celeMari.h"

void celeMaiMari(int arr[],int dimensiune)
{

	int indecsi[3] = { -1,-1,-1 };
	int nrMare = 0;
	int treiNumere[3];
	int primul = 0; int alDoilea=1;
	int n = dimensiune;
	for (int j = 0; j < 3; j++) 
	{
			alDoilea = primul + 1;

			for (int k = 0; k < 3; k++)
			{
				if (primul == indecsi[k]) {
					primul++;
					alDoilea++;
				}
			}
			nrMare = arr[primul];
		for(int i=0;i<(n-1);i++)
		{
			for (int y = 0; y < 3; y++)
			{
				if (alDoilea == indecsi[y]) {
					alDoilea++;
					//y = -1;
				}

			}
			if (alDoilea < n)
			{
	//aici schimbam  '>' '<' in functie de ce cautam: cele mai mari sau cele mai mici 3 numere
				if (nrMare < arr[alDoilea]) {
					nrMare = arr[alDoilea];

				}
			}
			alDoilea++;
		}
		treiNumere[j] = nrMare;
		for (int z = 0; z < n;z++)
		{
			if (arr[z] == nrMare) {
				indecsi[j] = z;
				break;
			}
		}
		
	}
	std::cout << treiNumere[0] << " " << treiNumere[1] << " " << treiNumere[2] << std::endl;
}