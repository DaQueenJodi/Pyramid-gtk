#pragma once
#include <wx/wx.h>
#include <wx/bmpbuttn.h>

class cMain : public wxFrame
{
public:
    cMain();
    ~cMain();
public:
    wxBitmapButton** cards;

};