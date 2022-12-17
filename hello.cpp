#include <iostream>

int main(){

	/* constants */
	const int seconds_per_hour = 3600; // Const turns the variable into a constant so it can not be modified later in the code. You must declare and initialize a constant at the same time.
	const double maxAllowedTemperature = 76.8;

	std::cout << maxAllowedTemperature <<std::endl;

	/* Data types */
	int number = 4; // integer. Whole numbers positive or negative
	double typeOfFloat = 2.3; // decimal numbers
	bool trueOrFalse = true; // boolean. True or false. comes out as 0 for false, 1 for true.
	std::string user_name = "Jeff"; // used for a string of characters must use "" double qoutes.
	char grade = 'A'; // Character. Can use '' single qoutes

	std::cout << grade << std::endl;

	/* Arrays */
	// Arrays are a collection of values that are related to each other and share the same data type
	double temperature_list[4]; // This is declaring an array that you can add to later
	double temperature_list2[4] = {34.3, 78.2, 28.4, 109.1}; // This is an initialized array

	for( int i = 0; i <= 3; i++){
		std::cout << temperature_list2[i] << std::endl;
	}
	std::cout << temperature_list2[2] << std::endl; // this will print out the 3rd item in the array because arrays start at 0



	return 0;

}
