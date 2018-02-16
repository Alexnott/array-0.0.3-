#include "stdafx.h""
#include <iostream>
#include <sstream>
#include <conio.h>
int main()
{
	bool failure = false;
	int sum, maxsum;
	int numbers1[10];
	int numbers2[10];
	while (!failure) {
		for (std::string string; std::getline(std::cin, string); ) {
			std::istringstream stream(string);
			for (int i = 0; i < 10; ++i) {
				if (!(stream >> numbers1[i])) {
					failure = true;
					break;
				}
			}break;
		}
		if (failure) { break; }
		for (std::string string; std::getline(std::cin, string); ) {
			std::istringstream stream(string);
			for (int i = 0; i < 10; ++i) {
				if (!(stream >> numbers2[i])) {
					failure = true;
					break;
				}
			}break;
		}break;
	}
	if (failure) {
		std::cout << "An error has occured while reading numbers from line" << std::endl;
		return 0;
	}
	maxsum = numbers1[0]+numbers2[0] ;
	for (int i = 0; i <= 9; i++) {
		for(int j=i ;  j < 10; j++ ){
			sum = numbers1[i] + numbers2[j];
			if (sum > maxsum) maxsum = sum;
		}
	}
		std::cout << maxsum;
	_getch();
}
