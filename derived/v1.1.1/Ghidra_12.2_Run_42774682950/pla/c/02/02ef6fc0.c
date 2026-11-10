/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef6fc0; name: FUN_02ef6fc0
 */


void FUN_02ef6fc0(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  char local_38 [4];
  undefined1 auStack_34 [4];
  
  lVar5 = *(long *)(param_2 + 8);
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0xdc) == 0)) {
    cVar4 = '\0';
    cVar2 = *(char *)(param_2 + 0x14);
joined_r0x02ef7190:
    if (cVar2 != '\0') {
      cVar4 = '\0';
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
    }
  }
  else {
    cVar4 = *(char *)(param_2 + 0x14);
    cVar2 = cVar4;
    if (*(float *)(lVar5 + 0xc4) <= DAT_042ac98c) goto joined_r0x02ef7190;
    if (cVar4 == '\0') {
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      cVar4 = '\x01';
    }
    else {
      cVar4 = '\x01';
    }
  }
  *(char *)(param_2 + 0x14) = cVar4;
  if (*(long *)(param_2 + 8) == 0) {
    cVar4 = '\0';
    cVar2 = *(char *)(param_2 + 0x15);
  }
  else {
    uVar3 = *(ushort *)(*(long *)(param_2 + 8) + 0x134);
    cVar4 = *(char *)(param_2 + 0x15);
    cVar2 = cVar4;
    if (((uVar3 >> 9 & 1) != 0) && (1 < (ushort)((uVar3 & 7) - 1))) {
      if (cVar4 == '\0') {
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
        cVar4 = '\x01';
      }
      else {
        cVar4 = '\x01';
      }
      goto LAB_02ef7028;
    }
  }
  if (cVar2 != '\0') {
    cVar4 = '\0';
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
  }
LAB_02ef7028:
  *(char *)(param_2 + 0x15) = cVar4;
  lVar5 = *(long *)(param_2 + 8);
  if (lVar5 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(lVar5 + 0xdc);
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar6 != iVar1) {
    if (iVar1 != 0) {
      lVar5 = FUN_02ef7dac(param_1 + 0x60,iVar1,local_38);
      if (((lVar5 != 0) && (local_38[0] != '\0')) &&
         (iVar6 = *(int *)(lVar5 + 4) + -1, *(int *)(lVar5 + 4) = iVar6, iVar6 == 0)) {
        FUN_02ef6ee8(param_1 + 0x60,iVar1);
      }
      lVar5 = *(long *)(param_2 + 8);
      *(undefined4 *)(param_2 + 0x10) = 0;
    }
    if ((lVar5 != 0) && (iVar6 = *(int *)(lVar5 + 0xdc), iVar6 != 0)) {
      lVar5 = FUN_02ef7d40(param_1 + 0x60,iVar6,auStack_34);
      if (lVar5 != 0) {
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
      }
      *(int *)(param_2 + 0x10) = iVar6;
    }
  }
  fVar9 = *(float *)(param_1 + 0xf0);
  fVar7 = (float)FUN_02ef8138(param_2);
  if (fVar7 < fVar9) {
    uVar8 = *(undefined4 *)(param_1 + 0xf0);
  }
  else {
    uVar8 = FUN_02ef8138(param_2);
  }
  *(undefined4 *)(param_1 + 0xf0) = uVar8;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  return;
}


