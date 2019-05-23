#pragma once

WX_DECLARE_OBJARRAY(wxPoint,wxPointsArray);

class PaneView:public wxPanel
{
public:
	PaneView(wxFrame* parent);
	~PaneView(void);
	DECLARE_EVENT_TABLE()
protected:
	void WhenCreate(wxWindowCreateEvent& wce);
	void WhenDestroy(wxWindowDestroyEvent& wde);
	void WhenPaint(wxPaintEvent& pe);
	void WhenMouseLeftDown(wxMouseEvent& me);
private:
	wxPointsArray pa;
public:
	void MyTool(wxCommandEvent& ce);
};
