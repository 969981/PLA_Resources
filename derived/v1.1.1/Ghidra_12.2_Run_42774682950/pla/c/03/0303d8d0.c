/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303d8d0; name: FUN_0303d8d0
 */


void FUN_0303d8d0(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = *param_2;
  uVar1 = *(int *)((long)param_2 + 0x24) + 1;
  if ((int)param_2[4] == 0) {
    uVar3 = 0xffffffff;
  }
  else if ((~*(uint *)(lVar2 + 8) & 0xffffff) == 0) {
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      if (uVar1 <= uVar3) {
        uVar3 = 0xffffffff;
        break;
      }
    } while ((~*(uint *)(lVar2 + (ulong)uVar3 * 0x10 + 8) & 0xffffff) == 0);
  }
  else {
    uVar3 = 0;
  }
  *param_1 = lVar2;
  *(uint *)(param_1 + 1) = uVar1;
  *(uint *)((long)param_1 + 0xc) = uVar3;
  param_1[3] = 0;
  param_1[4] = -0x100000000;
  return;
}


