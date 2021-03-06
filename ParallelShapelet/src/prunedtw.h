// Copyright 2018 The Matrix Authors
// This file is part of the Matrix library.
//
// The Matrix library is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// The Matrix library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with the Matrix library. If not, see <http://www.gnu.org/licenses/>.
#include<stdio.h>
#include "cuda_runtime.h"
#include "pub.h"


//__host__ void host_calcdtws(float* data, float* shapelet, char* label, int N, int L, int lo, int hi, int w, int suma, int sumb);

__global__ void kernel_Computedtwsperblock(float* data, float* shapelet, int w, int N, int L, int lo, int hi, float* gpu_cmpMinDist, int idxst, int* gpu_arrindex);

__global__ void kernel_ComputedtwsperblockforlargerW(float* data, float* shapelet, int w, int N, int L, int lo, int hi, float* gpu_cmpMinDist, int idxst, int*  gpu_arrindex);

__global__ void kernel_ComputedtwsperblockforAll(float* data, float* shapelet, int w, int N, int L, int lo, int hi, float* gpu_cmpMinDist, int idxst, int* gpu_arrindex);

//__global__ void kernel_Computeifgain(float* gpu_cmpMinDist, int* gpu_label, const int N, const int totals, float* gpu_infogain, float* gpu_dividepoint, int* gpu_leftis, int* gpu_glbidx, const float outthrehold, const int L, const int lo, const int hi, const int labelcacheoffset, const int coalesceforN);
//for cpu and predict 
//__host__ float Pruning_dtw(float* vec_a, float* vec_b, int w, int M);

