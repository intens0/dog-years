#include <iostream>
#include <conio.h>
int main()
{

	// Der Hund ist 8 Jahre alt.   int dog_age = 8;

	int dog_age = 8;
	int early_years = 21; // frühe hunde jahre (die ersten 2) = 21 menschen jahre.
	int later_years = 4;
	int human_years; // 

	later_years = (dog_age - 2) * 4;
	human_years = later_years + early_years;

	std::cout << "my name is doggo1337, I am" << " " << human_years << " years old in human years\n ";

	_getch();
	return 0;

}