/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02966bd0; name: FUN_02966bd0
 */


undefined8 FUN_02966bd0(ushort param_1,uint param_2)

{
  ulong uVar1;
  
  if (param_1 < 0x289) {
    if (param_1 < 0x1e7) {
      if (param_1 == 0x17e) {
        if ((param_2 & 0xffff) == 0x217) {
          return 1;
        }
        return 0;
      }
      if (param_1 == 0x17f) {
        if ((param_2 & 0xffff) == 0x216) {
          return 1;
        }
        return 0;
      }
    }
    else {
      if (param_1 == 0x1e7) {
        if ((param_2 & 0xffff) == 0x70) {
          return 1;
        }
        return 0;
      }
      if (param_1 == 0x1ed) {
        if ((param_2 & 0xffff) - 0x12a < 0x10) {
          return 1;
        }
        if ((param_2 & 0xffff) == 0x284) {
          return 1;
        }
        return 0;
      }
    }
  }
  else if (param_1 < 0x378) {
    if (param_1 == 0x289) {
      if ((param_2 & 0xfffc) == 0x74) {
        return 1;
      }
      return 0;
    }
    if (param_1 == 0x305) {
      if ((param_2 - 0x388 & 0xffff) < 0x11) {
        return 1;
      }
      return 0;
    }
  }
  else {
    if (param_1 == 0x378) {
      if ((param_2 & 0xffff) == 0x44f) {
        return 1;
      }
      return 0;
    }
    if (param_1 == 0x379) {
      if ((param_2 & 0xffff) == 0x450) {
        return 1;
      }
      return 0;
    }
  }
  uVar1 = FUN_02c50948(param_2);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return 1;
}


