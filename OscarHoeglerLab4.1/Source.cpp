/*Oscar Hogler, September 15 2022, Laboratory 4.1
 *OscarHoeglerLab4.1.cpp, Take int temperature and return wether liquid would be solid liquid or gas */

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	//intializes the variables
	int temperature,state=0;
	string system,outputState;
	//gets the infor required
	cout << "What is your integer temperature?"; cin >> temperature >> system;
	//checks if it is celcius, then changes state for knowing what state it is in
	if (system == "C") {
		if (temperature < 0) { state--;}
		if (temperature <= 0) { state--;}
		if (temperature >= 100) { state++;}
		if (temperature > 100) { state++;}
	}
	if (system == "F") {
		if (temperature < 32) { state--; }
		if (temperature <= 32) { state--; }
		if (temperature >= 212) { state++; }
		if (temperature > 212) { state++; }
	}
	//if the state is
	//-2 it is froze
	//-1 it is both froze and liquid
	//0 it is liquid
	//1 it is both gas and liquid
	//2 it is gas
	if (state == 0) {
		outputState = "liquid";
	}
	else if (state > 0) {
		outputState = state == 1 ? "liquid and gas" : "gas";
	}
	else {
		outputState = state == -1 ? "liquid and solid" : "solid";
	}
	cout << "Your water is in the state of " << outputState;
}