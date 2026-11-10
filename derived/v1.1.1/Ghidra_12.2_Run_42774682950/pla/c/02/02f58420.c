/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f58420; name: FUN_02f58420
 */


void FUN_02f58420(int param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  lVar5 = (ulong)*(uint *)(param_3 + 0x30) - 1;
  if (lVar5 == 0) {
    FUN_02f58540(param_2);
  }
  param_2 = param_2 + lVar5 * 8;
  puVar2 = &DAT_0442c160;
  if (lVar5 == 0) {
    puVar2 = &DAT_0442c158;
  }
  uVar3 = *(ulong *)(puVar2 + (long)param_1 * 0x820);
  *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(param_2 + 0x7e0);
  if (*(long *)(param_2 + 0x7e0) == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = *(int *)(*(long *)(param_2 + 0x7e0) + 0x1c) + 1;
  }
  *(int *)(param_3 + 0x1c) = iVar6;
  *(long *)(param_2 + 0x7e0) = param_3;
  uVar7 = (ulong)*(uint *)(param_3 + 0x1c);
  if (uVar7 <= uVar3 || uVar7 <= uVar3 << 4) {
    return;
  }
  if (uVar3 < 3) {
    uVar3 = 2;
  }
  if (uVar3 < uVar7) {
    uVar7 = 0;
    lVar5 = param_3;
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 0x48);
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar1;
    } while (uVar7 < uVar3);
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(uint *)(lVar5 + 0x1c) = *(int *)(param_3 + 0x1c) - uVar1;
    *(uint *)(param_3 + 0x1c) = uVar1;
    *(undefined8 *)(param_3 + 0x50) = 0;
  }
  else {
    lVar5 = 0;
  }
  *(long *)(param_2 + 0x7e0) = lVar5;
  FUN_02f592a0(param_1,param_3);
  return;
}


