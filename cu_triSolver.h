#ifndef CU_TRI_SOLVER_H
#define CU_TRI_SOLVER_H

#include <thrust/host_vector.h>



/**
 * This method will perform the cyclic reduction method of solving tridiagaonl matrices.
 * 
 * Parameters:
 * - size - The dimmension of the matrix
 * - vect_a - The sub diagonal of the matrix
 * - vect_b - The main diagonal of the matrix
 * - vect_c - The super diagonal of the matrix
 * - vect_d - The result column
 *
 * Returns:
 * - Vector containing the resuls 
 */
thrust::host_vector<double>  crSolve(int size, thrust::host_vector<double> vect_a, thrust::host_vector<double> vect_b, thrust::host_vector<double> vect_c, thrust::host_vector<double> vect_d);




#endif

