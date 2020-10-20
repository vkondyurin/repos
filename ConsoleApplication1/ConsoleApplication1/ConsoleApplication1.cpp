
bool Game::IsVictory() const
{
	int i = 1;
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			if (row == size - 1 && col == size - 1)
			{
				if (Field_[row][col] != 0)
				{
					return false;
				}
			}
			else
			{
				if (Field_[row][col] != i++)
				{
					return false;
				}
			}
		}
	}
	
	return true;
}




//#include <random>


// подготовка генератора
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<int> dist(1, 15);

// генерация случайного числа
int i = dist(gen);