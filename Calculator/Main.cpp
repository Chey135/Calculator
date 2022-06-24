#include "Main.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
#include <vector>
#include "AddCommand.h"
#include "SubtractionCommand.h"
#include "MultiplyCommand.h"
#include "DivideCommand.h"
#include "IBaseCommand.h"

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
int num1, num2;
wxString _num1 = "";
wxString _num2 = "";
bool symbol = false;
wxString sym = "";

std::vector<IBaseCommand*>commands;

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator - wxwidgets!", wxPoint(30,30), wxSize(265,445))
{
	ButtonFactory factory;
	//ButtonFactory cMain = ButtonFactory(this);
	m_txt = new wxTextCtrl(this, 100, "", wxPoint(10, 20), wxSize(230, 35));

	m_btn = factory.CreateButton(this, 20, "Deci", wxPoint(10, 70), wxSize(50, 50));
	m_btn = factory.CreateButton(this, 19, "Hex", wxPoint(70, 70), wxSize(50, 50));
	m_btn = factory.CreateButton(this, 18, "Bin", wxPoint(130, 70), wxSize(50, 50));
	m_btn = factory.CreateButton(this, 17, "Mod", wxPoint(190, 70), wxSize(50, 50));

	m_btn = factory.CreateButton(this, 9, "9", wxPoint(10, 130), wxSize(50, 50));
	m_btn = factory.CreateButton(this, 8, "8", wxPoint(70, 130), wxSize(50, 50));
	m_btn = factory.CreateButton(this, 7, "7", wxPoint(130, 130), wxSize(50, 50));
	m_btn = factory.CreateButton(this, 10, "C", wxPoint(190, 130), wxSize(50, 50));

	m_btn = factory.CreateButton(this, 6, "6", wxPoint(10, 190), wxSize(50, 50));
	m_btn = factory.CreateButton(this, 5, "5", wxPoint(70, 190), wxSize(50, 50));
	m_btn = factory.CreateButton(this, 4, "4", wxPoint(130, 190), wxSize(50, 50));
	m_btn = factory.CreateButton(this, 11, "+", wxPoint(190, 190), wxSize(50, 50));

	m_btn = factory.CreateButton(this, 3, "3", wxPoint(10, 250), wxSize(50, 50));
	m_btn = factory.CreateButton(this, 2, "2", wxPoint(70, 250), wxSize(50, 50));
	m_btn = factory.CreateButton(this, 1, "1", wxPoint(130, 250), wxSize(50, 50));
	m_btn = factory.CreateButton(this, 12, "-", wxPoint(190, 250), wxSize(50, 50));

	m_btn = factory.CreateButton(this, 13, "+/-", wxPoint(10, 310), wxSize(50, 50));
	m_btn = factory.CreateButton(this, 14, "0", wxPoint(70, 310), wxSize(50, 50));
	m_btn = factory.CreateButton(this, 15, "/", wxPoint(130, 310), wxSize(50, 50));
	m_btn = factory.CreateButton(this, 16, "*", wxPoint(190, 310), wxSize(50, 50));

	m_btn = factory.CreateButton(this, 21, "=", wxPoint(10, 370), wxSize(230, 30));
}


Main::~Main()
{
}

void Main::OnButtonClicked(wxCommandEvent& evt)
{
	CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
	int id = evt.GetId();
	
	switch (id)
	{
	case 1:
	{
		m_txt->AppendText("1");
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else {
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 2:
	{
		m_txt->AppendText("2");
			if (symbol == true)
			{
				if (num2 != 0)
				{
					_num2 = std::to_string(num2);
					_num2 += std::to_string(evt.GetId());
				}
				else {
					_num2 += std::to_string(evt.GetId());
				}
			}
		break;
	}
	case 3:
	{
		m_txt->AppendText("3");
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else {
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 4:
	{
		m_txt->AppendText("4");
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else {
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 5:
	{
		m_txt->AppendText("5");
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else {
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 6:
	{
		m_txt->AppendText("6");
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else {
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 7:
	{
		m_txt->AppendText("7");
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else {
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 8:
	{
		m_txt->AppendText("8");
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else {
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 9:
	{
		m_txt->AppendText("9");
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else {
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 10:
	{
		m_txt->Clear();
		commands.clear();
		_num1.clear();
		_num1 = "";
		_num2.clear();
		_num2 = "";
		num1 = 0;
		num2 = 0;
		symbol = false;
		break;
	}
	case 11:
	{
		_num1 = m_txt->GetValue();
		m_txt->AppendText("+");
		sym = "+";
		symbol = true;
		break;
	}
	case 12:
	{
		_num1 = m_txt->GetValue();
		m_txt->AppendText("-");
		sym = "-";
		symbol = true;
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
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else {
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 15:
	{
		_num1 = m_txt->GetValue();
		m_txt->AppendText("/");
		sym = "/";
		symbol = true;
		break;
	}
	case 16:
	{
		_num1 = m_txt->GetValue();
		m_txt->AppendText("*");
		sym = "*";
		symbol = true;
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
		if (sym == "+")
		{
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);
			m_txt->Clear();
			AddCommand addd(processor, num1, num2);
			commands.push_back(&addd);
			for (size_t i = 0; i < commands.size(); i++)
			{
				m_txt->AppendText(commands[i]->Execute());
			}
			commands.clear();
			_num1.clear();
			_num2.clear();
			num1 = 0;
			num2 = 0;
		}
		else if (sym == "-")
		{
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);
			m_txt->Clear();
			SubtractionCommand sub(processor, num1, num2);
			commands.push_back(&sub);
			for (size_t i = 0; i < commands.size(); i++)
			{
				m_txt->AppendText(commands[i]->Execute());
			}
			commands.clear();
			_num1.clear();
			_num2.clear();
			num1 = 0;
			num2 = 0;
		}
		else if (sym == "*")
		{
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);
			m_txt->Clear();
			MultiplyCommand mult(processor, num1, num2);
			commands.push_back(&mult);
			for (size_t i = 0; i < commands.size(); i++)
			{
				m_txt->AppendText(commands[i]->Execute());
			}
			commands.clear();
			_num1.clear();
			_num2.clear();
			num1 = 0;
			num2 = 0;
		}
		else if (sym == "/")
		{
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);
			m_txt->Clear();
			DivideCommand di(processor, num1, num2);
			commands.push_back(&di);
			for (size_t i = 0; i < commands.size(); i++)
			{
				m_txt->AppendText(commands[i]->Execute());
			}
			commands.clear();
			_num1.clear();
			_num2.clear();
			num1 = 0;
			num2 = 0;
		}
		break;
	}
	}

	//Finish event
	evt.Skip();
}
