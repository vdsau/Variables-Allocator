//---------------------------------------------------------------------------

#ifndef main_codeH
#define main_codeH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "CSPIN.h"
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
#include"classe.h"
#include"res.h"
#include"_exit_form.h"
//---------------------------------------------------------------------------
class Tmain_form : public TForm
{
__published:	// IDE-managed Components
        TListBox *list_types;
        TGroupBox *GroupBox1;
        TGroupBox *GroupBox2;
        TCSpinEdit *_int;
        TCSpinEdit *_uint;
        TLabel *Label1;
        TGroupBox *GroupBox3;
        TEdit *total_mem;
        TCSpinEdit *_sint;
        TCSpinEdit *_char;
        TCSpinEdit *_uchar;
        TCSpinEdit *_schar;
        TCSpinEdit *_float;
        TCSpinEdit *_double;
        TCSpinEdit *_bool;
        TCSpinEdit *_wchar_t;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit5;
        TEdit *Edit6;
        TEdit *Edit7;
        TEdit *Edit8;
        TEdit *Edit9;
        TEdit *Edit10;
        TBitBtn *calc;
        TBitBtn *def;
        TButton *show_results;
        TLabel *Label13;
        TLabel *Label14;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall _intChange(TObject *Sender);
        void __fastcall _uintChange(TObject *Sender);
        void __fastcall _sintChange(TObject *Sender);
        void __fastcall _ucharChange(TObject *Sender);
        void __fastcall _charChange(TObject *Sender);
        void __fastcall _scharChange(TObject *Sender);
        void __fastcall _wchar_tChange(TObject *Sender);
        void __fastcall _floatChange(TObject *Sender);
        void __fastcall _doubleChange(TObject *Sender);
        void __fastcall _boolChange(TObject *Sender);
        void __fastcall calcClick(TObject *Sender);
        void __fastcall show_resultsClick(TObject *Sender);
        void __fastcall defClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tmain_form(TComponent* Owner);
        types typs;
};
//---------------------------------------------------------------------------
extern PACKAGE Tmain_form *main_form;
//---------------------------------------------------------------------------
#endif
