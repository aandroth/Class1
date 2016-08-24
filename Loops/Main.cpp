
// Aaron Andrews
// aaron.andrews@students.aie.edu.au
// 8/23/16

#include <iostream>

enum class chances {
	head = 10,
	body = 50,
	arm_left = 20,
	arm_right = 20,
	leg_left = 20,
	leg_right = 20
};

int main()
{
	for (int ii = 99; ii > 0; --ii)
	{
		printf("%d\n", ii);
	}

	// Modify the for loop to include 0 and include 100
	for (int ii = 100; ii >= 0; --ii)
	{
		printf("%d\n", ii);
	}

	// Modify the for loop to include 0 and not 100
	for (int ii = 99; ii >= 0; --ii)
	{
		printf("%d\n", ii);
	}

	// Modify the for loop to not include 0 and include 100
	for (int ii = 100; ii > 0; --ii)
	{
		printf("%d\n", ii);
	}

	// Modify the for loop to decrement by 2
	for (int ii = 100; ii > 0; ii-=2)
	{
		printf("%d\n", ii);
	}
}
