/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e3020; name: FUN_004e3020
 */


undefined8 FUN_004e3020(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 < 0x390) {
    if (param_1 < 0x198) {
      if (param_1 == 6) {
        uVar1 = 0;
      }
      else {
        if (param_1 != 0x74) {
          return 0;
        }
        uVar1 = 2;
      }
    }
    else if (param_1 == 0x198) {
      uVar1 = 3;
    }
    else {
      if (param_1 != 0x32b) {
        return 0;
      }
      uVar1 = 4;
    }
  }
  else if (param_1 < 0x3d4) {
    if (param_1 == 0x390) {
      uVar1 = 1;
    }
    else {
      if (param_1 != 0x3d3) {
        return 0;
      }
      uVar1 = 5;
    }
  }
  else if (param_1 == 0x3d4) {
    uVar1 = 6;
  }
  else if (param_1 == 0x43f) {
    uVar1 = 7;
  }
  else {
    if (param_1 != 0x440) {
      return 0;
    }
    uVar1 = 8;
  }
  *param_2 = uVar1;
  return 1;
}


