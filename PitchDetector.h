#include <array>
#include <list>
#include "Constants.h"
class pitchDetector
{
private:	
	int sampleIndex;
	SAMPLE_ARRAY sampleArray;
	std::list<float> delayedSample;
	
public: 
	void addSample(float sample);
	void evaluatePitch();
	float autoCorrelation();
	void inline timeShift(int amnt);
	pitchDetector();

	

};