#include <iostream>
#include <fstream>
#include <string>

#include <cstdlib>
#include <ctime>

int main()
{
    const std::string high_scores_filename = "new_high_scores.txt";

    std::cout << "Hi! Enter your name, please:" << std::endl;
	std::string user_name;
	std::cin >> user_name;

    const int max_value = 100;
    std::srand(std::time(nullptr));
    const int random_value = std::rand() % max_value;

    const int target_value = random_value;
	int current_value = 0;
	int attempt_count_run = 1;
	bool not_win = true;

    std::cout << "Enter your guess:" << std::endl;

	do
	{
		std::cin >> current_value;

		if (current_value < target_value)
		{
			attempt_count_run++;
			std::cout << "Less than " << current_value << std::endl;
		}
		else if (current_value > target_value)
		{
			attempt_count_run++;
			std::cout << "Greater than " << current_value << std::endl;
		}
		else
		{
			std::cout << "Congratulation! You win!" << std::endl;
			std::cout << "Attempts = " << attempt_count_run << std::endl;
			break;
		}

	} while (true);

    {
        std::ofstream out_file{high_scores_filename, std::ios_base::app};
		if (!out_file.is_open())
		{
			std::cout << "Failed to open file for write: " << high_scores_filename << "!" << std::endl;
			return -1;
		}

        out_file << user_name << ' ';
		out_file << attempt_count_run;
		out_file << std::endl;
	}

    {
		std::ifstream in_file{high_scores_filename};
		if (!in_file.is_open())
		{
			std::cout << "Failed to open file for read: " << high_scores_filename << "!" << std::endl;
			return -1;
		}

		std::cout << std::endl;
        std::cout << "High scores table:" << std::endl;
        while (true)
		{
			// Read the username first
			in_file >> user_name;
			// Read the high score next
			in_file >> attempt_count_run;
			// Ignore the end of line symbol
			in_file.ignore();

			if (in_file.fail())
			{
				break;
			}

			// Print the information to the screen
			std::cout << user_name << '\t' << attempt_count_run << std::endl;
		}
    }

    return 0;
}
