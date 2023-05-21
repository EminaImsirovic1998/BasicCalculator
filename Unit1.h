//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TButton *One;
	TButton *Two;
	TButton *Three;
	TButton *Four;
	TButton *Fife;
	TButton *Six;
	TButton *Seven;
	TButton *Eight;
	TButton *Zero;
	TButton *Nine;
	TButton *Dot;
	TButton *Plus;
	TButton *Minus;
	TButton *Multiply;
	TButton *Divided;
	TButton *Equal;
	TButton *AllClear;
	TEdit *Display;
	void __fastcall OneClick(TObject *Sender);
	void __fastcall TwoClick(TObject *Sender);
	void __fastcall ThreeClick(TObject *Sender);
	void __fastcall FourClick(TObject *Sender);
	void __fastcall FifeClick(TObject *Sender);
	void __fastcall SixClick(TObject *Sender);
	void __fastcall SevenClick(TObject *Sender);
	void __fastcall EightClick(TObject *Sender);
	void __fastcall NineClick(TObject *Sender);
	void __fastcall ZeroClick(TObject *Sender);
	void __fastcall PlusClick(TObject *Sender);
	void __fastcall MinusClick(TObject *Sender);
	void __fastcall MultiplyClick(TObject *Sender);
	void __fastcall DividedClick(TObject *Sender);
	void __fastcall DotClick(TObject *Sender);
	void __fastcall EqualClick(TObject *Sender);
	void __fastcall AllClearClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	float numbers[2];
	int o = 0;
	__fastcall TForm1(TComponent* Owner);

	int result(){
    switch(o){
	case 1:
	Display->Text=numbers[0]+numbers[1];
	break;

	case 2:
	Display->Text=numbers[0]-numbers[1];
	break;

	case 3:
	Display->Text=numbers[0]*numbers[1];
	break;

	case 4:
	Display->Text=numbers[0]/numbers[1];
	break;


	}
	}
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
