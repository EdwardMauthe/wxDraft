#pragma once
class PaneView:public wxPanel
{
public:
	PaneView(wxFrame* parent);
	~PaneView(void);
	DECLARE_EVENT_TABLE()
protected:
	void WhenPaint(wxPaintEvent& pe);
	void WhenMouseLeftDown(wxMouseEvent& me);
private:
	wxPoint point;
};
