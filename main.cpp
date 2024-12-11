#include <iostream>
using namespace std;

int main()
{
	int deck[52] = {1,2,3,4,5,6,0,8,9,10,0,10,10,1,2,3,4,5,6,0,8,9,10,0,10,10,1,2,3,4,5,6,0,8,9,10,0,10,10,1,2,3,4,5,6,0,8,9,10,0,10,10};
	int player = 1;
	int p1[5];
	int p2[5];
	int p3[5];
	int p4[5];
	
	int scores[4] = { 0 };

	int index = 0;

	// card distribution

	for (int i = 0; i < 5; i++)
	{
		p1[i] = deck[index];
		index++;
		p2[i] = deck[index];
		index++;
		p3[i] = deck[index];
		index++;
		p4[i] = deck[index];
		index++;
	}
	
	int open = deck[index];
	index++;

	// game simulation

	while (index < 52)
	{
		// finds the largest card
		if (player == 1)
		{
			int max = p1[0];
			int max_index = 0;
			for (int i = 0; i < 5; i++)
			{
				if (p1[i] > max)
				{
					max = p1[i];
					max_index = i;
				}
			}
			
			if (open < max)
			{
				swap(open, p1[max_index]);
			}
			else
			{
				open = deck[index];
				index++;
				if(max > open)
					swap(open, p1[max_index]);
			}

			player = 2;
		}
		else if (player == 2)
		{
			int max = p2[0];
			int max_index = 0;
			for (int i = 0; i < 5; i++)
			{
				if (p2[i] > max)
				{
					max = p2[i];
					max_index = i;
				}
			}

			if (open < max)
			{
				swap(open, p2[max_index]);
			}
			else
			{
				open = deck[index];
				index++;
				if (max > open)
					swap(open, p2[max_index]);
			}

			player = 3;
		}
		else if (player == 3)
		{
			int max = p3[0];
			int max_index = 0;
			for (int i = 0; i < 5; i++)
			{
				if (p3[i] > max)
				{
					max = p3[i];
					max_index = i;
				}
			}

			if (open < max)
			{
				swap(open, p3[max_index]);
			}
			else
			{
				open = deck[index];
				index++;
				if (max > open)
					swap(open, p3[max_index]);
			}

			player = 4;
		}
		else
		{
			int max = p4[0];
			int max_index = 0;
			for (int i = 0; i < 5; i++)
			{
				if (p4[i] > max)
				{
					max = p4[i];
					max_index = i;
				}
			}

			if (open < max)
			{
				swap(open, p4[max_index]);
			}
			else
			{
				open = deck[index];
				index++;
				if (max > open)
					swap(open, p4[max_index]);
			}

			player = 1;
		}
	}

	cout << "Player 1: ";
	for (int i = 0;i < 5; i++)
	{
		cout << p1[i] << " ";
	}
	cout << endl;
	cout << "Player 2: ";
	for (int i = 0;i < 5; i++)
	{
		cout << p2[i] << " ";
	}
	cout << endl;
	cout << "Player 3: ";
	for (int i = 0;i < 5; i++)
	{
		cout << p3[i] << " ";

	}
	cout << endl;
	cout << "Player 4: ";
	for (int i = 0;i < 5; i++)
	{
		cout << p4[i] << " ";

	}
	cout << endl << endl;
	
	for (int i = 0; i < 5; i++)
	{
		scores[0] += p1[i];
		scores[1] += p2[i];
		scores[2] += p3[i];
		scores[3] += p4[i];
	}

	for (int i = 0; i < 4; i++)
	{
		cout << "Player " << i + 1 << " score " << scores[i] << endl;
	}

	int small = scores[0];
	int s_index = 0;

	for (int i = 0; i < 4; i++)
	{
		if (scores[i] < small)
		{
			small = scores[i];
			s_index = i;
		}
	}

	cout << endl << "Player " << s_index + 1 << " wins" << endl;

	// made with hate by hamza and ahmed
	// comment from ahmed: DONT WORK WITH HAMZA >_<
	// comment from hamza: i dont use emojis, plus ahmed is gay
	// comment from ahmed: thats an emoticon idiot
	// comment from hamza: thats the same thing idiot
	// comment from ahmed: nuh uh
	// comment from hamza: ok
	// comment from ahmed: hamza said whoever asks for a cpp file is gay
	// comment from hamza: i never said that u vegan donut
	// comment from ahmed: no u also thats enough comments
	// comment from hamza: ok (abuzar mein ne nahi ye kaha tha ye ahmed ne likha tha, no bad feelings k)
	// comment from ahmed: comment from ahmed
	// comment from hamza: comment from joemama
	// comment from ahmed: its so sad steve jobs died of ligma
	// comment from hamza: sir looks like steve jobs ngl
	// comment from ahmed: ligma balls

	return 0;
}