// race.cpp
#include <iostream>
#include "horse.h"
#include "race.h"

Race::Race() {
	Horse h;

	for (horseNum = 0; horseNum < NUM_HORSES; horseNum++){
		h.init(horseNum, TRACK_LENGTH);
	} // end for
} // end constructor

void Race::start() {
	Horse h;
	bool keepGoing = true;
	while (keepGoing){
		for (horseNum = 0; horseNum < NUM_HORSES; horseNum++){
			h.advance();
			h.printLane();
			if (h.isWinner()){
				keepGoing = false;
			} // end if
		} // end for

		std::cout << "Press enter for another turn";
		std::cin.ignore();
	} // end while
} // end start

