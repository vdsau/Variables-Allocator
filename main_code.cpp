//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main_code.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CSPIN"
#pragma resource "*.dfm"
Tmain_form *main_form;
//---------------------------------------------------------------------------
__fastcall Tmain_form::Tmain_form(TComponent* Owner)
        : TForm(Owner)
{
 typs._INT=new allocator<int>(StrToInt(Edit1->Text));
 typs._UINT=new allocator<unsigned int>(StrToInt(Edit2->Text));
 typs._SINT=new allocator<signed int>(StrToInt(Edit3->Text));
 typs._CHAR=new allocator<char>(StrToInt(Edit4->Text));
 typs._UCHAR=new allocator<unsigned char>(StrToInt(Edit5->Text));
 typs._SCHAR=new allocator<signed char>(StrToInt(Edit6->Text));
 typs.W_CHAR_T=new allocator<wchar_t>(StrToInt(Edit7->Text));
 typs._FLOAT=new allocator<float>(StrToInt(Edit8->Text));
 typs._DOUBLE=new allocator<double>(StrToInt(Edit9->Text));
 typs._BOOL=new allocator<bool>(StrToInt(Edit10->Text));
}

//----------------------------------------------------------
void update()//обновление информации об памяти
{
try
{
        int total=0;
        for(int i=0;i<main_form->ComponentCount;i++)
        {
                if(main_form->Components[i]->Tag==3)
                {
                        total+=StrToInt(((TEdit*)main_form->Components[i])->Text);
                }
        }
        main_form->total_mem->Text=total;
}
catch(EConvertError &er)
{
        ShowMessage("Количество не может быть отрицательным!");
}
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::FormClose(TObject *Sender,
      TCloseAction &Action)
{
if(exit_form->ShowModal()==mrOk)
{
        Application->Terminate();
}
else
{
        Application->Run();
}
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::FormCreate(TObject *Sender)
{
Label1->Caption="Количество занимаемой\nпамяти(байт):";
list_types->Hint.printf("Размеры встроенных типов в данной системе.\nРазмер указан в байтах.");
AnsiString types[]={"int(","unsigned int(","signed int(","char(","unsigned char(","signed char(","wchar_t(","float(","double(","bool("};
size_t sizes[]={sizeof(int),sizeof(unsigned int),sizeof(signed int),sizeof(char),sizeof(unsigned char),sizeof(signed char),sizeof(wchar_t),sizeof(float),sizeof(double),sizeof(bool)};
for(int i=0,ix=0;i<sizeof(types)/sizeof(types[0])&&ix<sizeof(sizes)/sizeof(sizes[0]);i++,ix++)
{
        list_types->Items->Add(types[i]+sizes[ix]+")");
}
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::_intChange(TObject *Sender)
{
Edit1->Text=_int->Value*sizeof(int);
typs._INT->resize(Edit1->Text.ToInt());
update();
}
//---------------------------------------------------------------------------

void __fastcall Tmain_form::_uintChange(TObject *Sender)
{
Edit2->Text=_uint->Value*sizeof(unsigned int);
typs._UINT->resize(Edit2->Text.ToInt());
update();
}
//---------------------------------------------------------------------------

void __fastcall Tmain_form::_sintChange(TObject *Sender)
{
Edit3->Text=_sint->Value*sizeof(signed int);
typs._SINT->resize(Edit3->Text.ToInt());
update();
}
//---------------------------------------------------------------------------

void __fastcall Tmain_form::_ucharChange(TObject *Sender)
{
Edit5->Text=_uchar->Value*sizeof(unsigned char);
typs._UCHAR->resize(Edit5->Text.ToInt());
update();
}
//---------------------------------------------------------------------------

void __fastcall Tmain_form::_charChange(TObject *Sender)
{
Edit4->Text=_char->Value*sizeof(char);
typs._CHAR->resize(Edit4->Text.ToInt());
update();
}
//---------------------------------------------------------------------------

void __fastcall Tmain_form::_scharChange(TObject *Sender)
{
Edit6->Text=_schar->Value*sizeof(signed char);
typs._SCHAR->resize(Edit6->Text.ToInt());
update();
}
//---------------------------------------------------------------------------

void __fastcall Tmain_form::_wchar_tChange(TObject *Sender)
{
Edit7->Text=_wchar_t->Value*sizeof(wchar_t);
typs.W_CHAR_T->resize(Edit7->Text.ToInt());
update();
}
//---------------------------------------------------------------------------

void __fastcall Tmain_form::_floatChange(TObject *Sender)
{
Edit8->Text=_float->Value*sizeof(float);
typs._FLOAT->resize(Edit8->Text.ToInt());
update();
}
//---------------------------------------------------------------------------

void __fastcall Tmain_form::_doubleChange(TObject *Sender)
{
Edit9->Text=_double->Value*sizeof(double);
typs._DOUBLE->resize(Edit9->Text.ToInt());
update();
}
//---------------------------------------------------------------------------

void __fastcall Tmain_form::_boolChange(TObject *Sender)
{
Edit10->Text=_bool->Value*sizeof(bool);
typs._BOOL->resize(Edit10->Text.ToInt());
update();
}
//---------------------------------------------------------------------------

void __fastcall Tmain_form::calcClick(TObject *Sender)
{
 show_results->Visible=true;
 form_results->type=typs;
}
//---------------------------------------------------------------------------

void __fastcall Tmain_form::show_resultsClick(TObject *Sender)
{
form_results->show();
form_results->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tmain_form::defClick(TObject *Sender)
{
show_results->Visible=false;
form_results->clear_table();
for(int i=0;i<main_form->ComponentCount;i++)
{
        if(main_form->Components[i]->Tag==2)
        {
                ((TCSpinEdit*)main_form->Components[i])->Text=1;
        }
        if(main_form->Components[i]->Tag==3)
        {
                ((TEdit*)main_form->Components[i])->Text=1;
        }
}
}
//---------------------------------------------------------------------------

