/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00937504; name: FUN_00937504
 */


void FUN_00937504(long *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  long lVar9;
  uint *puVar10;
  undefined2 uVar11;
  ulong uVar12;
  ushort *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 auStack_8a [4];
  undefined2 uStack_86;
  undefined2 local_84;
  undefined2 uStack_82;
  undefined2 local_80;
  undefined8 local_7e;
  undefined4 local_76;
  undefined8 local_72;
  long local_6a;
  undefined2 local_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined6 local_52;
  ushort uStack_4c;
  undefined1 auStack_48 [8];
  
  lVar9 = *(long *)(param_2 + 0x70);
  if ((lVar9 == 0) || (*(char *)(lVar9 + 0x1e1) == '\0')) {
    *param_1 = 0;
    return;
  }
  uVar15 = param_3 & 0xffffffff;
  local_b8 = 0;
  local_b0 = 0;
  local_54 = 0;
  local_72 = 0;
  piVar1 = (int *)((long)*(uint **)(lVar9 + 0x250) + (ulong)**(uint **)(lVar9 + 0x250));
  local_98 = 0xffffffffffffffff;
  local_a8 = 0xffffffffffffffff;
  local_80 = 0x1ff;
  local_58 = 0xffff;
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + (param_3 & 0xffffffff) * 4 + (ulong)*puVar10 + 4);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
     (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar12 == 0)) {
    local_90 = 0;
  }
  else {
    local_90 = *(undefined4 *)((long)piVar2 + uVar12);
  }
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + uVar15 * 4 + (ulong)*puVar10 + 4);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
     (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar12 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = (undefined2)*(undefined4 *)((long)piVar2 + uVar12);
  }
  _local_8c = CONCAT62(0xff00010000,uVar6);
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + uVar15 * 4 + (ulong)*puVar10 + 4);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x11) ||
     (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8], uVar12 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = (undefined2)*(undefined4 *)((long)piVar2 + uVar12);
  }
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + uVar15 * 4 + (ulong)*puVar10 + 4);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x13) ||
     (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9], uVar12 == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = (undefined2)*(undefined4 *)((long)piVar2 + uVar12);
  }
  _local_84 = CONCAT22(0xffff,uVar11);
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + uVar15 * 4 + (ulong)*puVar10 + 4);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x15) ||
     (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[10], uVar12 == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = (undefined2)*(undefined4 *)((long)piVar2 + uVar12);
  }
  _local_8c = CONCAT26(uVar11,CONCAT24(uVar6,_local_8c));
  local_76 = 0;
  local_7e = 0;
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + uVar15 * 4 + (ulong)*puVar10 + 4);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x17) ||
     (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xb], uVar12 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = (undefined2)*(undefined4 *)((long)piVar2 + uVar12);
  }
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + uVar15 * 4 + (ulong)*puVar10 + 4);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x19) ||
     (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xc], uVar12 == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = (undefined2)*(undefined4 *)((long)piVar2 + uVar12);
  }
  local_6a = (ulong)CONCAT22(uVar11,uVar6) << 0x20;
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + uVar15 * 4 + (ulong)*puVar10 + 4);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x1b) ||
     (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xd], uVar12 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = (undefined2)*(undefined4 *)((long)piVar2 + uVar12);
  }
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + uVar15 * 4 + (ulong)*puVar10 + 4);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x1f) ||
     (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xf], uVar12 == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = (undefined2)*(undefined4 *)((long)piVar2 + uVar12);
  }
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + uVar15 * 4 + (ulong)*puVar10 + 4);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x21) ||
     (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x10], uVar12 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined2)*(undefined4 *)((long)piVar2 + uVar12);
  }
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + uVar15 * 4 + (ulong)*puVar10 + 4);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x1d) ||
     (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xe], uVar12 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (undefined2)*(undefined4 *)((long)piVar2 + uVar12);
  }
  _local_62 = CONCAT26(uVar8,CONCAT24(uVar7,CONCAT22(uVar11,uVar6)));
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + uVar15 * 4 + (ulong)*puVar10 + 4);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x23) {
    local_a0 = 0x1ffffffff;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x11];
    local_a0 = 0x1ffffffff;
    if ((uVar12 != 0) && (local_a0 = 0x1ffffffff, *(char *)((long)piVar2 + uVar12) != '\0')) {
      local_a0 = 0x2ffffffff;
    }
  }
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + uVar15 * 4 + (ulong)*puVar10 + 4);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x25) ||
     (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x12], uVar12 == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = *(char *)((long)piVar2 + uVar12) != '\0';
  }
  _local_52 = CONCAT26((ushort)bVar5,0x8000800080);
  local_c0 = *(undefined8 *)(param_2 + 8);
  lVar9 = FUN_0093dcbc(auStack_48,local_c0,&local_c0,&local_b8);
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_02c5d640(lVar9,0x1c);
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + uVar15 * 4 + (ulong)*puVar10 + 4);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar10 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2)));
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar4 = *puVar13;
  if (uVar4 < 5) {
    uVar14 = 0;
LAB_00937cd4:
    FUN_02c60fb0(lVar9,0,uVar14);
  }
  else {
    if ((ulong)puVar13[2] != 0) {
      uVar14 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[2]);
      if (6 < uVar4) goto LAB_00937a20;
      goto LAB_00937cd4;
    }
    uVar14 = 0;
    if (uVar4 < 7) goto LAB_00937cd4;
