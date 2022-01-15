#include "Utils.hpp"

wxBitmap Utils::scale_bitmap(wxBitmap temp_bitmap, int x, int y)
{
    wxImage temp_image = temp_bitmap.ConvertToImage();
    temp_image.Scale(x, y);
    wxBitmap result = wxBitmap(temp_image);

    return wxBitmap(result);
}