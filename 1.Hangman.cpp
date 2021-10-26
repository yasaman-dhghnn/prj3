#include <iostream>

using namespace std;

int main () 
{
	string words[4] = { "pr","vmp","lion","bandyt" };
	int random;
	char user_letter;

	srand(time(0));
	random = rand() % 4;

	string word = words[random];

	for (int i = 0; i < words[random].size(); i++)
	{
		cout << "_";
	}
	cout <<endl<< "kalame " << words[random].size() << " harfy?" << endl;
	system("pus");

	int Cond = 0;
	int Cond1 = 0;
	int Cond2 = word.size();	int lives = 12;

	string word1 = { "--------------" };

	while (Cond != Cond2)
	{
		system("CLS");
		cout << word1 << endl;
		cout << "pls enter your ltr" << endl;
		cin >> user_letter;
		user_letter = tolower(user_letter);

		Cond1 = 0;
		for (int i=0 ; i<words[random].size() ; i++) 
		{
			if(user_letter == word[i]) 
			{
				cout << "harf " << word[i] << " doroste!  " << i + 1 << " hast." << endl;
				Cond1 = 1;
				Cond += 1;
				word1[i] = user_letter;
			}
		}

		if (Cond1 == 0) 
		{
			if (lives > 0) 
			{
				lives -= 1;
				cout << "eshtebahe! va faghat " << lives << " jon dary." << endl;
			}
		}

		if(lives == 0)  
		{
			cout << "you lost! the word was "<< word <<"!"<< endl;
			break;
		}
		system("pus");

	} 

	if(Cond == Cond2) 
	{
		cout << "yuo wone! and  word is " << word << "!" << endl;
	}

	
	system("pus");
	return 0;
}
