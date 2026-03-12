//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TMonitorFrame.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMonitorFrame *MonitorFrame;
//---------------------------------------------------------------------------
__fastcall TMonitorFrame::TMonitorFrame(TComponent* Owner)
	: TFrame(Owner)
{
}
//---------------------------------------------------------------------------
