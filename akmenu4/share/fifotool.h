/*
    fifotool.h
    Copyright (C) 2009 yellow wood goblin

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __FIFOTOOL_H__
#define __FIFOTOOL_H__

typedef enum {
	MENU_MSG_GBA,
	MENU_MSG_ARM7_REBOOT,
	MENU_MSG_ARM7_READY_BOOT,
	MENU_MSG_BRIGHTNESS_NEXT,
	MENU_MSG_SYSTEM,
	MENU_MSG_BRIGHTNESS_GET,
  MENU_MSG_BRIGHTNESS_SET0,
  MENU_MSG_BRIGHTNESS_SET1,
  MENU_MSG_BRIGHTNESS_SET2,
  MENU_MSG_BRIGHTNESS_SET3,
  MENU_MSG_SHUTDOWN,
} WoodR4Commands;

#endif
