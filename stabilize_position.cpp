#include "wall_painter.hpp"


/*
Takes x,y,z coordinates and reactively stabilizes the drone in these coordinates

THis coordinate is for painting on teh wall so the z ccordinate is a slight distance from the wall

@param x: x coordinate on the wall
@param y: y coordinate on the wall
@param z: z coordinate on the wall
@return bool: true if the position is reached, false if the position is not reached


*/
void wallpainter::stabilize_position(int x, int y, int z){
    // move to the position (x,y,z) on the wall
    // return true if the position is reached
    while(true){
        coordinate current = get_current_coordinates();
        double error_x = find_error(current.x, x);
        double error_y = find_error(current.y, y);
        double error_z = find_error(current.z, z);
        move_to_position(x, y, z);
    }
    // return false if the position is not reached
}

double find_error(double current, double target){
    return target - current;
}