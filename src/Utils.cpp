#include "Utils.hpp"

void Utils::scale_bitmap(wxBitmap &bitmap, int x, int y)
{
    wxImage temp_image = bitmap.ConvertToImage();
    temp_image.Scale(x, y);
    bitmap = wxBitmap(temp_image);
}