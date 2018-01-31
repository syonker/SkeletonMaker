

#pragma once

#include "Core.h"
#include "Joint.h"
#include "Tokenizer.h"


class Skeleton
{
public:
	Skeleton();
	~Skeleton();

	bool Load(const char *file);
	void Update(glm::mat4 parentW);
	void Draw(const glm::mat4 &viewProjMtx, uint shader);

	Joint* root;	

private:

};

