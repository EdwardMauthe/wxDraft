#include "stdafx.h"
#include "PaneView.hpp"

class CoreApp:public wxApp
{
	wxFrame* frame;
	wxPanel* pane;
	bool OnInit()
	{
		wxBoxSizer* bs=new wxBoxSizer(wxHORIZONTAL);
		frame=new wxFrame(NULL,-1,wxT("wxDraft Test"),wxPoint(50,50),wxSize(400,300));
		pane=new PaneView(frame);
		bs->Add(pane,1,wxEXPAND);
		//
		frame->SetSizer(bs);
		frame->SetAutoLayout(true);
		frame->Show();
		return true;
	}
};
IMPLEMENT_APP(CoreApp)
