/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fab48; name: FUN_029fab48
 */


ulong FUN_029fab48(long param_1,long param_2,int param_3,ulong param_4,undefined4 param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  if (param_3 != 0x30) {
    uVar12 = FUN_02950cf0(param_2,param_3,param_4,param_5);
    return uVar12;
  }
  switch((uint)param_4 & 7) {
  case 1:
  case 2:
  case 3:
    uVar12 = param_4 >> 0xe & 0xffff;
    uVar10 = (uint)(param_4 >> 0x1e) & 1;
    break;
  case 4:
    uVar12 = param_4 >> 0x14 & 0xffff;
    uVar10 = (uint)(param_4 >> 0x24) & 1;
    break;
  default:
    uVar12 = 0;
    uVar10 = 0;
  }
  uVar16 = *(undefined8 *)
            (*(long *)(*(long *)(param_1 + 0x10) + 8) + (param_4 >> 3 & 0x1f) * 8 + 0x120);
  plVar17 = &DAT_0428af30 + uVar12 * 6;
  if (*plVar17 == 0) {
    plVar13 = &DAT_0428af30;
  }
  else {
    plVar13 = &DAT_0428af30;
    if (*(char *)(*plVar17 + 0x1e1) != '\0') {
      plVar13 = plVar17;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar13 + 0x250) + (ulong)**(uint **)(*plVar13 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar12 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined1 *)((long)piVar1 + uVar12);
  }
  bVar5 = (*(byte *)(param_2 + 0x168) & 7) != 0;
  bVar2 = *(byte *)(param_2 + 0x2dc);
  uVar11 = (uint)bVar2;
  bVar3 = *(byte *)(param_2 + 0x2dd);
  uVar14 = (uint)bVar3;
  bVar6 = bVar3 != 0x12;
  bVar7 = bVar3 == 2;
  if (*(char *)(param_2 + 0x389) < '\0') {
    if (bVar2 != 0x12 && (bVar2 != 2 || !bVar5)) {
      if (bVar6 && (!bVar5 || !bVar7)) goto LAB_029facd4;
    }
    else {
      if (bVar6 && (!bVar5 || !bVar7)) goto LAB_029facc4;
      uVar11 = 0x12;
    }
LAB_029facd0:
    uVar14 = uVar11;
    uVar11 = uVar14;
  }
  else if (bVar2 != 0x12 && (bVar2 != 2 || !bVar5)) {
    if (!bVar6 || bVar5 && bVar7) goto LAB_029facd0;
  }
  else {
    uVar11 = 0;
    if (bVar6 && (!bVar5 || !bVar7)) {
      uVar11 = uVar14;
    }
    uVar14 = uVar11;
LAB_029facc4:
    uVar11 = uVar14;
  }
LAB_029facd4:
  uVar9 = FUN_0293e2a0(uVar8,uVar11 & 0x1f | (uVar14 & 0x1f) << 5 |
                             (*(byte *)(param_2 + 0x2de) & 0x1f) << 10);
  lVar15 = *plVar17;
  plVar13 = &DAT_0428af30;
  if (uVar10 == 0) {
    if ((lVar15 != 0) && (plVar13 = &DAT_0428af30, *(char *)(lVar15 + 0x1e1) != '\0')) {
      plVar13 = plVar17;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar13 + 0x250) + (ulong)**(uint **)(*plVar13 + 0x250));
    if (0x6e < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar4 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x37];
      goto joined_r0x029fad7c;
    }
  }
  else {
    if ((lVar15 != 0) && (plVar13 = &DAT_0428af30, *(char *)(lVar15 + 0x1e1) != '\0')) {
      plVar13 = plVar17;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar13 + 0x250) + (ulong)**(uint **)(*plVar13 + 0x250));
    if (0xb6 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar4 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x5b];
joined_r0x029fad7c:
      if ((ulong)uVar4 != 0) {
        local_58 = (uint)*(byte *)((long)piVar1 + (ulong)uVar4);
        goto LAB_029fad8c;
      }
    }
  }
  local_58 = 0;
LAB_029fad8c:
  local_54 = FUN_029506a8(uVar16,0xf);
  local_50 = FUN_0295084c(uVar16,8);
  local_4c = FUN_0295084c(param_2,9);
  local_48 = 0x100000001;
  uVar16 = FUN_029ce294(*(undefined8 *)(param_1 + 8),&local_58);
  uVar9 = FUN_0293eb50(uVar16,uVar9);
  uVar10 = FUN_0293ebd0(*(undefined8 *)(param_1 + 8),param_2,uVar9);
  if ((int)uVar10 < 2) {
    uVar10 = 1;
  }
  return (ulong)uVar10;
}


