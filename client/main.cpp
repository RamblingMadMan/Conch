#include <iostream>

#include "fmt/core.h"

int main(int argc, char *argv[]){
	fmt::print("conch v0.0.0\n");

	bool running = true;

	while(running){
		fmt::print("> ");
		std::string input;
		std::getline(std::cin, input);

		if(input == "quit")
			running = false;
	}
}
