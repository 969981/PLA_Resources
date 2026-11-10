/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d2020; name: FUN_032d2020
 */


int FUN_032d2020(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((int)uVar3 < 1) {
    return -1;
  }
  lVar2 = *(long *)(param_1 + 8);
  do {
    uVar1 = uVar3 >> 1;
    uVar4 = *(ulong *)(lVar2 + (ulong)uVar1 * 8);
    if (uVar4 <= param_2) {
      if (param_2 <= uVar4) {
        return uVar1 + (int)((ulong)(lVar2 - *(long *)(param_1 + 8)) >> 3);
      }
      lVar2 = lVar2 + (ulong)(uVar1 + 1) * 8;
      uVar1 = uVar3 - (uVar1 + 1);
    }
    uVar3 = uVar1;
  } while (0 < (int)uVar3);
  return -1;
}


