#include "stdafx.hpp"
#include "MainFrame.hpp"

class CoreApp:public wxApp
{
	wxFrame* frame;
	bool OnInit()
	{
		frame=new MainFrame(wxT("wxDraft"),wxPoint(50,50),wxSize(400,300));
		frame->Show();
		return true;
	}
};

IMPLEMENT_APP(CoreApp)