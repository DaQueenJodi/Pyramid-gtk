#include "cMain.hpp"
#include "Utils.hpp"
#include <wx/wx.h>
#include <wx/ribbon/gallery.h>

const int MAX_HEIGHT = 1;
const int MAX_WIDTH = 2;


cMain::cMain() : wxFrame(nullptr, wxID_ANY, "test", wxPoint(300,300), wxSize(1020, 720))
{
   
    
    bitmap.LoadFile("gfx/tyler.png", wxBITMAP_TYPE_PNG);
    auto gallery = new wxRibbonGallery(this, wxID_ANY);

    gallery->Append(bitmap, 1);
    gallery->Layout();
    //gallery->Show();
    std::cout << gallery->GetCount() << std::endl;
    
}
cMain::~cMain()
{
    delete cards;
}