object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'MainForm'
  ClientHeight = 441
  ClientWidth = 624
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object OpenMonitorButton: TButton
    Left = 280
    Top = 232
    Width = 97
    Height = 25
    Caption = 'Open Monitor'
    TabOrder = 0
    OnClick = OpenMonitorButtonClick
  end
end
