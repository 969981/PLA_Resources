/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5b930; name: FUN_00d5b930
 */


void FUN_00d5b930(long *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  int local_60;
  int local_5c;
  ushort local_58;
  ushort local_56;
  ushort local_54;
  ushort local_52;
  
  if ((char)param_1[0x2c4] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00d5bcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))(param_1);
    return;
  }
  local_60 = (int)param_1[0xdd];
  local_58 = *(ushort *)((long)param_1 + 0x6ec);
  local_5c = (int)param_1[0x2c1];
  local_56 = *(ushort *)((long)param_1 + 0x160c);
  local_54 = (ushort)*(byte *)((long)param_1 + 0x6ee);
  local_52 = (ushort)*(byte *)((long)param_1 + 0x6ef);
  (**(code **)(*param_1 + 0x148))(param_1,&local_60);
  uVar5 = local_58;
  iVar4 = local_60;
  iVar3 = 0;
  if (local_60 != 2) {
    iVar3 = local_60;
  }
  plVar1 = param_1 + 0x30;
  lVar8 = FUN_00d2ee28(plVar1,&DAT_043ab7d8 + (long)iVar3 * 0x28);
  lVar2 = **(long **)(lVar8 + 0x838);
  lVar8 = (*(long **)(lVar8 + 0x838))[1];
  if ((lVar2 != lVar8) &&
     (*(char *)(lVar2 + 0x20) != '\0' || *(uint *)(lVar2 + 0x24) != (uint)uVar5)) {
    lVar6 = lVar2 + 0x30;
    do {
      lVar9 = lVar6;
      lVar2 = lVar8;
      if (lVar8 == lVar9) break;
      lVar6 = lVar9 + 0x30;
    } while ((*(char *)(lVar9 + 0x20) != '\0') ||
            (lVar2 = lVar9, *(uint *)(lVar9 + 0x24) != (uint)uVar5));
  }
  if ((lVar2 != 0) && ((lVar8 != lVar2 && (iVar3 = *(int *)(lVar2 + 0x28), iVar3 != -1)))) {
    uVar7 = (**(code **)(*param_1 + 0x1f0))(param_1,iVar4,uVar5);
    FUN_00d5b258(param_1,iVar4,iVar3,uVar7 & 1);
  }
  uVar5 = local_56;
  iVar4 = local_5c;
  iVar3 = 0;
  if (local_5c != 2) {
    iVar3 = local_5c;
  }
  lVar8 = FUN_00d2ee28(plVar1,&DAT_043ab7d8 + (long)iVar3 * 0x28);
  lVar2 = **(long **)(lVar8 + 0x838);
  lVar8 = (*(long **)(lVar8 + 0x838))[1];
  if ((lVar2 != lVar8) &&
     (*(char *)(lVar2 + 0x20) != '\0' || *(uint *)(lVar2 + 0x24) != (uint)uVar5)) {
    lVar6 = lVar2 + 0x30;
    do {
      lVar9 = lVar6;
      lVar2 = lVar8;
      if (lVar8 == lVar9) break;
      lVar6 = lVar9 + 0x30;
    } while ((*(char *)(lVar9 + 0x20) != '\0') ||
            (lVar2 = lVar9, *(uint *)(lVar9 + 0x24) != (uint)uVar5));
  }
  if ((lVar2 != 0) && ((lVar8 != lVar2 && (iVar3 = *(int *)(lVar2 + 0x28), iVar3 != -1)))) {
    uVar7 = (**(code **)(*param_1 + 0x1f0))(param_1,iVar4,uVar5);
    FUN_00d5b258(param_1,iVar4,iVar3,uVar7 & 1);
  }
  uVar5 = local_58;
  iVar4 = local_60;
  iVar3 = 0;
  if (local_60 != 2) {
    iVar3 = local_60;
  }
  lVar8 = FUN_00d2ee28(plVar1,&DAT_043ab7d8 + (long)iVar3 * 0x28);
  lVar2 = **(long **)(lVar8 + 0x838);
  lVar8 = (*(long **)(lVar8 + 0x838))[1];
  if ((lVar2 != lVar8) &&
     (*(char *)(lVar2 + 0x20) != '\0' || *(uint *)(lVar2 + 0x24) != (uint)uVar5)) {
    lVar6 = lVar2 + 0x30;
    do {
      lVar9 = lVar6;
      lVar2 = lVar8;
      if (lVar8 == lVar9) break;
      lVar6 = lVar9 + 0x30;
    } while ((*(char *)(lVar9 + 0x20) != '\0') ||
            (lVar2 = lVar9, *(uint *)(lVar9 + 0x24) != (uint)uVar5));
  }
  if ((lVar2 != 0) && ((lVar8 != lVar2 && (iVar3 = *(int *)(lVar2 + 0x28), iVar3 != -1)))) {
    uVar7 = (**(code **)(*param_1 + 0x1f8))(param_1,iVar4,uVar5);
    FUN_00d5b4b0(param_1,iVar4,iVar3,uVar7 & 1);
  }
  uVar5 = local_56;
  iVar4 = local_5c;
  iVar3 = 0;
  if (local_5c != 2) {
    iVar3 = local_5c;
  }
  lVar8 = FUN_00d2ee28(plVar1,&DAT_043ab7d8 + (long)iVar3 * 0x28);
  lVar2 = **(long **)(lVar8 + 0x838);
  lVar8 = (*(long **)(lVar8 + 0x838))[1];
  if ((lVar2 != lVar8) &&
     (*(char *)(lVar2 + 0x20) != '\0' || *(uint *)(lVar2 + 0x24) != (uint)uVar5)) {
    lVar6 = lVar2 + 0x30;
    do {
      lVar9 = lVar6;
      lVar2 = lVar8;
      if (lVar8 == lVar9) break;
      lVar6 = lVar9 + 0x30;
    } while ((*(char *)(lVar9 + 0x20) != '\0') ||
            (lVar2 = lVar9, *(uint *)(lVar9 + 0x24) != (uint)uVar5));
  }
  if ((lVar2 != 0) && ((lVar8 != lVar2 && (iVar3 = *(int *)(lVar2 + 0x28), iVar3 != -1)))) {
    uVar7 = (**(code **)(*param_1 + 0x1f8))(param_1,iVar4,uVar5);
    FUN_00d5b4b0(param_1,iVar4,iVar3,uVar7 & 1);
  }
  return;
}


