#pragma once
#include"constants.h"
#include"stdafx.h"

//template - создание шаблона
//typename - создаёт шаблонный тип данных
//T - это имя шаблона (T - type)

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);