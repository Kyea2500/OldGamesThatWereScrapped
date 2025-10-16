#include "Office.h"
#include"../../Library/DX_Files_VC/DxLib.h"

Office::Office():
RightDoorTheClose(false),
LeftDoorTheClose(false),
RightOnLight(false),
LeftOnLight(false)
{
}

Office::~Office()
{
}

void Office::Init()
{
	RightDoorTheClose = false;
	LeftDoorTheClose = false;
	RightOnLight = false;
	LeftOnLight = false;
}

void Office::Update()
{

}

void Office::Draw()
{
	
}
