#include "wall_painter.hpp"

int wallpainter::paint(){
    //This is a dummy value

    //for all points on the wall
    for (int x = 0; x < wall_coordinates.size(); x++){

        //move to specific (x,y,z) position on wall
        move_to_position(wall_coordinates[x].x, wall_coordinates[x].y, wall_coordinates[x].z);
        //get colour mapping to point (x,y) on wall and choose colour of paint depending on mapping colour

        
        //splutter the colour on the ccoordinates (x,y) on wall
        

        //stabilize position(x,y,z) This should be asynchronous
        //further work will be done to always run an asynchoronus thread to stabilize position
        stabilize_position(wall_coordinates[x].x, wall_coordinates[x].y, wall_coordinates[x].z);
    }
    return 0;
}
