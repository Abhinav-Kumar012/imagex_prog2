#include "Contrast.h"
#include <vector>
using namespace std;
inline int truncate(int x){
    if(x<0){
        return 0;
    }else if(x>255){
        return 255;
    }
    return x;
}
inline int contrast_factor(int color,int factor){
    float new_color = factor*(color-128)+128;
    return truncate((int)new_color);
}
void applyContrastEffect(vector <vector<Pixel>> &image,float x){
    float factor = (259*(255+x))/(255*(259-x));
    for(int i=0;i<image.size();++i){
        for(int j=0;j<image[i].size();++j){
            image[i][j].r = contrast_factor(image[i][j].r,factor);
            image[i][j].b = contrast_factor(image[i][j].b,factor);
            image[i][j].g = contrast_factor(image[i][j].g,factor);
        }
    }
}