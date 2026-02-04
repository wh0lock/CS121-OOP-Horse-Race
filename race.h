// race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

class Race {
	private:
		const static int NUM_HORSES = 5;
		const int TRACK_LENGTH = 15;
		int horseNum;
	public:
		Race();
		int horses[];
		void start();
};

#endif
