/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bfa40; name: FUN_032bfa40
 */


uint * FUN_032bfa40(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = *(uint *)(param_1 + 2);
  if (uVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return (uint *)0x0;
  }
  puVar3 = *(uint **)(*param_1 + 8);
  *param_1 = (long)puVar3;
  if (puVar3 != (uint *)0x0) {
    uVar1 = *puVar3 & 0xffff;
    if ((int)uVar2 <= (int)(*puVar3 & 0xffff)) {
      uVar1 = uVar2;
    }
    if (0 < (int)uVar1) {
      *(uint *)(param_1 + 2) = uVar2 - uVar1;
      *(uint *)((long)param_1 + 0x14) = uVar1;
      param_1[1] = (long)(puVar3 + 8);
      return puVar3 + 8;
    }
  }
  param_1[1] = 0;
  return (uint *)0x0;
}


