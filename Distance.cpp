#include "Distance.h"

Distance::Distance(vector<double> list)
{
	tally = list;
}

double Distance::getDistance()
{
	return distance;
}
vector<double> Distance::getTally() 
{
	return tally;
}

void Distance::setDistance(double spance)
{
	distance = spance;
}
void Distance::setTally(vector<double> list)
{
	tally = list;
}


double Distance::calcMean(vector<double> list)
{
	double temp = 0.0;

	for(int i=0; i<list.size(); i++)
	{
		temp = list[i] + temp;
	}
	temp = temp / list.size();

	return temp;
}