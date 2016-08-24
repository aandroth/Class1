
// Aaron Andrews
// aaron.andrews@students.aie.edu.au
// 8/23/16

#include <iostream>

int main()
{
	for (int ii = 0; ii < 100; ++ii)
	{
		if (ii % 3 != 0 && ii % 5 != 0)
		{
			printf("%d", ii);
		}
		else
		{
			if (ii % 3 == 0)
			{
				printf("Fizz");
			}
			if (ii % 5 == 0)
			{
				printf("Buzz");
			}
		}
		printf("\n");
	}
}
