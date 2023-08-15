// =================================================================
//
// File: activity.h
// Author: Ricardo Sierra Roa - A01709887
// Date: 15/08/2023
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n)
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
	int sum = 0, aux = n;
    for(int i=0; i<n; i++){
        sum += aux;
        aux -= 1;
    }
    return sum;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n)
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
	if(n == 1){
        return 1;
    }else{
        return n + sumaRecursiva(n-1);   
    }
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(1)
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
	//Formula Gauss
    return (n*(n+1))/2;
}

#endif /* ACTIVITY_H */
