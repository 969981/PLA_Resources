/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5e078; name: FUN_00d5e078
 */


void FUN_00d5e078(long *param_1,int param_2,uint param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  
  uVar8 = (ulong)param_3;
  iVar9 = param_2;
  if (param_2 == 2) {
    iVar9 = 0;
  }
  lVar6 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar9 * 0x28);
  lVar10 = **(long **)(lVar6 + 0x838);
  lVar6 = (*(long **)(lVar6 + 0x838))[1];
  if ((lVar10 != lVar6) && (*(char *)(lVar10 + 0x20) != '\0' || *(uint *)(lVar10 + 0x24) != param_3)
     ) {
    lVar3 = lVar10 + 0x30;
    do {
      lVar10 = lVar3;
      if (lVar6 == lVar10) {
        lVar10 = lVar6;
        goto LAB_00d5e118;
      }
      lVar3 = lVar10 + 0x30;
    } while ((*(char *)(lVar10 + 0x20) != '\0') || (*(uint *)(lVar10 + 0x24) != param_3));
  }
LAB_00d5e118:
  if (lVar10 == 0 || lVar6 == lVar10) {
    iVar9 = -1;
  }
  else {
    iVar9 = *(int *)(lVar10 + 0x28);
  }
  if (param_4 == 0) {
    if (iVar9 == -1) {
      return;
    }
    goto LAB_00d5e1dc;
  }
  lVar10 = *(long *)(*(long *)(param_1[(long)param_2 * 0xc + 199] + 0xa8) + uVar8 * 0x10);
  iVar4 = *(int *)(lVar10 + 8);
  if (iVar4 == *(int *)(param_4 + 8)) {
    if (iVar4 == 2) {
      if (*(short *)(lVar10 + 0xc) != *(short *)(param_4 + 0xc)) goto LAB_00d5e160;
    }
    else if (iVar4 == 3) {
      if ((((*(int *)(lVar10 + 0x10) != *(int *)(param_4 + 0x10)) ||
           (*(short *)(lVar10 + 0x14) != *(short *)(param_4 + 0x14))) ||
          (*(int *)(lVar10 + 0x18) != *(int *)(param_4 + 0x18))) ||
         (((*(char *)(lVar10 + 0x1c) != *(char *)(param_4 + 0x1c) ||
           (*(char *)(lVar10 + 0x1d) != *(char *)(param_4 + 0x1d))) ||
          ((*(int *)(lVar10 + 0x20) != *(int *)(param_4 + 0x20) ||
           (*(int *)(lVar10 + 0x24) != *(int *)(param_4 + 0x24))))))) goto LAB_00d5e160;
    }
    else if (iVar4 == 4) {
      iVar4 = FUN_00d48ac0(lVar10);
      iVar5 = FUN_00d48ac0(param_4);
      if (iVar4 != iVar5) goto LAB_00d5e160;
    }
    if (iVar9 == -1) {
      return;
    }
  }
  else {
LAB_00d5e160:
    *(undefined8 *)(lVar10 + 8) = *(undefined8 *)(param_4 + 8);
    uVar1 = *(undefined8 *)(param_4 + 0x10);
    uVar2 = *(undefined8 *)(param_4 + 0x18);
    uVar7 = *(undefined8 *)(param_4 + 0x28);
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(param_4 + 0x20);
    *(undefined8 *)(lVar10 + 0x28) = uVar7;
    *(undefined8 *)(lVar10 + 0x10) = uVar1;
    *(undefined8 *)(lVar10 + 0x18) = uVar2;
    uVar7 = *(undefined8 *)(param_4 + 0x40);
    uVar1 = *(undefined8 *)(param_4 + 0x30);
    uVar2 = *(undefined8 *)(param_4 + 0x38);
    *(undefined4 *)(lVar10 + 0x48) = *(undefined4 *)(param_4 + 0x48);
    *(undefined8 *)(lVar10 + 0x38) = uVar2;
    *(undefined8 *)(lVar10 + 0x40) = uVar7;
    *(undefined8 *)(lVar10 + 0x30) = uVar1;
    if (iVar9 == -1) {
      return;
    }
    FUN_00d53568(param_1,lVar10,iVar9,param_2);
    (**(code **)(*param_1 + 0x118))(param_1,param_2,uVar8,0);
  }
  FUN_00d53960(param_1,param_2,uVar8,*(undefined4 *)(lVar10 + 0x48));
LAB_00d5e1dc:
  FUN_00d54178(param_1,param_2,uVar8,param_2,iVar9);
  return;
}


