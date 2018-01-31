
#include "Skeleton.h"



Skeleton::Skeleton()
{

	root = NULL;

}

Skeleton::~Skeleton()
{
}


bool Skeleton::Load(const char *file) {
	
	if (file == "") {

		file = "../skeletons/test.skel";
	}


	Tokenizer* token = new Tokenizer();
	//token->Open(file, "skel");
	token->Open(file);
	token->FindToken("balljoint");
	// Parse tree
	root = new Joint();
	root->Load(token);




	// Finish
	token->Close();
	return true;
}


void Skeleton::Update(glm::mat4 parentW) {

	root->Update(parentW);

}

void Skeleton::Draw(const glm::mat4 &viewProjMtx, uint shader) {

	root->Draw(viewProjMtx, shader);

}