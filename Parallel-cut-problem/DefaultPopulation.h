#pragma once
#include "BasePopulation.h"
#include "BaseUnit.h"
#include "BaseSettingsHolder.h"
#include <vector>
#include <iostream>
#include <algorithm>

class DefaultPopulation : BasePopulation {
public:
	DefaultPopulation(BaseSettingsHolder * settingsHolder);
	bool Step();
	void Mutate();
	void Sort();
	void Crossingover();
	bool CheckStop();
	void MpiSendUnit(int unitNumber, int destination, MPI_Comm communicator);
	void MpiReceiveUnit(int source, MPI_Comm communicator);
};
