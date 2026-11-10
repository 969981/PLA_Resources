/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e30e0; name: FUN_004e30e0
 */


undefined * FUN_004e30e0(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_00423a50();
  if (iVar1 < 0x390) {
    if (iVar1 < 0x198) {
      lVar2 = 0;
      if (iVar1 != 6) {
        if (iVar1 != 0x74) {
          return (undefined *)0x0;
        }
        lVar2 = 2;
      }
    }
    else if (iVar1 == 0x198) {
      lVar2 = 3;
    }
    else {
      if (iVar1 != 0x32b) {
        return (undefined *)0x0;
      }
      lVar2 = 4;
    }
  }
  else if (iVar1 < 0x3d4) {
    if (iVar1 == 0x390) {
      lVar2 = 1;
    }
    else {
      if (iVar1 != 0x3d3) {
        return (undefined *)0x0;
      }
      lVar2 = 5;
    }
  }
  else if (iVar1 == 0x3d4) {
    lVar2 = 6;
  }
  else if (iVar1 == 0x43f) {
    lVar2 = 7;
  }
  else {
    if (iVar1 != 0x440) {
      return (undefined *)0x0;
    }
    lVar2 = 8;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = lVar2;
  }
  return &DAT_03a286dc + lVar2 * 8;
}


