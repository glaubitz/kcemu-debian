/*
 *  KCemu -- The emulator for the KC85 homecomputer series and much more.
 *  Copyright (C) 1997-2010 Torsten Paul
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __kc_mod_disk_h
#define __kc_mod_disk_h

#include "kc/memory.h"
#include "kc/mod_rom.h"

class ModuleDisk : public ModuleROM
{
 private:
  int _slot;
  
 public:
  ModuleDisk(ModuleDisk &tmpl);
  ModuleDisk(const char *rom_key, const char *name, byte_t id, int slot);
  virtual ~ModuleDisk(void);

  virtual word_t get_addr(byte_t val);

  virtual void m_out(word_t addr, byte_t val);
  virtual ModuleInterface * clone(void);
};

#endif /* __kc_mod_disk_h */
