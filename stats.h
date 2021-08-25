/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief contains definitions of all the functions in stats.c
 * @author Hardik Agarwal
 * @date August 25,2021
 */
#ifndef __STATS_H__
#define __STATS_H__
/**
 * @brief Prints all the elements of the unsigned character array
 * This funtion takes input of 8-bit character array and its size.
 * It prints each character space seperated.
 */
void print_array(unsigned char *a,unsigned char n);
/**
 * @brief Find mean of all elements unsigned character array
 * This funtion takes input of 8-bit character array and its size.
 * Return float value mean of all elements.
 */
float find_mean(unsigned char *a,unsigned char n);
/**
 * @brief sorts all the elements in Ascending order of array.
 * Needed for Mode and Median calculation
 * This funtion takes input of 8-bit character array and its size.
 * Returns sorted unsigned char array
 */
unsigned char * sorted_array(unsigned char *a,unsigned char n);
/**
 * @brief sorts all the elements in Descending order of array
 * This funtion takes input of 8-bit character array and its size.
 * Returns sorted unsigned char array
 */
unsigned char * sort_array(unsigned char *a,unsigned char n);
/**
 * @brief find median of all elements of array
 * This funtion takes input of 8-bit character array and its size.
 * Returns float point median
 */
float find_median(unsigned char *a,unsigned char n);
/**
 * @brief find mode of all elements of Array.
 * This funtion takes input of 8-bit character array and its size.
 * Returns 8-bit character mode of the array.
 */
unsigned char find_mode(unsigned char *a,unsigned char n);
/**
 * @brief Find maximum of all elements of array.
 * This funtion takes input of 8-bit character array and its size.
 * Returns 8-bit maximum character.
 */
unsigned char find_maximum(unsigned char *a,unsigned char n);
/**
 * @brief Find minimum of all elements of array.
 * This funtion takes input of 8-bit character array and its size.
 * Returns 8-bit minimum character.
 */
unsigned char find_minimum(unsigned char *a,unsigned char n);
/**
 * @brief Prints Statistics of the given data.
 * This funtion takes input of 8-bit character array and its size.
 */
void print_statistics(unsigned char *a,unsigned char n);
#endif /* __STATS_H__ */
