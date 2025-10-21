#include <iostream>
int main(int argc, char* argv[]){
	unsigned int number;
        unsigned int sum = 0;
        unsigned int mult = 1;
	if (argc>1){
		char*number = argv[1];
		int index = 0;
		char ch;
		while( (ch = number[index] != '\0' && index <11 )){
			if ( ch >= '0' && ch <= '9'){
				sum += (ch-'0');
				mult *= (ch-'0');
			} else {
				std::cout << "wrong number" << argv[1] << " " << std::endl;
				return 1;
			}
		}
		std::cout << sum << ", " << mult << std::endl;
	} else {
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
}
