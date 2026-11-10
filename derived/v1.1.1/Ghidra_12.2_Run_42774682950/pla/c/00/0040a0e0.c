/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040a0e0; name: FUN_0040a0e0
 */


int FUN_0040a0e0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((int)param_2 < 0) {
    return -1;
  }
  iVar2 = 1;
  if (0x1e < (int)param_3) {
    do {
      param_3 = param_3 >> 7;
      iVar2 = iVar2 + 1;
    } while (param_3 != 0);
  }
  if (param_1 == 2) {
    iVar2 = iVar2 + 3;
  }
  else {
    iVar2 = iVar2 + 1;
    if (0x7f < (int)param_2) {
      uVar3 = param_2;
      do {
        uVar3 = uVar3 >> 8;
        iVar2 = iVar2 + 1;
      } while (uVar3 != 0);
    }
  }
  iVar1 = iVar2 + param_2;
  if ((int)(0x7fffffff - param_2) <= iVar2) {
    iVar1 = -1;
  }
  return iVar1;
}


