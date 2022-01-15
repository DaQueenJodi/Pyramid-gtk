#include "cMain.hpp"
#include <wx/wx.h>
#include <wx/bmpbuttn.h>

const int MAX_HEIGHT = 1;
const int MAX_WIDTH = 5;


cMain::cMain() : wxFrame(nullptr, wxID_ANY, "penis", wxPoint(300,300), wxSize(1280, 720))
{
    cards = new wxBitmapButton*[MAX_WIDTH * MAX_HEIGHT];
    auto* grid = new wxGridSizer(MAX_HEIGHT, MAX_WIDTH, 0, 0);
    wxBitmap temp_bitmap;
    temp_bitmap.LoadFile("gfx/MC.png", wxBITMAP_TYPE_PNG);
    wxImage temp_image = temp_bitmap.ConvertToImage();
    temp_image.Scale(10,10);
    wxBitmap bitmap = wxBitmap(temp_image);

    

    for (int x = 0; x < MAX_WIDTH; x++)
    {
        cards[x] = new wxBitmapButton(this, x, bitmap);
        grid->Add(cards[x], wxALL, wxEXPAND);
    }
    this->SetSizer(grid);
    grid->Layout();
    grid->SetSizeHints(this);
}

cMain::~cMain()
{
    delete cards;
}