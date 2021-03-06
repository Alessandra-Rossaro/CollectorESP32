#pragma once
#include <time.h>
#include <string>
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

class SensorData {
private:
	int channel;
	int RSSI;
	int seconds;
	int useconds;
	string source;
	string sequence_ctrl;
	string SSID;

public:
	SensorData(int c, int rssi, int sec, int usec, string s, string seq_ctrl, string ssid);
	virtual ~SensorData();
	void printData();
};
