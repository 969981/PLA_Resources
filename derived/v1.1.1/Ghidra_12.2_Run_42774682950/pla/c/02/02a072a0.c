/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a072a0; name: FUN_02a072a0
 */


void FUN_02a072a0(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  short sVar7;
  ulong uVar8;
  long lVar9;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  lVar3 = lVar3 + (ulong)*(byte *)(lVar3 + 0x1c8) * 0x40;
  if ((char)param_3[4] == '\0') {
    if (*(char *)(lVar3 + 0x21) == '\0') {
      return;
    }
    lVar9 = param_3[2];
    lVar5 = *(long *)(param_1 + 0x28);
    sVar7 = *(short *)(param_3[3] + 2);
    if (sVar7 == -1) {
      sVar7 = (short)**(undefined4 **)(lVar5 + 8);
    }
    *(short *)(lVar3 + 0x24) = sVar7;
    FUN_02a3bf4c(*(undefined8 *)(lVar5 + 0x10),lVar9,lVar3 + 0x18);
    return;
  }
  if (*(char *)(lVar3 + 0x21) == '\0') {
    FUN_02973fa8(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x1ba0) + 0x38),
                 *(undefined1 *)(*param_3 + 0x7d),*(undefined4 *)param_3[2],param_3[1],0x28);
    return;
  }
  if (*(char *)(lVar3 + 0x22) == '\0') {
    lVar9 = param_3[2];
    lVar5 = *(long *)(param_1 + 0x28);
    sVar7 = *(short *)(param_3[3] + 2);
    if (sVar7 == -1) {
      sVar7 = (short)**(undefined4 **)(lVar5 + 8);
    }
    *(short *)(lVar3 + 0x24) = sVar7;
    FUN_02a3bf4c(*(undefined8 *)(lVar5 + 0x10),lVar9,lVar3 + 0x18);
  }
  piVar4 = *(int **)(*(long *)(param_1 + 0x10) + 0xe8);
  iVar2 = *piVar4 + -1;
  iVar1 = 399;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  *(undefined1 *)((long)piVar4 + (long)iVar1 * 0xc + 0xd) = 1;
  lVar3 = *param_3;
  if (*(short *)(lVar3 + 0x74) != 0) {
    lVar9 = (&DAT_0428af30)[(ulong)*(uint *)param_3[2] * 6];
    if (lVar9 == 0) {
      plVar6 = &DAT_0428af30;
    }
    else {
      plVar6 = &DAT_0428af30;
      if (*(char *)(lVar9 + 0x1e1) != '\0') {
        plVar6 = &DAT_0428af30 + (ulong)*(uint *)param_3[2] * 6;
      }
    }
    piVar4 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
    if (((0x4e < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
        (uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0x27], uVar8 != 0)) &&
       (*(char *)((long)piVar4 + uVar8) != '\0')) {
      lVar9 = *(long *)(param_1 + 0x20);
      lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0x10) + 8) +
                        (ulong)*(byte *)(lVar3 + 0x7d) * 8 + 0x120);
      *(byte *)(lVar5 + 0x388) = *(byte *)(lVar5 + 0x388) | 0x10;
      FUN_02a3e6b8(*(undefined8 *)(lVar9 + 0x18),0x1e,*(undefined1 *)(lVar3 + 0x7d),0xc);
      lVar3 = *param_3;
    }
  }
  FUN_02973fa8(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)(lVar3 + 0x7d),
               *(undefined4 *)param_3[2],param_3[1],0x27);
  uVar8 = FUN_029cddec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if ((uVar8 & 1) == 0) {
    FUN_02a074b0(param_1,*param_3,param_3[2]);
  }
  FUN_02a07994(param_1,*param_3,param_3[2]);
  return;
}


