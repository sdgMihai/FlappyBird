#pragma once

#include <list>
#include <Core/Engine.h>
#include "Transform.h"
#include "Pipe.h"

class Blocks {
public:
	unsigned short squareSide;
	float pipeHeadHeight = 30;
	unsigned short width;
	unsigned int lastId;
	// (upperBlock : lowerBlock ? 1 : 0)
	bool lastMade;
	float initTranslateX;
	std::list<Pipe> forms;
	std::list<Transform> pipeHeads;
	glm::ivec2 resolution;
	int channel = 320;

	void init();

	void move(float);

	unsigned int getNr();

	std::list <Pipe>& getForms() {
		return forms;
	}

	// push back a block(pipe and pipeHead)
	void createAndAddBlock();

	// pop front a block(pipe and pipeHead)
	void destroyBlock();

	void checkAndCreate();

	void setResolution(glm::ivec2);
};