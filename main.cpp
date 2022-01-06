#include <iostream>
#include <fstream>
#include <iomanip>
#include "Sculptor.h"
#include "Voxel.h"

int main(void){
    Sculptor SM(80,80,80);

    // Cabeça do spiderman
    SM.setColor(1.0,0,0,0);
    SM.putEllipsoid(40,60,20,10,7,5);

    //Olhos do spiderman
    SM.setColor(0,0,0,0);
    SM.putBox(44,45,59,64,24,25);
    SM.putBox(41,44,59,60,24,25);
    SM.putBox(41,44,62,63,24,25);
    SM.putBox(41,42,59,62,24,25);

    SM.putBox(35,36,59,64,24,25);
    SM.putBox(36,39,59,60,24,25);
    SM.putBox(36,39,62,63,24,25);
    SM.putBox(38,39,59,62,24,25);

    SM.setColor(1.0,1.0,1.0,0);
    SM.putBox(36,38,60,62,24,25);
    SM.putBox(42,44,60,62,24,25);

    //Tronco do spirderman
    SM.setColor(1.0,0,0,0);
    SM.putBox(30,50,32,53,15,25);
    //Detalhes do tronco parte de baixo
    SM.setColor(0,0,1.0,0);
    SM.putBox(30,50,32,36,15,25);
    //Detalhes do tronco parte dos lados
    SM.putBox(30,32,37,48,15,25);
    SM.putBox(48,50,37,48,15,25);
    SM.putBox(32,34,37,45,15,25);
    SM.putBox(46,48,37,45,15,25);
    SM.putBox(34,36,37,42,15,25);
    SM.putBox(44,46,37,42,15,25);

    //Aranha do spiderman
    SM.setColor(0,0,0,0);
    SM.putBox(39,42,45,48,24,25);
    SM.putBox(40,41,43,50,24,25);
    SM.putVoxel(37,49,24);
    SM.putVoxel(38,48,24);
    SM.putVoxel(43,49,24);
    SM.putVoxel(42,48,24);
    SM.putVoxel(37,43,24);
    SM.putVoxel(38,44,24);
    SM.putVoxel(43,43,24);
    SM.putVoxel(42,44,24);
    SM.putBox(37,44,46,47,24,25);

    //Braços do spiderman
    SM.setColor(0,0,1.0,0);
    SM.putBox(25,30,35,52,17,23);
    SM.putBox(50,55,35,52,17,23);
    //Detalhes do braço
    SM.setColor(1.0,0,0,0);
    SM.putBox(25,30,48,52,17,23);
    SM.putBox(50,55,48,52,17,23);
    SM.putBox(25,30,35,37,17,23);
    SM.putBox(50,55,35,37,17,23);

    //Pernas do spiderman
    SM.setColor(0,0,1.0,0);
    SM.putBox(32,37,20,32,17,23);
    SM.putBox(43,48,20,32,17,23);
    //Detalhes da perna
    SM.setColor(1.0,0,0,0);
    SM.putBox(32,37,20,24,17,23);
    SM.putBox(43,48,20,24,17,23);

    // Escrever no arquivo
    SM.writeOFF((char*)"Spiderman.off");


    // TESTE DAS FUNCIONALIDADES IMPLEMENTADAS
    Sculptor Esf(31,31,31);
    Esf.setColor(0,1.0,0,0);
    Esf.putSphere(15,15,15,10);
    Esf.cutSphere(15,19,15,11);
    Esf.writeOFF((char*)"Esfera.off");

    Sculptor Eli(31,31,31);
    Eli.setColor(0,1.0,0,0);
    Eli.putEllipsoid(15,15,15,10,7,5);
    Eli.cutEllipsoid(15,15,17,7,5,3);
    Eli.writeOFF((char*)"Elipsoide.off");

    Sculptor Box (31,31,31);
    Box.setColor(0,1.0,0,0);
    Box.putBox(1,30,1,30,1,30);
    Box.cutBox(2,29,2,29,2,30);
    Box.writeOFF((char*)"Box.off");

    return 0;
}
