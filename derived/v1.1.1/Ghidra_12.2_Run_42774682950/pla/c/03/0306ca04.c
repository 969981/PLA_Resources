/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306ca04; name: FUN_0306ca04
 */


uint * FUN_0306ca04(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  if ((param_2 & 1) == 0) {
    puVar4 = (uint *)(param_1[1] + 0x100);
  }
  else {
    puVar4 = (uint *)(param_1[1] + 0x10);
  }
  iVar3 = *(int *)((long)param_1 + 0x14) + -1;
  param_1[1] = (long)puVar4;
  *(int *)((long)param_1 + 0x14) = iVar3;
  if (0 < iVar3) {
    return puVar4;
  }
  uVar2 = *(uint *)(param_1 + 2);
  if (uVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return (uint *)0x0;
  }
  puVar4 = *(uint **)(*param_1 + 8);
  *param_1 = (long)puVar4;
  if (puVar4 != (uint *)0x0) {
    uVar1 = *puVar4 & 0xffff;
    if ((int)uVar2 <= (int)(*puVar4 & 0xffff)) {
      uVar1 = uVar2;
    }
    if (0 < (int)uVar1) {
      *(uint *)(param_1 + 2) = uVar2 - uVar1;
      *(uint *)((long)param_1 + 0x14) = uVar1;
      param_1[1] = (long)(puVar4 + 8);
      return puVar4 + 8;
    }
  }
  param_1[1] = 0;
  return (uint *)0x0;
}


