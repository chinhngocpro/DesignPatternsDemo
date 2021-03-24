#include "Server.h"

void Server::RegisterTask(Task* task)
{
	if (task != NULL) {
		tasks.push_back(task);
	}
}

void Server::ClearTasks() {
	tasks.clear();
}

void Server::DoAnythingThenRunAllTask() {
	cout << "Server Task" << endl;
	for (Task* var : tasks)
	{
		var->Run();
	}
	ClearTasks();
}

void Server::DoAnythingThenRunOneTask(Task* task) {
	cout << "Server Task 2" << endl;
	if (task != NULL) {
		task->Run();
	}
}

