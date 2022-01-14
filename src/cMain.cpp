#include "cMain.hpp"
#include <wx/wx.h>


cMain::cMain() : wxFrame(nullptr, wxID_ANY, "penis", wxPoint(300,300), wxSize(800, 600))
{
    buttons = new wxButton*[10 * 10];
    auto* grid = new wxGridSizer(10, 10, 0, 0);

    for (int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            buttons[y*10 + x] = new wxButton(this, 10000 + (y * 10 + x), "balls");
            grid->Add(buttons[y * 10 + x], 1, wxEXPAND | wxALL);
        }
    }

    this->SetSizer(grid);
    grid->Layout();
}

cMain::~cMain()
{
    delete buttons;
}