/* -*- c-basic-offset: 8 -*-
   rdesktop: A Remote Desktop Protocol client.
   Seamless windows - Shared helper functions

   Copyright 2014 Henrik Andersson <hean01@cendio.se> for Cendio AB

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _SHARED_H
#define _SHARED_H

#include <windows.h>

#define LOG_DEBUG0  0
#define LOG_DEBUG1  1
#define LOG_DEBUG2  2
#define LOG_DEBUG3  3
#define LOG_DEBUG4  4
#define LOG_DEBUG5  5
#define LOG_INFO    6
#define LOG_WARNING 7
#define LOG_ERROR   8

long hwnd_to_long(HWND hwnd);
HWND long_to_hwnd(long val);

HICON get_icon(HWND hwnd, int large);
int extract_icon(HICON icon, char *buffer, int maxlen);

void logger_log(const char *domain, int level, const char *format, ...);
void logger_rotate();

#endif /* _SHARED_H */
