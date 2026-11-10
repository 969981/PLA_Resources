/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004217c0; name: FUN_004217c0
 */


bool FUN_004217c0(int *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  bVar2 = false;
  if (param_1 != (int *)0x0) {
    if ((*param_1 <= (int)uVar1 >> 3) || (*(long *)(param_1 + 2) == 0)) {
      return false;
    }
    bVar2 = (1 << (ulong)(~param_2 & 7) &
            (uint)*(byte *)(*(long *)(param_1 + 2) + (long)((int)uVar1 >> 3))) != 0;
  }
  return bVar2;
}


