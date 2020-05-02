//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("main_code.cpp", main_form);
USEFORM("D:\Temp\Programs\Builder\Projects\Практика2015\Практика1\_exit_form.cpp", exit_form);
USEFORM("res.cpp", form_results);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(Tmain_form), &main_form);
                 Application->CreateForm(__classid(Texit_form), &exit_form);
                 Application->CreateForm(__classid(Tform_results), &form_results);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
