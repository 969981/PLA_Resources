/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f4ddc; name: FUN_031f4ddc
 */


undefined8 FUN_031f4ddc(long param_1,undefined8 *param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = *param_4;
  iVar1 = *(int *)(param_2 + 2);
  uVar4 = (ulong)iVar1;
  param_2[1] = param_4[1];
  *param_2 = uVar7;
  iVar2 = *(int *)(param_1 + 0x20);
  if (((-1 < iVar1) && (iVar1 < iVar2)) &&
     (*(int *)(*(long *)(param_1 + 0x18) + uVar4 * 0x40 + 0x34) == param_3)) {
    return 0;
  }
  lVar5 = uVar4 * 0x40 + 0x74;
  while (uVar4 = uVar4 + 1, (long)uVar4 < (long)iVar2) {
    piVar6 = (int *)(*(long *)(param_1 + 0x18) + lVar5);
    lVar5 = lVar5 + 0x40;
    if (*piVar6 == param_3) goto LAB_031f4e48;
  }
  uVar3 = iVar2 - 1U;
  if ((int)(iVar1 - 1U) <= (int)(iVar2 - 1U)) {
    uVar3 = iVar1 - 1U;
  }
  if ((int)uVar3 < 0) {
    *(undefined4 *)(param_2 + 2) = 0xffffffff;
    return 1;
  }
  lVar5 = (long)(int)uVar3 + 1;
  piVar6 = (int *)(*(long *)(param_1 + 0x18) + (long)(int)uVar3 * 0x40 + 0x34);
  while (uVar4 = (ulong)uVar3, *piVar6 != param_3) {
    lVar5 = lVar5 + -1;
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + -0x10;
    if (lVar5 < 1) {
      *(undefined4 *)(param_2 + 2) = 0xffffffff;
      return 1;
    }
  }
LAB_031f4e48:
  *(int *)(param_2 + 2) = (int)uVar4;
  return 0;
}


