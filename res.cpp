//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "res.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#define rs(x,y) res_table->Cells[x][y]
Tform_results *form_results;
//---------------------------------------------------------------------------
__fastcall Tform_results::Tform_results(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tform_results::FormActivate(TObject *Sender)
{
        rs(1,0)="Начальный адресс";
        rs(2,0)="Конечный адресс";
        rs(0,1)="int";
        rs(0,2)="unsigned int";
        rs(0,3)="signed int";
        rs(0,4)="char";
        rs(0,5)="unsigned char";
        rs(0,6)="signed char";
        rs(0,7)="wchar_t";
        rs(0,8)="float";
        rs(0,9)="double";
        rs(0,10)="bool";
}
//---------------------------------------------------------------------------
//запись в таблицу
//x,y-навигация по таблице,fval,sval-значение 1,2-го столбцов соответсвенно
void Tform_results::write_table(int y,AnsiString fval,AnsiString sval)
{
        res_table->Cells[1][y]=fval;
        res_table->Cells[2][y]=sval;
}
//---------------------------------------------------------
void Tform_results::fill_table()//заполнение табилцы резульатов
{
{ //INT
        write_table(1,IntToHex(*type._INT->begin_address(),8),IntToHex(*type._INT->end_address(),8));
}
//UINT
{
        write_table(2,IntToHex((__int64)*type._UINT->begin_address(),8),IntToHex((__int64)*type._UINT->end_address(),8));
}
//SINT
{
         write_table(3,IntToHex(*type._SINT->begin_address(),8),IntToHex(*type._SINT->end_address(),8));
}
//CHAR
{
        write_table(4,IntToHex(*type._CHAR->begin_address(),8),IntToHex(*type._CHAR->end_address(),8));
}
//UCHAR
{
         write_table(5,IntToHex(*type._UCHAR->begin_address(),8),IntToHex(*type._UCHAR->end_address(),8));
}
//SCHAR
{
         write_table(6,IntToHex(*type._SCHAR->begin_address(),8),IntToHex(*type._SCHAR->end_address(),8));
}
//W_CHAR_T
{
        write_table(7,IntToHex(*type.W_CHAR_T->begin_address(),8),IntToHex(*type.W_CHAR_T->end_address(),8));
}
//FLOAT
{
        write_table(8,IntToHex((__int64)*type._FLOAT->begin_address(),16),IntToHex((__int64)*type._FLOAT->end_address(),16));
}
//DOUBLE
{
        write_table(9,IntToHex((__int64)*type._DOUBLE->begin_address(),16),IntToHex((__int64)*type._DOUBLE->end_address(),16));
}
//BOOL
{
         write_table(10,IntToHex((__int64)*type._BOOL->begin_address(),16),IntToHex((__int64)*type._BOOL->end_address(),16));
}
}
//---------------------------------------------------------------------------
void Tform_results::clear_table()//очистка
{
        for(int i=0;i<res_table->RowCount;i++)
                for(int ix=0;ix<res_table->ColCount;ix++)
                {
                        res_table->Cells[ix][i]="";
                }
}
//---------------------------------------------------------------------------
void Tform_results::show()
{
fill_table();
}
