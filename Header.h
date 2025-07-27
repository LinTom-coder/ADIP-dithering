#pragma once
#ifndef MYHEADER_H
#define MYHEADER_H

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <time.h>
#include <windows.h>
//#include <opencv2/opencv.hpp>
//#include <opencv2/highgui/highgui.hpp>

void hw2_2();

double MSE(unsigned char*, unsigned char*, int, int);
double PSNR(double, unsigned char*, int, int);


#endif  // MYHEADER_H

