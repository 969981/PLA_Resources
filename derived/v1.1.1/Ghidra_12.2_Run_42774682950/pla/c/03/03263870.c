/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03263870; name: FUN_03263870
 */


int FUN_03263870(long param_1,long *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_2[1] != *(int *)(param_1 + 0x128)) {
    *(int *)(param_2 + 1) = *(int *)(param_1 + 0x128);
  }
  uVar1 = *(uint *)(param_1 + 0x118);
  if ((int)uVar1 < 1) {
    return 0;
  }
  iVar4 = 0;
  uVar5 = 0;
  do {
    uVar3 = *(ushort *)(*(long *)(param_1 + 0x110) + (ulong)(uVar5 & 0xffff) * 8);
    uVar2 = uVar3;
    do {
      *(int *)(*param_2 + (ulong)uVar2 * 4) = iVar4;
      uVar2 = *(ushort *)(*(long *)(param_1 + 0x120) + (ulong)uVar2 * 8 + 2);
      iVar4 = iVar4 + 1;
    } while (uVar2 != uVar3);
    uVar5 = uVar5 + 1;
  } while (uVar5 != uVar1);
  return iVar4;
}


