//---------------------------------------------------------------------------

#ifndef resH
#define resH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include"classe.h"
//---------------------------------------------------------------------------
class Tform_results : public TForm
{
__published:	// IDE-managed Components
        TStringGrid *res_table;
        void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
        void fill_table();//��������� �������
        void write_table(int y,AnsiString fval,AnsiString sval);
public:		// User declarations
        __fastcall Tform_results(TComponent* Owner);
        types type; //������ �������� ������������ �����
        void show();
        void clear_table();//�������
};
//---------------------------------------------------------------------------
extern PACKAGE Tform_results *form_results;
//---------------------------------------------------------------------------
#endif
