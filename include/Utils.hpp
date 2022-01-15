#include <wx/wx.h>
#include <wx/bitmap.h>

class Utils
{
    public:
        static wxBitmap scale_bitmap(wxBitmap bitmap, int x, int y);
};