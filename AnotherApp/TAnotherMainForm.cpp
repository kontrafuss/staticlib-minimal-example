//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TAnotherMainForm.h"
#include "TMonitorFrame.h"

#pragma link "MyPackage.bpi"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAnotherMainForm *AnotherMainForm;
//---------------------------------------------------------------------------
__fastcall TAnotherMainForm::TAnotherMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