LAB_00937a20:
    if ((ulong)puVar13[3] == 0) goto LAB_00937cd4;
    cVar3 = *(char *)((long)piVar2 + (ulong)puVar13[3]);
    FUN_02c60fb0(lVar9,0,uVar14);
    if (cVar3 != '\0') {
      FUN_02c61884(lVar9,uVar14);
    }
  }
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + uVar15 * 4 + (ulong)*puVar10 + 4);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar10 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (10 - (long)*piVar2)));
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar4 = *puVar13;
  if (uVar4 < 5) {
    uVar14 = 0;
LAB_00937cec:
    FUN_02c60fb0(lVar9,1,uVar14);
  }
  else {
    if ((ulong)puVar13[2] != 0) {
      uVar14 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[2]);
      if (6 < uVar4) goto LAB_00937aa4;
      goto LAB_00937cec;
    }
    uVar14 = 0;
    if (uVar4 < 7) goto LAB_00937cec;
LAB_00937aa4:
    if ((ulong)puVar13[3] == 0) goto LAB_00937cec;
    cVar3 = *(char *)((long)piVar2 + (ulong)puVar13[3]);
    FUN_02c60fb0(lVar9,1,uVar14);
    if (cVar3 != '\0') {
      FUN_02c61884(lVar9,uVar14);
    }
  }
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + uVar15 * 4 + (ulong)*puVar10 + 4);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar10 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0xc - (long)*piVar2)));
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar4 = *puVar13;
  if (uVar4 < 5) {
    uVar14 = 0;
LAB_00937d04:
    FUN_02c60fb0(lVar9,2,uVar14);
  }
  else {
    if ((ulong)puVar13[2] != 0) {
      uVar14 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[2]);
      if (6 < uVar4) goto LAB_00937b28;
      goto LAB_00937d04;
    }
    uVar14 = 0;
    if (uVar4 < 7) goto LAB_00937d04;
LAB_00937b28:
    if ((ulong)puVar13[3] == 0) goto LAB_00937d04;
    cVar3 = *(char *)((long)piVar2 + (ulong)puVar13[3]);
    FUN_02c60fb0(lVar9,2,uVar14);
    if (cVar3 != '\0') {
      FUN_02c61884(lVar9,uVar14);
    }
  }
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x30 - (long)*piVar1)));
  puVar10 = (uint *)((long)puVar10 + uVar15 * 4 + (ulong)*puVar10 + 4);
  piVar1 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0xe - (long)*piVar1)));
  piVar1 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar13 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar13 < 5) {
    uVar14 = 0;
  }
  else {
    if ((ulong)puVar13[2] == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined4 *)((long)piVar1 + (ulong)puVar13[2]);
    }
    if ((6 < *puVar13) && ((ulong)puVar13[3] != 0)) {
      cVar3 = *(char *)((long)piVar1 + (ulong)puVar13[3]);
      FUN_02c60fb0(lVar9,3,uVar14);
      if (cVar3 != '\0') {
        FUN_02c61884(lVar9,uVar14);
      }
      goto LAB_00937bcc;
    }
  }
  FUN_02c60fb0(lVar9,3,uVar14);
LAB_00937bcc:
  *param_1 = lVar9;
  return;
}


