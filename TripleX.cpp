#include <iostream>
#include <ctime>

// Useless :o
void ShowIntroduction()
{
	std::cout << "So, You gotta give me 3 numbers that match the following conditions\n" << std::endl;
}

// Containss the game loop and the logic of the minigame.
void PlayGame()
{
	ShowIntroduction();

	int CurrentDifficulty = 2;
	int const FinalDifficulty = 10;
	
	while(CurrentDifficulty <= FinalDifficulty) 
	{	
		// random seed depending on the time
		std::srand(std::time(nullptr));
		
		// we get 3 random numbers according to the actual difficulty.
		int Number1 = rand() % (CurrentDifficulty + 2) + CurrentDifficulty;
		int Number2 = rand() % (CurrentDifficulty + 2) + CurrentDifficulty;
		int Number3 = rand() % (CurrentDifficulty + 2) + CurrentDifficulty;

		int Sum = Number1+Number2+Number3;
		int Product = Number1*Number2*Number3;

		std::cout << "\nThe add-up has to be " 
			  << Sum << std::endl;

		std::cout << "The result of the multiplication must be to be " 
				<< Product << "\n(Your actual level is: " << CurrentDifficulty << ")\n\n";

		int PlayerN1, PlayerN2, PlayerN3;

		std::cout << "What numbers do you choose?" << std::endl << "1: ";
		std::cin >> PlayerN1;
		std::cout << "2: ";
		std::cin >> PlayerN2;
		std::cout << "3: ";
		std::cin >> PlayerN3;

		int PlayerSum = PlayerN1 + PlayerN2 + PlayerN3;
		int PlayerProduct = PlayerN1 * PlayerN2 * PlayerN3;

		if(PlayerSum == Sum && PlayerProduct == Product)
		{
			std::cout << std::endl << "You win! Congratulations, you know how to add and how to multiply, " 
					<< "you are a genius, why aren't you looking for the cure of CORONABAIIRUSSS???\n";

			CurrentDifficulty++;

			continue;
		}
		else
		{
			std::cout << "You lose you lose you lose you lose you lose you lose you lose you lose noob\n";
			return;
		}

	}

}

int main () 
{	
	PlayGame();
	return 0;
}