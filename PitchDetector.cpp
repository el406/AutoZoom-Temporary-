#include "PitchDetector.h"

pitchDetector::pitchDetector()
{
	std::fill(sampleArray.begin(), sampleArray.end(), 0.0f);
	
}


void pitchDetector::addSample(float sample)
{
	if (sampleIndex == sampleSize - 1)
	{

	}
}

void pitchDetector::evaluatePitch()
{
}

float pitchDetector::autoCorrelation()
{
	return 0.0f;
}

void inline pitchDetector::timeShift(int amnt)
{
}


