#include "CalcApp.h"

wxIMPLEMENT_APP(CalcApp);

CalcApp::CalcApp()
{
}


CalcApp::~CalcApp()
{

}

bool CalcApp::OnInit()
{
	m_frame1 = new Main();
	m_frame1->Show();
	return true;
}