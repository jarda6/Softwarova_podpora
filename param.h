#ifndef _PARAM_H_
#define _PARAM_H_

/*!
 * \brief Hlavičkový soubor pro práci s argumenty
 * \author Jaromír Šarf
 * \author Matěj Hynek.
 */
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*!
 * \brief Spoustěcí funkce pro ověřování argumentů
 * \param argc počet argumentu
 * \param argv řetězec argumentů
 * \return Vrací true, false
 */
bool param(int argc, char ** argv);

#endif //_PARAM_H_
