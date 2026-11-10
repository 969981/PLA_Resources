/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dee220; name: FUN_02dee220
 */


int FUN_02dee220(long param_1,long param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  int *piVar7;
  ulong uVar8;
  undefined *local_68;
  
  iVar3 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30);
  if (iVar3 == 0 || *(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x30)) {
    return 0;
  }
  if (param_2 == 0) {
    return iVar3;
  }
  piVar7 = *(int **)(param_1 + 0x18);
  iVar4 = param_3;
  if (iVar3 <= param_3) {
    iVar4 = iVar3;
  }
  iVar3 = *piVar7 >> 1;
  if (iVar3 < 0x200) {
    if (iVar3 == 0x80) {
      local_68 = &DAT_0429b380;
    }
    else if (iVar3 == 0x100) {
      local_68 = &DAT_0429b580;
    }
    else {
LAB_02dee458:
      local_68 = (undefined *)0x0;
    }
  }
  else if (iVar3 == 0x400) {
    local_68 = &DAT_0429c180;
  }
  else if (iVar3 == 0x200) {
    local_68 = &DAT_0429b980;
  }
  else {
    if (iVar3 != 0x800) goto LAB_02dee458;
    local_68 = &DAT_0429d180;
  }
  iVar3 = piVar7[1] >> 1;
  if (iVar3 < 0x200) {
    if (iVar3 == 0x80) {
      puVar6 = &DAT_0429b380;
      goto LAB_02dee2dc;
    }
    if (iVar3 == 0x100) {
      puVar6 = &DAT_0429b580;
      goto LAB_02dee2dc;
    }
  }
  else {
    if (iVar3 == 0x400) {
      puVar6 = &DAT_0429c180;
      goto LAB_02dee2dc;
    }
    if (iVar3 == 0x200) {
      puVar6 = &DAT_0429b980;
      goto LAB_02dee2dc;
    }
    if (iVar3 == 0x800) {
      puVar6 = &DAT_0429d180;
      goto LAB_02dee2dc;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_02dee2dc:
  uVar8 = 0;
  do {
    iVar3 = (int)uVar8;
    if ((long)(int)param_4 < (long)uVar8) {
      iVar3 = iVar3 + -1;
    }
    else if (param_4 == uVar8) {
      iVar3 = *(int *)(param_1 + 0x10) + -1;
    }
    lVar5 = uVar8 * 8;
    FUN_02df4b60(*piVar7,piVar7[1],*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                 *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5),
                 *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar5),local_68,puVar6,
                 param_2 + (long)(iVar3 * param_3) * 4,*(undefined4 *)(param_1 + 0x10),
                 *(int *)(param_1 + 0x30),*(int *)(param_1 + 0x30) + iVar4);
    uVar2 = piVar7[*(int *)(param_1 + 0x3c)];
    uVar1 = uVar2 + 3;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    memcpy(*(void **)(*(long *)(param_1 + 0x28) + lVar5),
           (void *)(*(long *)(*(long *)(param_1 + 0x20) + lVar5) + (long)((int)uVar1 >> 2) * 4),
           (ulong)(uVar1 & 0xfffffffc));
    uVar8 = uVar8 + 1;
  } while ((long)uVar8 < (long)*(int *)(param_1 + 0x10));
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar4;
  *(undefined1 *)(param_1 + 0x48) = 1;
  return iVar4;
}


