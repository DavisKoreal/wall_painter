#ifndef WALL_PAINTER_HPP
#define WALL_PAINTER_HPP

class wallpainter{

    public:
        wallpainter();
        int paint();
        int test_strenght_of_hang();
        int populate_wallpaper();
        int map_wallpaper_to_wall();
        void stabilize_position(int x, int y, int z);
}; 

#endif