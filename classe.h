//---------------------------------------------------------------------------

#ifndef classeH
#define classeH
#include <Grids.hpp>
//---------------------------------------------------------------------------
template<class t>class allocator //�������������� ������
{
t* info;//��������� �� ������ ������
int size; //������ ������� ������
public:
allocator(int _size)
{
        size=_size;
        info=new t[size];//�������� ������ ��� ��� t
}
t* begin_address()const //��������� ������ ���������� ������
{
        return info;//������ �������
}
t* end_address()const//�������� ������ ���������� ������
{
        return &info[size];//��������� �������
}
void resize(int new_size)//��������� �������� ������� ������
{
if(new_size<size)
{
        size=new_size;
        resize(size);
}
else
{
  t* temp=new t[size];//��������� ������ ��� ����������� ������ ����������
        for(int i=0;i<size;i++)
        {
                temp[i]=info[i];//��������� ������������ ������
        }
        delete []info;//������� ������ ������
        info=new t[new_size];//�������� ������ � ������ ���������
        for(int ix=0;ix<size;ix++)
        {
               info[ix]=temp[ix];//������ ������������ ��������� � ����� ������
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
struct types//��������� ������� ����� ��������� ������
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
