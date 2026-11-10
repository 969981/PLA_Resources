/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e70938; name: FUN_02e70938
 */


void FUN_02e70938(long param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  *(byte *)((long)param_2 + 0x14) = *(byte *)((long)param_2 + 0x14) & 0xf8 | 2;
  lVar5 = *(long *)param_2[1];
  uVar3 = *(uint *)((long *)param_2[1] + 3);
  uVar4 = *(uint *)(param_1 + 0x90);
  uVar1 = lVar5 + (ulong)*(uint *)(param_2 + 2);
  iVar2 = uVar3 - *(uint *)(param_2 + 2);
  if (uVar1 < uVar4 && (ulong)uVar4 < lVar5 + (ulong)uVar3) {
    iVar2 = uVar4 - (int)uVar1;
  }
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) - iVar2;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_2[1] + 0x18);
  if (*(long *)(param_1 + 0xd8) == 0) {
    *(long **)(param_1 + 0xd8) = param_2;
    *param_2 = 0;
    return;
  }
  *param_2 = *(long *)(param_1 + 0xd8);
  *(long **)(param_1 + 0xd8) = param_2;
  return;
}


