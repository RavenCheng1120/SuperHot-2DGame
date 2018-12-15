// SuperHot.cpp: 主要專案檔。

#include "stdafx.h"
#include "StartForm.h"

using namespace System;
using namespace SuperHot;

int main(array<System::String ^> ^args)
{
	StartForm^ sf = gcnew StartForm;
	sf->ShowDialog();
	return 0;
}
