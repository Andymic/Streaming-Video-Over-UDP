//============================================================================
// Name        : kitkat.cc
// Author      : Andy
// Version     : 1.0
// Copyright   : Use this code at your own risk...your pants may fall off!
// Description : OpenCV experimentation in C++, Ansi-style
//============================================================================
#pragma once

#include <string>
#include <vector>

class KitKatClient{
private:
	bool FileExist(const char *filename);
public:
	KitKatClient(){}
	int ShowImage(const char * path);
	int ReadVideo(const std::string & filename);
	vector<Mat> KitKatClient::GetVideoFrames(const string & filename);
	~KitKatClient(){}
};