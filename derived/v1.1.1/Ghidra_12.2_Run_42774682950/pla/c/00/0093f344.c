/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0093f344; name: FUN_0093f344
 */


undefined4 FUN_0093f344(undefined8 *param_1)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_02c628e4(*param_1);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  iVar2 = FUN_02c5be48(*param_1);
  sVar1 = FUN_02c5be50(*param_1);
  if (iVar2 < 0x225) {
    if (iVar2 < 0x1e3) {
      if (iVar2 == 0x65) {
        if (sVar1 != 2) {
          return 0;
        }
        lVar4 = 1;
      }
      else {
        if (iVar2 != 0x3b) {
          return 0;
        }
        if (sVar1 != 2) {
          return 0;
        }
        lVar4 = 4;
      }
    }
    else if (iVar2 == 0x1e3) {
      if (sVar1 != 1) {
        return 0;
      }
      lVar4 = 5;
    }
    else if (iVar2 == 0x1e4) {
      if (sVar1 != 1) {
        return 0;
      }
      lVar4 = 6;
    }
    else {
      if (iVar2 != 0x1ed) {
        return 0;
      }
      if (sVar1 != 0) {
        return 0;
      }
      lVar4 = 7;
    }
  }
  else if (iVar2 == 900) {
    if (sVar1 != 1) {
      return 0;
    }
    lVar4 = 0;
  }
  else if (iVar2 == 0x225) {
    if (sVar1 != 2) {
      return 0;
    }
    lVar4 = 2;
  }
  else {
    if (iVar2 != 0x2c9) {
      return 0;
    }
    if (sVar1 != 2) {
      return 0;
    }
    lVar4 = 3;
  }
  return (&DAT_03a75a24)[lVar4 * 3];
}


