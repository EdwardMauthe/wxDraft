#include "stdafx.hpp"
#include "MainFrame.hpp"
#include "PaneView.hpp"

#define wxID_MYTOOL (wxID_HIGHEST+1)

BEGIN_EVENT_TABLE(MainFrame,wxFrame)
	EVT_WINDOW_CREATE(MainFrame::WhenCreate)
	EVT_WINDOW_DESTROY(MainFrame::WhenDestroy)
END_EVENT_TABLE()

MainFrame::MainFrame(const wxString& title,const wxPoint& pose,const wxSize& size)
:wxFrame(NULL,-1,title,pose,size)
{
	wxBoxSizer* run=new wxBoxSizer(wxHORIZONTAL);
	pane=new PaneView(this);
	lb=new wxListBox(this,-1);
	for(int i=0;i<100;i++)
	{
		wxString s;
		s.Printf(wxT("%d"),i);
		lb->Append(s);
	}
	tb=this->CreateToolBar();
	wxBitmap test("test.bmp",wxBITMAP_TYPE_BMP);
	tb->AddTool(wxID_MYTOOL,wxT("Exit Application"),test);
	tb->Realize();
	this->Connect(wxID_MYTOOL,wxEVT_COMMAND_TOOL_CLICKED,wxCommandEventHandler(PaneView::MyTool));
	//
	run->Add(pane,1,wxEXPAND);
	run->Add(lb,1,wxEXPAND);
	//
	this->SetSizer(run);
	this->SetAutoLayout(true);
}

MainFrame::~MainFrame(void)
{
}

void MainFrame::WhenCreate(wxWindowCreateEvent& wce)
{
}

void MainFrame::WhenDestroy(wxWindowDestroyEvent& wde)
{
}

void MainFrame::MyTool(wxCommandEvent& ce)
{
	wxMessageBox(wxT("Click"));
}
