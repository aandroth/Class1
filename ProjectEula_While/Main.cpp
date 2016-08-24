// Aaron Andrews
// aaron.andrews@students.aie.edu.au
// 8/23/16

#include <iostream>

int main()
{
	int sum = 0;
	int limit = 1000, int counter = 1;
	while (counter < limit)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
		{
			sum += counter;
		}
	}
	printf("%d\n", sum);
}
