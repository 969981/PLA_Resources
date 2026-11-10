/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a7660; name: FUN_005a7660
 */


ulong FUN_005a7660(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((long)param_1 < 1000) {
    return param_1;
  }
  uVar1 = (uint)param_1;
  if ((long)param_1 < 10000) {
    uVar2 = (ulong)(uVar1 & 0xffff) / 10;
    if ((uVar1 + ((uVar1 & 0xffff) / 10) * -10 & 0xffff) != 0) {
      uVar2 = uVar2 + 1;
    }
    return uVar2 * 10;
  }
  if ((long)param_1 < 100000) {
    lVar3 = 100;
    uVar2 = (param_1 & 0xffffffff) / 100;
  }
  else {
    lVar3 = 1000000;
    if ((long)param_1 < 1000000) {
      lVar3 = 1000;
      uVar2 = (param_1 & 0xffffffff) / 1000;
    }
    else if ((long)param_1 < 10000000) {
      lVar3 = 10000;
      uVar2 = (param_1 & 0xffffffff) / 10000;
    }
    else {
      if ((long)param_1 < 100000000) {
        uVar4 = param_1 >> 5 & 0x7ffffff;
        uVar2 = uVar4 / 0xc35;
        if (uVar1 + (int)(uVar4 / 0xc35) * -100000 != 0) {
          uVar2 = uVar2 + 1;
        }
        return uVar2 * 100000;
      }
      if (999999999 < (long)param_1) {
        uVar2 = param_1 / 10000000;
        if (param_1 % 10000000 != 0) {
          uVar2 = uVar2 + 1;
        }
        return uVar2 * 10000000;
      }
      uVar2 = (param_1 & 0xffffffff) / 1000000;
    }
  }
  if (uVar1 != (int)uVar2 * (int)lVar3) {
    uVar2 = uVar2 + 1;
  }
  return uVar2 * lVar3;
}


