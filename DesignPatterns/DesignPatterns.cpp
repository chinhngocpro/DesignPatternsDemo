// DesignPatterns.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Server.h"
#include "TaskA.h"
#include "TaskB.h"
#include "TaskC.h"

using namespace std;

int main()
{
    Server server;

    /*server.RegisterTask(new TaskA());
    server.RegisterTask(new TaskB());
    server.RegisterTask(new TaskA());
    server.RegisterTask(new TaskC());

    server.DoAnythingThenRunAllTask();*/

    server.DoAnythingThenRunOneTask(new TaskA());
    server.DoAnythingThenRunOneTask(new TaskB());
    server.DoAnythingThenRunOneTask(new TaskC());
}
