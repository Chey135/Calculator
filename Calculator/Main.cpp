#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
	EVT_BUTTON(21, Main::OnButtonClicked)
	EVT_BUTTON(20, Main::OnButtonClicked)
	EVT_BUTTON(19, Main::OnButtonClicked)
	EVT_BUTTON(18, Main::OnButtonClicked)
	EVT_BUTTON(17, Main::OnButtonClicked)
	EVT_BUTTON(1, Main::OnButtonClicked)
	EVT_BUTTON(2, Main::OnButtonClicked)
	EVT_BUTTON(3, Main::OnButtonClicked)
	EVT_BUTTON(4, Main::OnButtonClicked)
	EVT_BUTTON(5, Main::OnButtonClicked)
	EVT_BUTTON(6, Main::OnButtonClicked)
	EVT_BUTTON(7, Main::OnButtonClicked)
	EVT_BUTTON(8, Main::OnButtonClicked)
	EVT_BUTTON(9, Main::OnButtonClicked)
	EVT_BUTTON(10, Main::OnButtonClicked)
	EVT_BUTTON(11, Main::OnButtonClicked)
	EVT_BUTTON(12, Main::OnButtonClicked)
	EVT_BUTTON(13, Main::OnButtonClicked)
	EVT_BUTTON(14, Main::OnButtonClicked)
	EVT_BUTTON(15, Main::OnButtonClicked)
	EVT_BUTTON(16, Main::OnButtonClicked)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator - wxwidgets!", wxPoint(30,30), wxSize(265,445))
{
	m_txt = new wxTextCtrl(this, 100, "", wxPoint(10, 20), wxSize(230, 35));

	m_btn = new wxButton(this, 20, "Deci", wxPoint(10, 70), wxSize(50, 50));
	m_btn = new wxButton(this, 19, "Hex", wxPoint(70, 70), wxSize(50, 50));
	m_btn = new wxButton(this, 18, "Bin", wxPoint(130, 70), wxSize(50, 50));
	m_btn = new wxButton(this, 17, "Mod", wxPoint(190, 70), wxSize(50, 50));

	m_btn = new wxButton(this, 9, "9", wxPoint(10, 130), wxSize(50, 50));
	m_btn = new wxButton(this, 8, "8", wxPoint(70, 130), wxSize(50, 50));
	m_btn = new wxButton(this, 7, "7", wxPoint(130, 130), wxSize(50, 50));
	m_btn = new wxButton(this, 10, "C", wxPoint(190, 130), wxSize(50, 50));

	m_btn = new wxButton(this, 6, "6", wxPoint(10, 190), wxSize(50, 50));
	m_btn = new wxButton(this, 5, "5", wxPoint(70, 190), wxSize(50, 50));
	m_btn = new wxButton(this, 4, "4", wxPoint(130, 190), wxSize(50, 50));
	m_btn = new wxButton(this, 11, "+", wxPoint(190, 190), wxSize(50, 50));

	m_btn = new wxButton(this, 3, "3", wxPoint(10, 250), wxSize(50, 50));
	m_btn = new wxButton(this, 2, "2", wxPoint(70, 250), wxSize(50, 50));
	m_btn = new wxButton(this, 1, "1", wxPoint(130, 250), wxSize(50, 50));
	m_btn = new wxButton(this, 12, "-", wxPoint(190, 250), wxSize(50, 50));

	m_btn = new wxButton(this, 13, "+/-", wxPoint(10, 310), wxSize(50, 50));
	m_btn = new wxButton(this, 14, "0", wxPoint(70, 310), wxSize(50, 50));
	m_btn = new wxButton(this, 15, "/", wxPoint(130, 310), wxSize(50, 50));
	m_btn = new wxButton(this, 16, "*", wxPoint(190, 310), wxSize(50, 50));

	m_btn = new wxButton(this, 21, "=", wxPoint(10, 370), wxSize(230, 30));
	
}


Main::~Main()
{
}

void Main::OnButtonClicked(wxCommandEvent& evt)
{
	int id = evt.GetId();
	switch (id)
	{
	case 1:
	{
		m_txt->AppendText("1");
		break;
	}
	case 2:
	{
		m_txt->AppendText("2");
		break;
	}
	case 3:
	{
		m_txt->AppendText("3");
		break;
	}
	case 4:
	{
		m_txt->AppendText("4");
		break;
	}
	case 5:
	{
		m_txt->AppendText("5");
		break;
	}
	case 6:
	{
		m_txt->AppendText("6");
		break;
	}
	case 7:
	{
		m_txt->AppendText("7");
		break;
	}
	case 8:
	{
		m_txt->AppendText("8");
		break;
	}
	case 9:
	{
		m_txt->AppendText("9");
		break;
	}
	case 10:
	{
		m_txt->Clear();
		break;
	}
	case 11:
	{
		m_txt->AppendText("+");
		break;
	}
	case 12:
	{
		m_txt->AppendText("-");
		break;
	}
	case 13:	//make number positive or negative
	{
		m_txt->AppendText("+/-");
		break;
	}
	case 14:
	{
		m_txt->AppendText("0");
		break;
	}
	case 15:
	{
		m_txt->AppendText("/");
		break;
	}
	case 16:
	{
		m_txt->AppendText("*");
		break;
	}
	case 17:
	{
		m_txt->AppendText("Mod");
		break;
	}
	case 18:
	{
		m_txt->AppendText("Bin");
		break;
	}
	case 19:
	{
		m_txt->AppendText("Hex");
		break;
	}
	case 20:
	{
		m_txt->AppendText("Dec");
		break;
	}
	case 21:
	{
		m_txt->AppendText("=");
		break;
	}
	}

	//Finish event
	evt.Skip();
}
