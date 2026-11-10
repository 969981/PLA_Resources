/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dc2f04; name: FUN_01dc2f04
 */


void FUN_01dc2f04(long param_1,int *param_2)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  undefined1 *puVar12;
  ushort *puVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar9 == 0)) {
    lVar11 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar9);
    lVar11 = (long)puVar1 + (ulong)*puVar1;
  }
  puVar15 = &DAT_cbf29ce484222645;
  sVar7 = strlen((char *)(lVar11 + 4));
  bVar3 = *(byte *)(lVar11 + 4);
  puVar12 = &DAT_cbf29ce484222645;
  if (bVar3 != 0) {
    puVar12 = &DAT_cbf29ce484222645;
    pbVar10 = (byte *)(lVar11 + 5);
    do {
      puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar3 != 0);
  }
  *(size_t *)(param_1 + 200) = sVar7;
  plVar8 = *(long **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined1 **)(param_1 + 0xb8) = puVar12;
  *(char **)(param_1 + 0xc0) = (char *)(lVar11 + 4);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xd) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar9 == 0)) {
    piVar14 = (int *)0x0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar9);
    piVar14 = (int *)((long)puVar1 + (ulong)*puVar1);
  }
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar9 == 0)) {
    lVar11 = 0;
  }
  else {
    puVar1 = (uint *)((long)piVar14 + uVar9);
    lVar11 = (long)puVar1 + (ulong)*puVar1;
  }
  sVar7 = strlen((char *)(lVar11 + 4));
  bVar3 = *(byte *)(lVar11 + 4);
  puVar12 = &DAT_cbf29ce484222645;
  if (bVar3 != 0) {
    puVar12 = &DAT_cbf29ce484222645;
    pbVar10 = (byte *)(lVar11 + 5);
    do {
      puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar3 != 0);
  }
  *(size_t *)(param_1 + 0xe8) = sVar7;
  plVar8 = *(long **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined1 **)(param_1 + 0xd8) = puVar12;
  *(char **)(param_1 + 0xe0) = (char *)(lVar11 + 4);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
     (uVar9 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar9 == 0)) {
    lVar11 = 0;
  }
  else {
    puVar1 = (uint *)((long)piVar14 + uVar9);
    lVar11 = (long)puVar1 + (ulong)*puVar1;
  }
  sVar7 = strlen((char *)(lVar11 + 4));
  bVar3 = *(byte *)(lVar11 + 4);
  if (bVar3 != 0) {
    pbVar10 = (byte *)(lVar11 + 5);
    do {
      puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar3 != 0);
  }
  *(size_t *)(param_1 + 0x108) = sVar7;
  plVar8 = *(long **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 **)(param_1 + 0xf8) = puVar15;
  *(char **)(param_1 + 0x100) = (char *)(lVar11 + 4);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (*(ushort *)((long)piVar14 - (long)*piVar14) < 9) {
    bVar5 = false;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[4];
    bVar5 = false;
    if (uVar9 != 0) {
      bVar5 = *(char *)((long)piVar14 + uVar9) != '\0';
    }
  }
  *(bool *)(param_1 + 0x118) = bVar5;
  if (*(ushort *)((long)piVar14 - (long)*piVar14) < 0xb) {
    uVar18 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[5];
    uVar18 = 0;
    if (uVar9 != 0) {
      uVar18 = *(undefined4 *)((long)piVar14 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x11c) = uVar18;
  if (*(ushort *)((long)piVar14 - (long)*piVar14) < 0x1f) {
    uVar18 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[0xf];
    uVar18 = 0;
    if (uVar9 != 0) {
      uVar18 = *(undefined4 *)((long)piVar14 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x120) = uVar18;
  uVar16 = 0;
  uVar18 = 0;
  if (0x20 < *(ushort *)((long)piVar14 - (long)*piVar14)) {
    uVar9 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[0x10];
    uVar18 = 0;
    if (uVar9 != 0) {
      uVar18 = *(undefined4 *)((long)piVar14 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x124) = uVar18;
  if ((0x24 < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
     (uVar9 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[0x12], uVar9 != 0)) {
    uVar16 = *(undefined4 *)((long)piVar14 + uVar9);
  }
  *(undefined4 *)(param_1 + 300) = uVar16;
  if ((((0x22 < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
       (uVar9 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[0x11], uVar9 != 0)) &&
      (puVar1 = (uint *)((long)piVar14 + uVar9), piVar2 = (int *)((long)puVar1 + (ulong)*puVar1),
      piVar2 != (int *)0x0)) && (*piVar2 != 0)) {
    iVar6 = strcmp((char *)(piVar2 + 1),"AreaSound");
    if (iVar6 != 0) {
      iVar6 = strcmp((char *)(piVar2 + 1),"ShapeSound");
      if (iVar6 == 0) {
        uVar18 = 1;
      }
      else {
        uVar18 = 2;
      }
      *(undefined4 *)(param_1 + 0x128) = uVar18;
      goto LAB_01dc31f0;
    }
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
LAB_01dc31f0:
  puVar13 = (ushort *)((long)piVar14 - (long)*piVar14);
  uVar4 = *puVar13;
  if (uVar4 < 0xf) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if ((ulong)puVar13[7] != 0) {
      puVar1 = (uint *)((long)piVar14 + (ulong)puVar13[7]);
      lVar11 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  iVar6 = strcmp((char *)(lVar11 + 4),"Box");
  if (iVar6 == 0) {
    uVar18 = 2;
  }
  else {
    if (uVar4 < 0xf) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      if ((ulong)puVar13[7] != 0) {
        puVar1 = (uint *)((long)piVar14 + (ulong)puVar13[7]);
        lVar11 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    iVar6 = strcmp((char *)(lVar11 + 4),"Capsule");
    if (iVar6 == 0) {
      uVar18 = 3;
    }
    else {
      uVar18 = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x130) = uVar18;
  puVar1 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (0x10 - (long)*piVar14)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar17 = 0;
  uVar18 = 0;
  uVar16 = 0;
  uVar21 = 0;
  uVar4 = *puVar13;
  if (4 < uVar4) {
    uVar18 = 0;
    uVar16 = 0;
    if ((ulong)puVar13[2] != 0) {
      uVar16 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[2]);
    }
    if (uVar4 < 7) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
      uVar18 = 0;
      if ((ulong)puVar13[3] != 0) {
        uVar18 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[3]);
      }
      if ((8 < uVar4) && ((ulong)puVar13[4] != 0)) {
        uVar21 = *(uint *)((long)piVar2 + (ulong)puVar13[4]);
      }
    }
  }
  uVar19 = 0;
  uVar20 = 0;
  uVar9 = 0;
  *(ulong *)(param_1 + 0x148) = (ulong)uVar21;
  *(ulong *)(param_1 + 0x140) = CONCAT44(uVar18,uVar16);
  puVar1 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (0x12 - (long)*piVar14)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar4 = *puVar13;
  if (4 < uVar4) {
    uVar20 = 0;
    uVar19 = 0;
    if ((ulong)puVar13[2] != 0) {
      uVar19 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[2]);
    }
    if (uVar4 < 7) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      uVar20 = 0;
      if ((ulong)puVar13[3] != 0) {
        uVar20 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[3]);
      }
      if ((8 < uVar4) && ((ulong)puVar13[4] != 0)) {
        uVar9 = (ulong)*(uint *)((long)piVar2 + (ulong)puVar13[4]);
      }
    }
  }
  *(ulong *)(param_1 + 0x158) = uVar9;
  *(ulong *)(param_1 + 0x150) = CONCAT44(uVar20,uVar19);
  uVar18 = 0;
  if (0x14 < *(ushort *)((long)piVar14 - (long)*piVar14)) {
    uVar9 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[10];
    uVar18 = 0;
    if (uVar9 != 0) {
      uVar18 = *(undefined4 *)((long)piVar14 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x160) = uVar18;
  if ((0x16 < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
     (uVar9 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[0xb], uVar9 != 0)) {
    uVar17 = *(undefined4 *)((long)piVar14 + uVar9);
  }
  *(undefined4 *)(param_1 + 0x164) = uVar17;
  return;
}


