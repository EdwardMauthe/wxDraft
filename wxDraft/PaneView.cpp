#include "stdafx.hpp"
#include "PaneView.hpp"
BEGIN_EVENT_TABLE(PaneView,wxPanel)
	EVT_LEFT_DOWN(PaneView::WhenMouseLeftDown)
	EVT_PAINT(PaneView::WhenPaint)
END_EVENT_TABLE()

PaneView::PaneView(wxFrame* parent):wxPanel(parent)
{
}


PaneView::~PaneView(void)
{
}


void PaneView::WhenPaint(wxPaintEvent& pe)
{
	wxPaintDC dc(this);
	dc.DrawCircle(point,10);
//	dc.DrawRectangle(50,50,100,100);
}

void PaneView::WhenMouseLeftDown(wxMouseEvent& me)
{
	wxString s;
	s.Printf(wxT("%d %d"),me.GetX(),me.GetY());
//	wxMessageBox(s);
	point=me.GetPosition();
	this->Refresh();
}
