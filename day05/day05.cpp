#include <iostream>

using namespace std;
/*
enum genre {
	Action=1,
	Comedy,
	Thriller=1001,
	Mystery,
	SiFi

};

enum lanuguage
{
	English=1,
	Hindi,
	Tamil,
	Telugu,
	Kannada,
	Marathi,
	Malayalam
};

int main()
{
	int inputLang;
	char typeShows[20];
	//char genre[20];
	int inputGenre;
	//display();
	cout << "Enter the language option: ";
	cin >> inputLang;
	switch (inputLang)
	{
	case English:
		cout << "You have choosen English " << endl;
		cout << "Enter the Genre: ";
		cin >> inputGenre;
		switch (inputGenre)
		{
		default:
			cout << "No Genre found" << endl;
			break;
		case Action:
			cout << "Choosed Genere : Action" << endl;
			break;
		case Comedy:
			cout << "Choosed Genere :  Comedy" << endl;
			break;
		case Thriller:
			cout << "Choosed Genere : Thriller" << endl;
			break;
		case Mystery:
			cout << "Choosed Genere : Mystery" << endl;
			break;
		

		}
		break;
	case Hindi:
		cout << "You have choosen Hindi " << endl;
		cout << "Enter the Genre: ";
		cin >> inputGenre;
		switch (inputGenre)
		{
		case Action:
			cout << "Choosed Genere : Action" << endl;
			break;
		case Comedy:
			cout << "Choosed Genere :  Comedy" << endl;
			break;
		case Thriller:
			cout << "Choosed Genere : Thriller" << endl;
			break;
		case Mystery:
			cout << "Choosed Genere : Mystery" << endl;
			break;
		default:
			cout << "No Genre found" << endl;

		}
		break;


	default:
		cout << "You have choosen wrong language" << endl;
		break;
	}

	
	
	cout << "End of filter" << endl;
	return 0;
}

*/

/*

if (cond1)
{
	st1
}
else if(cond2)
{
	st2
}
else if(cond3)
{
	st3
}
...
...
else
{
	default st
}
*/
/*
int main()
{
	int amtInHand;

	cout << "Enter the amount in hand: ";
	cin >> amtInHand;

	if (amtInHand < 10)
	{
		cout << "Please get more amount" << endl;
	}
	else if (amtInHand >= 10 and amtInHand <= 50)
	{
		cout << "I can order snacks" << endl;
	}
	else if (amtInHand > 50 and amtInHand <= 100)
	{
		cout << "I can order roti's" << endl;
	}
	else if (amtInHand > 100 and amtInHand < 500)
	{
		cout << "I can order for complete meals" << endl;
	}
	else
	{
		cout << "I can order anything" << endl;
	}

	cout << "End of Program" << endl;
	return 0;
}
*/

int main()
{
	string genre;
	cout << "Enter the Genre: ";
	cin >> genre;
	if (genre[0] >= 48 && genre[0] <= 57)
	{
		cout << "Genre Name can't start with numeric characters" << endl;
		return 0;
	}
	if (genre.compare("Action") == 0)
	{
		cout << "Selected genre is Action" << endl;
	}
	else if ((genre.compare("Comedy") == 0) || (genre.compare("comedy") == 0))
	{
		cout << "Selected genre is Comedy" << endl;
	}
	else if (genre.compare("Thriller") == 0)
	{
		cout << "Selected genre is Thriller" << endl;
	}
	else
	{
		cout << "Genre is not present" << endl;
	}
	cout << "End of Program" << endl;
	return 0;

}