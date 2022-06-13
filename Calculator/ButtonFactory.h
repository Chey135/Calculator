#pragma once
#include "wx/wx.h"
#include "Main.h"
#include <vector>
class ButtonFactory
{
private:
	Main* calc = nullptr;

public:

	wxButton* CreateButton(wxWindow* window, int ID, wxString string, wxPoint pointer, wxSize size);

	/*ButtonFactory(Main* temp);
	~ButtonFactory();*/

	/*wxButton* ButtonZero();
	wxButton* ButtonOne();
	wxButton* ButtonTwo();
	wxButton* ButtonThree();
	wxButton* ButtonFour();
	wxButton* ButtonFive();
	wxButton* ButtonSix();
	wxButton* ButtonSeven();
	wxButton* ButtonEight();
	wxButton* ButtonNine();
	wxButton* Neg();
	wxButton* Div();
	wxButton* Mult();
	wxButton* Plus();
	wxButton* Minus();
	wxButton* Deci();
	wxButton* Hex();
	wxButton* Bin();
	wxButton* Mod();
	wxButton* Equals();
	wxButton* Clear();*/

	void factory() {
		/*m_btn = new wxButton(this, 20, "Deci", wxPoint(10, 70), wxSize(50, 50));
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

		m_btn = new wxButton(this, 21, "=", wxPoint(10, 370), wxSize(230, 30));*/
	}
};

