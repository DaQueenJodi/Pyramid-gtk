#pragma once
#include <wx/wx.h>
#include <wx/bmpbuttn.h>
#include <wx/sizer.h>

class cMain : public wxFrame
{

public:
    cMain();
    ~cMain();
public:
    wxBitmap bitmap;
    wxBitmapButton** cards;

};