#include <iostream>
#include <ctime>
/**
 * main - Prints a random number, positive, or negative, or zero.
 *
 * Return: Always (0).
*/
int main()
{
    int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

    if(n > 5)
    {
        std::cout<<n<<" is positive\n";
    }
    else if (n == 0)
    {
        std::cout<<n<<" is zero\n";
    }
    else
    {
        std::cout<<n<<" is negative\n";
    }
    return 0;
}