#ifndef WALLPAPER_HPP
#define WALLPAPER_HPP
#include <string>

class wallpaper{

    public:
        wallpaper();
        wallpaper(std::string imagesrc);
        int get_rgb_values();
        int get_coordinates();

};

#endif