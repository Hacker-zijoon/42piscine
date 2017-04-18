/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmisiedj <me@wmisiedjan.net>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 01:34:52 by wmisiedj          #+#    #+#             */
/*   Updated: 2017/04/11 01:40:34 by wmisiedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#include "match.c"
#include "../../d06/ex00/ft_atoi.c"

#define SUCCESS printf("\e[0;32m - PASSES ✓\e[0m\n");
#define ERROR printf("\e[0;31m - ERROR ✗\e[0m\n")
#define SLOW printf("\e[0;33m - SLOW CODE ✗\e[0m\n")

#define TEST_CASES 29

void	ft_add_test_case(char **data, char *s1, char *s2, char *result)
{
	data[0] = s1;
	data[1] = s2;
	data[2] = result;
}

void	ft_get_values(char **data, char **s1, char **s2, char **result)
{
	*s1 = data[0];
	*s2 = data[1];
	*result = data[2];
}

int main(int argc, char *argv[])
{
    int function;
    int i;
    int daynum;

    daynum = 1;

    printf("[42 Main] Testing Project %i Your Args: %i\n\n\n", daynum, argc);

    if (argc <= 1)
    {
	printf("[ERROR] No proper input given, use number for the exercise.\n\n");
	return (0);
    }

    function = ft_atoi(argv[1]);
    i = 0;

    switch (function)
    {
    case 1:
    {

	if (argc < 3)
	{
	    time_t start_t, end_t;
	    double diff_t;
	    char *data[TEST_CASES][3];
	    char *s1;
	    char *s2;
	    int your_result;
	    char *actual_result;
	    int i;
		int errors = 0;

	    i = 0;
	    //Normal match
	    ft_add_test_case(&data[i++][0], "abc", "abc", "1");
	    ft_add_test_case(&data[i++][0], "abc", "abd", "0");

	    // * matches empty string, different places
	    ft_add_test_case(&data[i++][0], "abcd", "ab*cd", "1");
	    ft_add_test_case(&data[i++][0], "abcd", "ab*ce", "0");
	    ft_add_test_case(&data[i++][0], "abcd", "ab*ed", "0");
	    ft_add_test_case(&data[i++][0], "abcd", "*abcd", "1");
	    ft_add_test_case(&data[i++][0], "abcd", "a*abcd", "0");
	    ft_add_test_case(&data[i++][0], "abcd", "abcd*", "1");
	    ft_add_test_case(&data[i++][0], "abcd", "abcd*d", "0");
	    ft_add_test_case(&data[i++][0], "abcd", "*abcd*", "1");
	    ft_add_test_case(&data[i++][0], "abcd", "ab**cd", "1");
	    ft_add_test_case(&data[i++][0], "abcd", "a*b*c*d", "1");
	    ft_add_test_case(&data[i++][0], "abcd", "ab**cd", "1");
	    ft_add_test_case(&data[i++][0], "abcd", "*", "1");
	    ft_add_test_case(&data[i++][0], "abcd", "**", "1");
	    ft_add_test_case(&data[i++][0], "abcd", "***", "1");

	    // * matches non-empty string, different places
	    ft_add_test_case(&data[i++][0], "abilgewbi;wewb;bicd", "ab*cd", "1");
	    ft_add_test_case(&data[i++][0], "qfwyjhbqw fwqgf abcd", "*abcd", "1");
	    ft_add_test_case(&data[i++][0], "abcdybqwdkqwg   qwiulg", "abcd*", "1");
	    ft_add_test_case(&data[i++][0], "ewg abcdwef", "*abcd*", "1");
	    ft_add_test_case(&data[i++][0], "abfoijqwfijcd", "ab**cd", "1");
	    ft_add_test_case(&data[i++][0], "aasdbqwdcqwdd", "a*b*c*d", "1");
	    ft_add_test_case(&data[i++][0], "abcdgh abcedgh", "*abc*edgh", "1");
	    ft_add_test_case(&data[i++][0], "abcdgh abcdgh", "*abc*edgh", "0");

		//Brain Cses
		ft_add_test_case(&data[i++][0], "amazing alfalfa", "*al*al*", "1");
	    ft_add_test_case(&data[i++][0], "xxxxx", "x*", "1");
	    ft_add_test_case(&data[i++][0], "test string", "*", "1");
	    ft_add_test_case(&data[i++][0], "test string", "**", "1");
	    ft_add_test_case(&data[i++][0], "test string", "* *", "1");

	    i = 0;
	    while (i < TEST_CASES)
	    {
		ft_get_values(&data[i][0], &s1, &s2, &actual_result);
		time(&start_t);
		your_result = match(s1, s2);
		time(&end_t);
		diff_t = difftime(end_t, start_t);
		printf("[MATCH #%i] your_result: %i | actual_result: %i | execution time = %f | ", i, your_result, actual_result[0] - '0', diff_t);
		printf("s1: %s, s2: %s\n", s1, s2);
		if (your_result != actual_result[0] - '0')
		{
			errors += 1;
		    ERROR;
		}
		else
			SUCCESS;
		if (diff_t >= 2.0)
		    SLOW;
		++i;
	    }
	    SUCCESS;
		printf("\n[MATCH] - TOTAL ERRORS: %i", errors);
		return (0);
	}


	printf("[Piscine Project 0%i/ex00] Match 1: \n\n", daynum);
	if (match(argv[2], argv[3]))
	    printf("[Piscine Project 0%i/ex00] Input matched!\n\n", daynum);
	else
	    printf("[Piscine Project 0%i/ex00] No Match!\n\n", daynum);
    }
    }

    return (0);
}
