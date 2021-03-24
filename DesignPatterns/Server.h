#pragma once
#include <vector>
#include "Task.h"
#include <iostream>

using namespace std;

class Server
{
	vector<Task*> tasks;

public:
	void RegisterTask(Task* task);
	void ClearTasks();
	void DoAnythingThenRunAllTask();


	void DoAnythingThenRunOneTask(Task* task);
};

