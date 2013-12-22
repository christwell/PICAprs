/***************************************************************************
 *                                                                         *
 *  This program is free software; you can redistribute it and/or modify   *
 *  it under the terms of the GNU General Public License as published by   *
 *  the Free Software Foundation; either version 2 of the License, or      *
 *  (at your option) any later version.                                    *
 *                                                                         *
 *  This program is distributed in the hope that it will be useful,        *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *  GNU General Public License for more details.                           *
 *                                                                         *
 *  You should have received a copy of the GNU General Public License      *
 *  along with this program; if not, write to the Free Software            *
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111 USA    *
 *                                                                         *
 ***************************************************************************
 *                                                                         *
 *               (c) Copyright, 1997-2013, ANSR                            *
 *                                                                         *
 ***************************************************************************
 *                                                                         *
 * Filename:     FIFO.h                                                    *
 *                                                                         *
 ***************************************************************************/

#ifndef FIFO_H
#define FIFO_H

#include "main.h"

/**
 *  @defgroup library Generic Library Functions
 *
 *  @{
 */

/**
 * Generic FIFO suitable for UART ports and other 8-bit based devices
 * that require a data FIFO.
 */

void FifoClear();
bool_t FifoHasData();
uint8_t FifoRead();
void FifoWrite(uint8_t value);

/** @} */

#endif  // #ifndef FIFO_H