object main_form: Tmain_form
  Left = 399
  Top = 118
  Width = 592
  Height = 573
  Caption = #1056#1072#1089#1087#1088#1077#1076#1077#1083#1080#1090#1077#1083#1100' '#1087#1072#1084#1103#1090#1080
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 233
    Height = 273
    Caption = #1056#1072#1079#1084#1077#1088#1099' '#1074#1089#1090#1088#1086#1077#1085#1085#1099#1093' '#1090#1080#1087#1086#1074' '#1076#1072#1085#1085#1099#1093' ('#1073#1072#1081#1090')'
    TabOrder = 0
    DesignSize = (
      233
      273)
    object list_types: TListBox
      Left = 8
      Top = 16
      Width = 217
      Height = 249
      Anchors = [akLeft, akTop, akRight, akBottom]
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -21
      Font.Name = 'Times New Roman'
      Font.Style = [fsBold]
      ItemHeight = 24
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 0
    end
  end
  object GroupBox2: TGroupBox
    Left = 248
    Top = 8
    Width = 321
    Height = 514
    Caption = #1056#1072#1073#1086#1090#1072' '#1089' '#1087#1072#1084#1103#1090#1100#1102
    TabOrder = 1
    object Label2: TLabel
      Tag = 1
      Left = 24
      Top = 48
      Width = 21
      Height = 22
      Caption = 'int'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label3: TLabel
      Tag = 1
      Left = 24
      Top = 80
      Width = 98
      Height = 22
      Caption = 'unsigned int'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label4: TLabel
      Tag = 1
      Left = 24
      Top = 112
      Width = 78
      Height = 22
      Caption = 'signed int'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label5: TLabel
      Tag = 1
      Left = 24
      Top = 144
      Width = 37
      Height = 22
      Caption = 'char'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label6: TLabel
      Tag = 1
      Left = 24
      Top = 176
      Width = 114
      Height = 22
      Caption = 'unsigned char'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label7: TLabel
      Tag = 1
      Left = 24
      Top = 208
      Width = 94
      Height = 22
      Caption = 'signed char'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label8: TLabel
      Tag = 1
      Left = 24
      Top = 240
      Width = 67
      Height = 22
      Caption = 'wchar_t'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label9: TLabel
      Tag = 1
      Left = 25
      Top = 272
      Width = 37
      Height = 22
      Caption = 'float'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label10: TLabel
      Tag = 1
      Left = 24
      Top = 304
      Width = 54
      Height = 22
      Caption = 'double'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label11: TLabel
      Tag = 1
      Left = 24
      Top = 336
      Width = 35
      Height = 22
      Caption = 'bool'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label13: TLabel
      Left = 168
      Top = 16
      Width = 63
      Height = 26
      Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1087#1077#1088#1077#1084#1077#1085#1085#1099#1093
      WordWrap = True
    end
    object Label14: TLabel
      Left = 248
      Top = 16
      Width = 37
      Height = 26
      Caption = #1054#1073#1100#1105#1084' '#1087#1072#1084#1103#1090#1080
      WordWrap = True
    end
    object _int: TCSpinEdit
      Tag = 2
      Left = 176
      Top = 48
      Width = 57
      Height = 22
      TabOrder = 0
      OnChange = _intChange
    end
    object _uint: TCSpinEdit
      Tag = 2
      Left = 176
      Top = 80
      Width = 57
      Height = 22
      TabOrder = 1
      OnChange = _uintChange
    end
    object _schar: TCSpinEdit
      Tag = 2
      Left = 176
      Top = 208
      Width = 57
      Height = 22
      TabOrder = 2
      OnChange = _scharChange
    end
    object _bool: TCSpinEdit
      Tag = 2
      Left = 176
      Top = 336
      Width = 57
      Height = 22
      TabOrder = 3
      OnChange = _boolChange
    end
    object _double: TCSpinEdit
      Tag = 2
      Left = 176
      Top = 304
      Width = 57
      Height = 22
      TabOrder = 4
      OnChange = _doubleChange
    end
    object _float: TCSpinEdit
      Tag = 2
      Left = 176
      Top = 272
      Width = 57
      Height = 22
      TabOrder = 5
      OnChange = _floatChange
    end
    object _uchar: TCSpinEdit
      Tag = 2
      Left = 176
      Top = 176
      Width = 57
      Height = 22
      TabOrder = 6
      OnChange = _ucharChange
    end
    object _char: TCSpinEdit
      Tag = 2
      Left = 176
      Top = 144
      Width = 57
      Height = 22
      TabOrder = 7
      OnChange = _charChange
    end
    object _sint: TCSpinEdit
      Tag = 2
      Left = 176
      Top = 112
      Width = 57
      Height = 22
      TabOrder = 8
      OnChange = _sintChange
    end
    object _wchar_t: TCSpinEdit
      Tag = 2
      Left = 176
      Top = 240
      Width = 57
      Height = 22
      TabOrder = 9
      OnChange = _wchar_tChange
    end
    object Edit1: TEdit
      Tag = 3
      Left = 232
      Top = 48
      Width = 65
      Height = 21
      Enabled = False
      TabOrder = 10
      Text = '0'
    end
    object Edit2: TEdit
      Tag = 3
      Left = 232
      Top = 80
      Width = 65
      Height = 21
      Enabled = False
      TabOrder = 11
      Text = '0'
    end
    object Edit3: TEdit
      Tag = 3
      Left = 232
      Top = 112
      Width = 65
      Height = 21
      Enabled = False
      TabOrder = 12
      Text = '0'
    end
    object Edit4: TEdit
      Tag = 3
      Left = 232
      Top = 144
      Width = 65
      Height = 21
      Enabled = False
      TabOrder = 13
      Text = '0'
    end
    object Edit5: TEdit
      Tag = 3
      Left = 232
      Top = 176
      Width = 65
      Height = 21
      Enabled = False
      TabOrder = 14
      Text = '0'
    end
    object Edit6: TEdit
      Tag = 3
      Left = 232
      Top = 208
      Width = 65
      Height = 21
      Enabled = False
      TabOrder = 15
      Text = '0'
    end
    object Edit7: TEdit
      Tag = 3
      Left = 232
      Top = 240
      Width = 65
      Height = 21
      Enabled = False
      TabOrder = 16
      Text = '0'
    end
    object Edit8: TEdit
      Tag = 3
      Left = 232
      Top = 272
      Width = 65
      Height = 21
      Enabled = False
      TabOrder = 17
      Text = '0'
    end
    object Edit9: TEdit
      Tag = 3
      Left = 232
      Top = 304
      Width = 65
      Height = 21
      Enabled = False
      TabOrder = 18
      Text = '0'
    end
    object Edit10: TEdit
      Tag = 3
      Left = 232
      Top = 336
      Width = 65
      Height = 21
      Enabled = False
      TabOrder = 19
      Text = '0'
    end
    object calc: TBitBtn
      Left = 48
      Top = 384
      Width = 75
      Height = 25
      TabOrder = 20
      OnClick = calcClick
      Kind = bkOK
    end
    object def: TBitBtn
      Left = 192
      Top = 384
      Width = 75
      Height = 25
      Caption = #1057#1073#1088#1086#1089
      TabOrder = 21
      OnClick = defClick
      Kind = bkAbort
    end
    object show_results: TButton
      Left = 72
      Top = 424
      Width = 193
      Height = 73
      Caption = #1057#1090#1072#1090#1080#1089#1090#1080#1082#1072
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 22
      Visible = False
      OnClick = show_resultsClick
    end
  end
  object GroupBox3: TGroupBox
    Left = 8
    Top = 288
    Width = 233
    Height = 121
    Caption = #1054#1073#1097#1072#1103' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1103
    TabOrder = 2
    object Label1: TLabel
      Left = 11
      Top = 24
      Width = 5
      Height = 22
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object total_mem: TEdit
      Left = 8
      Top = 76
      Width = 209
      Height = 30
      Enabled = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clLime
      Font.Height = -19
      Font.Name = 'Times New Roman'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      Text = '0'
    end
  end
end
