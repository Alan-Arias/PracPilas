object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 319
  ClientWidth = 414
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 134
    Top = 1
    Width = 28
    Height = 23
    Caption = 'Pila'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 269
    Top = 44
    Width = 125
    Height = 13
    Caption = '<--Puede revisarmelo'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 288
    Top = 63
    Width = 61
    Height = 13
    Caption = 'Ingeniero?'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Button1: TButton
    Left = 8
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Push'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 8
    Top = 39
    Width = 75
    Height = 25
    Caption = 'Pop'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 8
    Top = 70
    Width = 75
    Height = 25
    Caption = 'Cantidad'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 8
    Top = 101
    Width = 75
    Height = 25
    Caption = 'Eliminar'
    TabOrder = 3
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 8
    Top = 132
    Width = 75
    Height = 25
    Caption = 'Cabeza'
    TabOrder = 4
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 8
    Top = 163
    Width = 75
    Height = 25
    Caption = 'Asignar'
    TabOrder = 5
    OnClick = Button6Click
  end
  object Memo1: TMemo
    Left = 113
    Top = 30
    Width = 64
    Height = 280
    TabOrder = 6
  end
  object Button7: TButton
    Left = 8
    Top = 194
    Width = 75
    Height = 25
    Caption = 'Invertir'
    TabOrder = 7
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 183
    Top = 39
    Width = 90
    Height = 25
    Caption = 'UltimoElemento'
    TabOrder = 8
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 8
    Top = 225
    Width = 75
    Height = 25
    Caption = 'PushDoble'
    TabOrder = 9
    OnClick = Button9Click
  end
end
