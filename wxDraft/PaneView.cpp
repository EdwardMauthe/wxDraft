#include "stdafx.hpp"
#include "PaneView.hpp"

// the way wx like custom arrays are defined
#include<wx/arrimpl.cpp>
WX_DEFINE_OBJARRAY(wxPointsArray);

BEGIN_EVENT_TABLE(PaneView,wxPanel)
	EVT_WINDOW_CREATE(PaneView::WhenCreate)
	EVT_WINDOW_DESTROY(PaneView::WhenDestroy)
	EVT_PAINT(PaneView::WhenPaint)
	EVT_LEFT_DOWN(PaneView::WhenMouseLeftDown)
END_EVENT_TABLE()

PaneView::PaneView(wxFrame* parent):wxPanel(parent)
{
}

PaneView::~PaneView(void)
{
}

void PaneView::WhenCreate(wxWindowCreateEvent& wce)
{
}

void PaneView::WhenDestroy(wxWindowDestroyEvent& wde)
{
}

void PaneView::WhenPaint(wxPaintEvent& pe)
{
	const int full_width=30;
	const int half_width=full_width/2;
	wxPaintDC dc(this);
	dc.SetBackground(*wxGREEN_BRUSH);
	for(int i=0;i<pa.Count();i++)
	{
		wxPoint current=pa.Item(i);
#if 0
		// draw a centered square
		dc.DrawRectangle(
			current.x-half_width,
			current.y-half_width,
			full_width,
			full_width
		);
#else
		// draw a centered circle
		dc.DrawCircle(current,full_width);
#endif
	}
}

void PaneView::WhenMouseLeftDown(wxMouseEvent& me)
{
	wxString s;
	wxPoint point;
	s.Printf(wxT("%d %d"),me.GetX(),me.GetY());
//	wxMessageBox(s);
	point=me.GetPosition();
	pa.Add(point);
	this->Refresh();
}


void PaneView::MyTool(wxCommandEvent& ce)
{
		wxMessageBox(wxT("InPane"));
}
