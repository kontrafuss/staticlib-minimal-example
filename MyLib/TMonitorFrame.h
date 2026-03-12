//---------------------------------------------------------------------------

#ifndef TMonitorFrameH
#define TMonitorFrameH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TMonitorFrame : public TFrame
{
__published:	// IDE-managed Components
	TImage *Image1;
private:	// User declarations
public:		// User declarations
	__fastcall TMonitorFrame(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMonitorFrame *MonitorFrame;
//---------------------------------------------------------------------------
#endif
