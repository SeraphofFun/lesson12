#include <iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	int min = -20;
	int max = 20;
	int mass1[5][5];
	int top = 0;
	cout << "tap1" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int random = min + rand() % (max - min + 1);
			mass1[i][j] = random;
			top += random;
		}

	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << mass1[i][j] << " ";
		}
		cout << endl;

	}
	cout << endl;
	cout << "cemi =" << top;
	cout << endl << endl << endl;


	min = -20;
	max = 20;
	int mass2[5][5];
	top = 0;
	int topesas = 0;
	int topeks = 0;
	cout << "tap2" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int random = min + rand() % (max - min + 1);
			mass2[i][j] = random;
			if (i == j)
			{
				top += random;
				topesas += random;
			}
			else if (i == 4 - j) {
				top += random;
				topeks += random;
			}

		}

	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << mass2[i][j] << " ";
		}
		cout << endl;

	}
	cout << endl;
	cout << "esas diaqonal cemi =" << topesas << endl;
	cout << "eks diaqonal cemi =" << topeks << endl;
	cout << "cemi =" << top;
	cout << endl << endl << endl;



	min = -100;
	max = 100;
	int mass3[5][5];
	int mini;
	int maxi;
	cout << "tap3" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int random = min + rand() % (max - min + 1);
			mass3[i][j] = random;
		}

	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == 0 && j == 0)
			{
				mini = mass3[i][j];
				maxi = mass3[i][j];

			}
			if (mass3[i][j] > maxi)
			{
				maxi = mass3[i][j];
			}
			if (mass3[i][j] < mini)
			{
				mini = mass3[i][j];
			}
		}

	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << mass3[i][j] << " ";
		}
		cout << endl;

	}
	cout << endl;
	cout << "minimum =" << mini;
	cout << "maksimum =" << maxi;
	cout << endl << endl << endl;




	min = -100;
	max = 100;
	int mass4[5][5];
	int menfi = 0;
	int musbet = 0;
	int sifir = 0;
	cout << "tap4" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int random = min + rand() % (max - min + 1);
			mass4[i][j] = random;
			if (random < 0)
			{
				menfi++;
			}
			else if (random > 0) {
				musbet++;
			}
			else
			{
				sifir++;
			}
		}

	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << mass4[i][j] << " ";
		}
		cout << endl;

	}
	cout << endl;
	cout << "sifir =" << sifir << endl;
	cout << "musbet =" << musbet << endl;
	cout << "menfi =" << menfi << endl;
	cout << endl << endl << endl;




	min = 0;
	max = 20;
	int mass5[5][5];
	int setir[5] = { 0, 0, 0, 0, 0 };
	cout << "tap5" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int random = min + rand() % (max - min + 1);
			mass5[i][j] = random;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << mass5[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			setir[i] += mass5[i][j];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "cemi" << i << "ci setir" << setir[i] << endl;
	}
	cout << endl << endl << endl;






	min = 0;
	max = 20;
	int mass6[5][5];
	int sutun[5] = { 0, 0, 0, 0, 0 };
	cout << "tap6" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int random = min + rand() % (max - min + 1);
			mass6[i][j] = random;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << mass6[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			sutun[i] += mass6[j][i];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "cemi" << i << "ci sutun" << sutun[i] << endl;
	}
	cout << endl << endl << endl;
	



	min = -10;
	max = 40;
	int mass7[5][5];

	cout << "tap7" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int random = min + rand() % (max - min + 1);
			mass7[i][j] = random;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << mass7[i][j] << " ";
		}
		cout << endl;
	}


	for (int i = 0; i < 5; i++)
	{
		bool y = true;
		for (int j = 0; j < 5; j++)
		{
			if (mass7[i][j]<0)
			{
				y = false;
				break;
			}
		}
		if (y==true)
		{
			int cem =0;
			for (int j = 0; j < 5; j++) {
				cem += mass7[i][j];
			}
			cout << i << "ci setir cemi" << cem << endl;
		}
	}
	cout << endl<<endl<<endl;



	min = -10;
	max = 40;
	int mass8[7][8];

	cout << "tap8" << endl;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			mass8[i][j] = i * 10 + j;
		}

	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cout << mass8[i][j] << " ";
		}
		cout << endl;
	}



	min = -20;
	max = 40;
	int mass9[8][10];
	int bos;
	cout << "tap9" << endl;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			int random = min + rand() % (max - min + 1);
			mass9[i][j] = random;
		}

	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << mass9[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl<<endl<<endl;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			bos = mass9[i][j];
			mass9[i][j] = mass9[i][9 - j];
			mass9[i][9 - j] = bos;
		}
		
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << mass9[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << endl;
	cout << endl << endl;



	min = -20;
	max = 40;
	int mass10[6][6];
	bos = 0;
	cout << "tap10" << endl;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			int random = min + rand() % (max - min + 1);
			mass10[i][j] = random;
		}

	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << mass10[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl<<endl;
	
	for (int j = 0; j < 6; j++)
	{
		for (int i = 0; i < 6; i++)
		{
			if (i == 0) {
				bos = mass10[0][j];
			}
			if (i == 5) {
				mass10[i][j] = bos;

			}
			else
				mass10[i][j] = mass10[i+1][j];
			
		}

	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << mass10[i][j] << " ";
		}
		cout << endl;
	}
}
