#include "ButtonFactory.h"

wxButton* ButtonFactory::CreateButton(wxWindow* window, int ID, wxString string, wxPoint pointer, wxSize size)
{
	return new wxButton(window, ID, string, pointer, size);
}


//wxButton* ButtonFactory::ButtonZero()
//{
//	wxButton* Button0 = new wxButton(calc, 14, "0", wxPoint(70, 310), wxSize(50, 50));
//	return Button0;
//}
//
//wxButton* ButtonFactory::ButtonOne()
//{
//	wxButton* Button1 = new wxButton(calc, 1, "1", wxPoint(130, 250), wxSize(50, 50));
//	return Button1;
//}
//
//wxButton* ButtonFactory::ButtonTwo()
//{
//	wxButton* Button2 = new wxButton(calc, 2, "2", wxPoint(70, 250), wxSize(50, 50));
//	return Button2;
//}
//
//wxButton* ButtonFactory::ButtonThree()
//{
//	return nullptr;
//}
//
//wxButton* ButtonFactory::ButtonFour()
//{
//	return nullptr;
//}
//
//wxButton* ButtonFactory::ButtonFive()
//{
//	return nullptr;
//}
//
//wxButton* ButtonFactory::ButtonSix()
//{
//	return nullptr;
//}
//
//wxButton* ButtonFactory::ButtonSeven()
//{
//	return nullptr;
//}
//
//wxButton* ButtonFactory::ButtonEight()
//{
//	return nullptr;
//}
//
//wxButton* ButtonFactory::ButtonNine()
//{
//	return nullptr;
//}
//
//wxButton* ButtonFactory::Neg()
//{
//	return nullptr;
//}
//
//wxButton* ButtonFactory::Div()
//{
//	return nullptr;
//}
//
//wxButton* ButtonFactory::Mult()
//{
//	return nullptr;
//}
//
//wxButton* ButtonFactory::Plus()
//{
//	return nullptr;
//}
//
//wxButton* ButtonFactory::Minus()
//{
//	return nullptr;
//}
//
//wxButton* ButtonFactory::Deci()
//{
//	wxButton* Deci = new wxButton(calc, 20, "Deci", wxPoint(10, 70), wxSize(50, 50));
//	return nullptr;
//}
//
//wxButton* ButtonFactory::Hex()
//{
//	return nullptr;
//}
//
//wxButton* ButtonFactory::Bin()
//{
//	return nullptr;
//}
//
//wxButton* ButtonFactory::Mod()
//{
//	return nullptr;
//}
//
//wxButton* ButtonFactory::Equals()
//{
//	return nullptr;
//}
//
//wxButton* ButtonFactory::Clear()
//{
//	return nullptr;
//}
