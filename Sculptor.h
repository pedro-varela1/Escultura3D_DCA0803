#ifndef SCULPTOR_H
#define SCULPTOR_H

#include "Voxel.h"

class Sculptor{
private:
  Voxel ***m; // 3D matrix
  int nx,ny,nz; // Dimensions of a cube
  float r,g,b; // Current drawing color
  float a; // Transparency
  float lado; // Auxiliary variables
  int i, j, k, x,y,z;

public:
  Sculptor(int _nx=1, int _ny=1, int _nz=1);
  ~Sculptor();
  void alocar();
  void liberar();

  void setColor(float r, float g, float b, float a);

  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
  void cutBox (int x0, int x1, int y0, int y1, int z0, int z1);

  void putEllipsoid (int x0, int y0, int z0, int rx, int ry, int rz);
  void cutEllipsoid (int x0, int y0, int z0, int rx, int ry, int rz);

  void putSphere (int x0, int y0, int z0, int rr);
  void cutSphere (int x0, int y0, int z0, int rr);

  void putVoxel(int x0, int y0, int z0);
  void cutVoxel(int x0, int y0, int z0);

  void writeOFF(char* v);

};

#endif // SCULPTOR_H

