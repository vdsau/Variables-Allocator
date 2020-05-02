//---------------------------------------------------------------------------

#ifndef classeH
#define classeH
#include <Grids.hpp>
//---------------------------------------------------------------------------
template<class t>class allocator //распределитель памяти
{
t* info;//указатель на массив данных
int size; //размер массива данных
public:
allocator(int _size)
{
        size=_size;
        info=new t[size];//выделяем память под тип t
}
t* begin_address()const //начальный адресс выделенной памяти
{
        return info;//первый елемент
}
t* end_address()const//конечный адресс выделенной памяти
{
        return &info[size];//последний елемент
}
void resize(int new_size)//изменение размеров массива данных
{
if(new_size<size)
{
        size=new_size;
        resize(size);
}
else
{
  t* temp=new t[size];//временный массив для копирования старой информации
        for(int i=0;i<size;i++)
        {
                temp[i]=info[i];//сохраняем существующие данные
        }
        delete []info;//удаляем старый массив
        info=new t[new_size];//выделяем память с новыми размерами
        for(int ix=0;ix<size;ix++)
        {
               info[ix]=temp[ix];//запись существующих елементов в новый массив
        }
        size=new_size;
}
}
~allocator()
{
delete []info;
}
};
//---------------------------------------------------------------------------
struct types//хранилище адресов после выделения памяти
{
allocator<int>* _INT;
allocator<unsigned int>* _UINT;
allocator<signed int>* _SINT;
allocator<char>* _CHAR;
allocator<unsigned char>* _UCHAR;
allocator<signed char>* _SCHAR;
allocator<wchar_t>* W_CHAR_T;
allocator<float>* _FLOAT;
allocator<double>* _DOUBLE;
allocator<bool>* _BOOL;
};
#endif
