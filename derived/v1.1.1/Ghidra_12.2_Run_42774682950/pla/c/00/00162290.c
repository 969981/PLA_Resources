/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00162290; name: FUN_00162290
 */


ulong FUN_00162290(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = (uint)param_1;
  if (7 < uVar1) {
    if (uVar1 < 0x80) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      do {
        uVar2 = (int)param_1 + 0xf;
        uVar1 = uVar2 >> 4;
        param_1 = (ulong)uVar1;
        iVar3 = iVar3 + 4;
      } while (0x7ff < uVar2);
    }
    uVar2 = (uint)param_1;
    if (0xf < uVar1) {
      do {
        uVar1 = (int)param_1 + 1;
        uVar2 = uVar1 >> 1;
        param_1 = (ulong)uVar2;
        iVar3 = iVar3 + 1;
      } while (0x1f < uVar1);
    }
    param_1 = (ulong)(iVar3 * 8 + 8U | uVar2 - 8);
  }
  return param_1;
}


