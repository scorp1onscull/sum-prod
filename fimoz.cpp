#include <iostream>
int main(){
	unsigned int x;
	unsigned int sum = 0;
	unsigned int mult = 1;
	std::cin >> x;
	do{
		sum += x%10;
		mult *= x%10;
		x = x/10;
	}while (x > 0);
	std::cout << sum << ", " << mult << std::endl;
	return 0;
}
