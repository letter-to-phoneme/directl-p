// program parameters
#pragma once

using namespace std;

typedef struct PARAM{
	string trainingFile;
	string devFile;
	string testingFile;
	string answerFile;

	string modelOutFilename;
	string modelInFilename;

	int nBest;
	int maxX;
	int contextSize;
	int nGram;

	bool linearChain;
	int markovOrder;

	bool atTesting;
	int nBestTest;

	int trainAtLeast;
	int trainAtMost;

	string inChar;
	string outChar;

	bool keepModel;

	string alignLoss;

	double SVMcPara;

	bool noContextFea;
	int jointMgram;

	int beamSize;
	bool useBeam;

	int jointFMgram;
	double maxCandidateEach;

	string extraFeaTrain;
	string extraFeaDev;
	string extraFeaTest;
} param;

