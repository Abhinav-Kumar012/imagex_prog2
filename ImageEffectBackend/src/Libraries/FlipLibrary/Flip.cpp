#include"Flip.h"
#include"../Pixel.h"
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;


void applyFlipEffect(vector<vector<Pixel>>& image,int h, int v){
    if (h) for (vector<Pixel>& row: image) reverse(row.begin(), row.end());
    if (v) reverse(image.begin(), image.end());
}