/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3c930; name: FUN_02f3c930
 */


void FUN_02f3c930(long param_1,int param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  int local_30 [2];
  undefined1 local_28;
  
  local_28 = 0;
  uVar1 = param_2 - *(int *)(*(long *)(param_1 + 0x18) + 0x90);
  dVar2 = (double)NEON_ucvtf((ulong)DAT_042ab258);
  dVar2 = ((double)(int)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 1000.0) / dVar2;
  dVar3 = 0.5;
  if (dVar2 <= 0.0) {
    dVar3 = -0.5;
  }
  local_30[0] = (int)(dVar3 + dVar2);
  local_30[1] = 4;
  FUN_02f3c048(*(long *)(param_1 + 0x18),local_30,0xffffffff);
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) | 4;
  return;
}


