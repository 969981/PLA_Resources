/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03003f7c; name: FUN_03003f7c
 */


void FUN_03003f7c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_2 + 0x34);
  *(undefined4 *)(param_2 + 0x44) = 0x7fffffff;
  if (iVar1 == 0x7fffffff) {
    return;
  }
  piVar5 = (int *)(*(long *)(param_1 + 0x38) + (long)iVar1 * 0x38 + 0x1c);
  iVar2 = *piVar5 + -1;
  if (iVar2 == 0) {
    FUN_03003ce0(param_1,iVar1);
    return;
  }
  piVar3 = (int *)(*(long *)(param_1 + 0x38) + (long)iVar1 * 0x38 + 0x18);
  if (*piVar3 == *(int *)(param_2 + 0x30)) {
    *piVar3 = *(int *)(param_2 + 0x38);
  }
  *piVar5 = iVar2;
  lVar6 = *(long *)(param_1 + 8) + (long)*(int *)(param_2 + 0x3c) * 0x68;
  lVar4 = *(long *)(param_1 + 8) + (long)*(int *)(param_2 + 0x38) * 0x68;
  *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)(lVar6 + 0x30);
  *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(lVar4 + 0x30);
  *(undefined4 *)(param_2 + 0x34) = 0x7fffffff;
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x30);
  return;
}


