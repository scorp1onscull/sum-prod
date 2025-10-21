#include <iostream>
int main(int argc, char* argv[]){
	unsigned int number;
        unsigned int sum = 0;
        unsigned int mult = 1;
	if (argc>1){
		char*number = argv[1];
		int index = 0;
		char ch;
		while( number[index] != '\0' ){
			if ( number[index] >= '0' && number[index] <= '9'){
				sum += number[index];
				mult *= number[index];
			} else {
				std::cout << "wrong number" << argv[1] << " " << std::endl;
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
