#pragma once

#include "wx/wx.h"
#include "Main.h"

class CalcApp : public wxApp
{
public:
	CalcApp();
	~CalcApp();

private:
	Main* m_frame1 = nullptr;

public:
	virtual bool OnInit();
};

