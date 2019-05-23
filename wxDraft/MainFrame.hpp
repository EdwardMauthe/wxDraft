#pragma once
class MainFrame:public wxFrame
{
public:
	MainFrame(const wxString& title,const wxPoint& pose,const wxSize& size);
	~MainFrame(void);
	DECLARE_EVENT_TABLE()
protected:
	void WhenCreate(wxWindowCreateEvent& wce);
	void WhenDestroy(wxWindowDestroyEvent& wde);
	wxPanel* pane;
	wxListBox* lb;
	wxToolBar* tb;
	void MyTool(wxCommandEvent& ce);
};

