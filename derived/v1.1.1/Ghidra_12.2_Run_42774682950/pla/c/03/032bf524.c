/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bf524; name: FUN_032bf524
 */


void FUN_032bf524(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(*(long *)(param_3 + 0x10) + (long)*(int *)(param_3 + 0x18) * 8 + -8);
  *param_1 = param_3;
  param_1[1] = param_2;
  *(uint *)(param_1 + 3) = *puVar2 >> 0x10;
  uVar1 = *puVar2;
  *(uint *)((long)param_1 + 0x1c) = uVar1 & 0xffff;
  *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) - (uVar1 & 0xffff);
  param_1[2] = (long)puVar2;
  return;
}


