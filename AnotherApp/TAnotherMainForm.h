//---------------------------------------------------------------------------

#ifndef TAnotherMainFormH
#define TAnotherMainFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "TMonitorFrame.h"
//---------------------------------------------------------------------------
class TAnotherMainForm : public TForm
{
__published:	// IDE-managed Components
	TMonitorFrame *MonitorFrame1;
private:	// User declarations
public:		// User declarations
	__fastcall TAnotherMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAnotherMainForm *AnotherMainForm;
//---------------------------------------------------------------------------
#endif
