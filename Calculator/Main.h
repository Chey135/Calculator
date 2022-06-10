#pragma once
#include "wx/wx.h"

class Main : public wxFrame
{
public:
	Main();
	~Main();

public:
	wxButton* m_btn = nullptr;
	wxTextCtrl* m_txt = nullptr;

	wxDECLARE_EVENT_TABLE();
	void OnButtonClicked(wxCommandEvent& evt);

};

