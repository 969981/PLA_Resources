/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c8693c; name: FUN_01c8693c
 */


void FUN_01c8693c(long param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  ushort *puVar11;
  byte *pbVar12;
  long lVar13;
  undefined1 *puVar14;
  uint *puVar15;
  long lVar16;
  int *piVar17;
  int *piVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 *local_108;
  char *pcStack_100;
  size_t local_f8;
  long *local_f0;
  undefined1 *local_e8;
  char *pcStack_e0;
  size_t local_d8;
  long *local_d0;
  undefined1 *local_c8;
  char *pcStack_c0;
  size_t local_b8;
  long *local_b0;
  undefined1 *local_a8;
  char *pcStack_a0;
  size_t local_98;
  long *local_90;
  undefined1 *local_88;
  char *pcStack_80;
  size_t local_78;
  long *local_70;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar9 == 0)) {
    lVar13 = 0;
  }
  else {
    puVar15 = (uint *)((long)param_2 + uVar9);
    lVar13 = (long)puVar15 + (ulong)*puVar15;
  }
  sVar7 = strlen((char *)(lVar13 + 4));
  bVar3 = *(byte *)(lVar13 + 4);
  puVar14 = &DAT_cbf29ce484222645;
  if (bVar3 != 0) {
    puVar14 = &DAT_cbf29ce484222645;
    pbVar12 = (byte *)(lVar13 + 5);
    do {
      puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  *(size_t *)(param_1 + 200) = sVar7;
  plVar8 = *(long **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined1 **)(param_1 + 0xb8) = puVar14;
  *(char **)(param_1 + 0xc0) = (char *)(lVar13 + 4);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  lVar13 = (long)*param_2;
  uVar9 = (ulong)((ushort *)((long)param_2 - lVar13))[4];
  puVar1 = (uint *)((long)param_2 + uVar9);
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  puVar15 = (uint *)0x0;
  if (uVar9 != 0) {
    puVar15 = puVar1;
  }
  uVar21 = *puVar1;
  if (puVar15 == puVar1 + uVar21) {
    if (*(ushort *)((long)param_2 - lVar13) < 0xb) goto LAB_01c86a3c;
LAB_01c86d9c:
    uVar9 = (ulong)*(ushort *)((long)param_2 + (10 - lVar13));
    uVar10 = 0;
    if (uVar9 != 0) {
      uVar10 = *(undefined8 *)((long)param_2 + uVar9);
    }
  }
  else {
    puVar15 = puVar15 + 1;
    do {
      piVar17 = (int *)((long)puVar15 + (ulong)*puVar15);
      local_108 = &DAT_cbf29ce484222645;
      pcStack_100 = "";
      local_f8 = 0;
      local_f0 = (long *)0x0;
      local_e8 = &DAT_cbf29ce484222645;
      pcStack_e0 = "";
      local_d8 = 0;
      local_d0 = (long *)0x0;
      local_c8 = &DAT_cbf29ce484222645;
      pcStack_c0 = "";
      local_b8 = 0;
      local_b0 = (long *)0x0;
      local_a8 = &DAT_cbf29ce484222645;
      pcStack_a0 = "";
      local_98 = 0;
      local_90 = (long *)0x0;
      local_88 = &DAT_cbf29ce484222645;
      pcStack_80 = "";
      local_78 = 0;
      local_70 = (long *)0x0;
      if (*(ushort *)((long)piVar17 - (long)*piVar17) < 5) {
        local_118 = 0;
      }
      else {
        uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2];
        local_118 = 0;
        if (uVar9 != 0) {
          local_118 = *(undefined8 *)((long)piVar17 + uVar9);
        }
      }
      if (*(ushort *)((long)piVar17 - (long)*piVar17) < 7) {
        local_110 = 0;
      }
      else {
        uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[3];
        local_110 = 0;
        if (uVar9 != 0) {
          local_110 = *(undefined8 *)((long)piVar17 + uVar9);
        }
      }
      if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 9) ||
         (uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[4], uVar9 == 0)) {
        lVar13 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar17 + uVar9);
        lVar13 = (long)puVar2 + (ulong)*puVar2;
      }
      local_f8 = strlen((char *)(lVar13 + 4));
      bVar3 = *(byte *)(lVar13 + 4);
      local_108 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        local_108 = &DAT_cbf29ce484222645;
        pbVar12 = (byte *)(lVar13 + 5);
        do {
          local_108 = (undefined1 *)(((ulong)local_108 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar3 != 0);
      }
      local_f0 = (long *)0x0;
      if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 0xb) ||
         (uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[5], uVar9 == 0)) {
        lVar16 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar17 + uVar9);
        lVar16 = (long)puVar2 + (ulong)*puVar2;
      }
      pcStack_100 = (char *)(lVar13 + 4);
      local_d8 = strlen((char *)(lVar16 + 4));
      bVar3 = *(byte *)(lVar16 + 4);
      local_e8 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        local_e8 = &DAT_cbf29ce484222645;
        pbVar12 = (byte *)(lVar16 + 5);
        do {
          local_e8 = (undefined1 *)(((ulong)local_e8 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar3 != 0);
      }
      local_d0 = (long *)0x0;
      if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 0xd) ||
         (uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[6], uVar9 == 0)) {
        lVar13 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar17 + uVar9);
        lVar13 = (long)puVar2 + (ulong)*puVar2;
      }
      pcStack_e0 = (char *)(lVar16 + 4);
      local_b8 = strlen((char *)(lVar13 + 4));
      bVar3 = *(byte *)(lVar13 + 4);
      local_c8 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        local_c8 = &DAT_cbf29ce484222645;
        pbVar12 = (byte *)(lVar13 + 5);
        do {
          local_c8 = (undefined1 *)(((ulong)local_c8 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar3 != 0);
      }
      local_b0 = (long *)0x0;
      if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 0xf) ||
         (uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[7], uVar9 == 0)) {
        lVar16 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar17 + uVar9);
        lVar16 = (long)puVar2 + (ulong)*puVar2;
      }
      pcStack_c0 = (char *)(lVar13 + 4);
      local_98 = strlen((char *)(lVar16 + 4));
      bVar3 = *(byte *)(lVar16 + 4);
      local_a8 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        local_a8 = &DAT_cbf29ce484222645;
        pbVar12 = (byte *)(lVar16 + 5);
        do {
          local_a8 = (undefined1 *)(((ulong)local_a8 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar3 != 0);
      }
      local_90 = (long *)0x0;
      if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 0x11) ||
         (uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[8], uVar9 == 0)) {
        lVar13 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar17 + uVar9);
        lVar13 = (long)puVar2 + (ulong)*puVar2;
      }
      pcStack_a0 = (char *)(lVar16 + 4);
      local_78 = strlen((char *)(lVar13 + 4));
      bVar3 = *(byte *)(lVar13 + 4);
      local_88 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        local_88 = &DAT_cbf29ce484222645;
        pbVar12 = (byte *)(lVar13 + 5);
        do {
          local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar3 != 0);
      }
      local_70 = (long *)0x0;
      pcStack_80 = (char *)(lVar13 + 4);
      FUN_01c8766c(param_1 + 0xd8,&local_118);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x20))();
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar1 + uVar21 + 1);
    lVar13 = (long)*param_2;
    if (10 < *(ushort *)((long)param_2 - lVar13)) goto LAB_01c86d9c;
LAB_01c86a3c:
    uVar10 = 0;
  }
  *(undefined8 *)(param_1 + 0x110) = uVar10;
  uVar19 = 0;
  if ((0xc < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar9 != 0)) {
    uVar19 = *(undefined4 *)((long)param_2 + uVar9);
  }
  *(undefined4 *)(param_1 + 0x118) = uVar19;
  puVar11 = (ushort *)((long)param_2 - (long)*param_2);
  uVar4 = *puVar11;
  if (uVar4 < 0xf) {
    piVar17 = (int *)0x0;
  }
  else {
    piVar17 = (int *)0x0;
    if ((ulong)puVar11[7] != 0) {
      puVar15 = (uint *)((long)param_2 + (ulong)puVar11[7]);
      piVar17 = (int *)((long)puVar15 + (ulong)*puVar15);
    }
  }
  uVar19 = 0;
  if ((4 < *(ushort *)((long)piVar17 - (long)*piVar17)) &&
     (uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar9 != 0)) {
    uVar19 = *(undefined4 *)((long)piVar17 + uVar9);
  }
  if (uVar4 < 0xf) {
    piVar17 = (int *)0x0;
  }
  else {
    piVar17 = (int *)0x0;
    if ((ulong)puVar11[7] != 0) {
      puVar15 = (uint *)((long)param_2 + (ulong)puVar11[7]);
      piVar17 = (int *)((long)puVar15 + (ulong)*puVar15);
    }
  }
  uVar20 = 0;
  if ((6 < *(ushort *)((long)piVar17 - (long)*piVar17)) &&
     (uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[3], uVar9 != 0)) {
    uVar20 = *(undefined4 *)((long)piVar17 + uVar9);
  }
  if (uVar4 < 0xf) {
    piVar17 = (int *)0x0;
  }
  else {
    piVar17 = (int *)0x0;
    if ((ulong)puVar11[7] != 0) {
      puVar15 = (uint *)((long)param_2 + (ulong)puVar11[7]);
      piVar17 = (int *)((long)puVar15 + (ulong)*puVar15);
    }
  }
  uVar21 = 0;
  if ((8 < *(ushort *)((long)piVar17 - (long)*piVar17)) &&
     (uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[4], uVar9 != 0)) {
    uVar21 = *(uint *)((long)piVar17 + uVar9);
  }
  *(ulong *)(param_1 + 0x128) = (ulong)uVar21;
  *(ulong *)(param_1 + 0x120) = CONCAT44(uVar20,uVar19);
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x11) {
    uVar21 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[8];
    uVar21 = 0;
    if (uVar9 != 0) {
      uVar21 = (uint)(*(long *)((long)param_2 + uVar9) == -0x5ae36ad29dfc7ff1);
    }
  }
  *(uint *)(param_1 + 0x130) = uVar21;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x13) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[9], uVar9 == 0)) {
    piVar17 = (int *)0x0;
  }
  else {
    puVar15 = (uint *)((long)param_2 + uVar9);
    piVar17 = (int *)((long)puVar15 + (ulong)*puVar15);
  }
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 5) {
    uVar19 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar17 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x134) = uVar19;
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 7) {
    uVar19 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[3];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar17 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x138) = uVar19;
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 9) {
    uVar19 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[4];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar17 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x13c) = uVar19;
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0xb) {
    uVar19 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[5];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar17 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x140) = uVar19;
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0xd) {
    uVar19 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[6];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar17 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x144) = uVar19;
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0xf) {
    uVar19 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[7];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar17 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x148) = uVar19;
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0x11) {
    uVar19 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[8];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar17 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x14c) = uVar19;
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0x13) {
    bVar5 = false;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[9];
    bVar5 = false;
    if (uVar9 != 0) {
      bVar5 = *(char *)((long)piVar17 + uVar9) != '\0';
    }
  }
  *(bool *)(param_1 + 0x150) = bVar5;
  uVar20 = 0;
  uVar19 = 0;
  if (0x14 < *(ushort *)((long)piVar17 - (long)*piVar17)) {
    uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[10];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar17 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x154) = uVar19;
  uVar19 = 0;
  if (0x16 < *(ushort *)((long)piVar17 - (long)*piVar17)) {
    uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[0xb];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar17 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x158) = uVar19;
  if ((0x18 < *(ushort *)((long)piVar17 - (long)*piVar17)) &&
     (uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[0xc], uVar9 != 0)) {
    uVar20 = *(undefined4 *)((long)piVar17 + uVar9);
  }
  *(undefined4 *)(param_1 + 0x15c) = uVar20;
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0x1b) {
    local_118 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[0xd];
    local_118 = 0;
    if (uVar9 != 0) {
      local_118 = *(undefined8 *)((long)piVar17 + uVar9);
    }
  }
  uVar19 = FUN_018fdfcc(&local_118);
  *(undefined4 *)(param_1 + 0x160) = uVar19;
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0x1d) {
    uVar21 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[0xe];
    uVar21 = 0;
    if (uVar9 != 0) {
      lVar13 = *(long *)((long)piVar17 + uVar9);
      uVar21 = 2;
      if (lVar13 != 0x6a5e624ce2435885) {
        uVar21 = (uint)(lVar13 == -0x537678685ad7e3f0);
      }
    }
  }
  *(uint *)(param_1 + 0x164) = uVar21;
  if (*(int *)(param_1 + 0x130) != 1) {
    return;
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x15) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[10], uVar9 == 0)) {
    piVar18 = (int *)0x0;
  }
  else {
    puVar15 = (uint *)((long)param_2 + uVar9);
    piVar18 = (int *)((long)puVar15 + (ulong)*puVar15);
  }
  if (*(ushort *)((long)piVar18 - (long)*piVar18) < 5) {
    bVar5 = false;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2];
    bVar5 = false;
    if (uVar9 != 0) {
      bVar5 = *(char *)((long)piVar18 + uVar9) != '\0';
    }
  }
  *(bool *)(param_1 + 0x168) = bVar5;
  uVar20 = 0;
  uVar19 = 0;
  if (6 < *(ushort *)((long)piVar18 - (long)*piVar18)) {
    uVar9 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[3];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar18 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x16c) = uVar19;
  uVar19 = 0;
  if (8 < *(ushort *)((long)piVar18 - (long)*piVar18)) {
    uVar9 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[4];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar18 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x170) = uVar19;
  uVar19 = 0;
  if (10 < *(ushort *)((long)piVar18 - (long)*piVar18)) {
    uVar9 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[5];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar18 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x174) = uVar19;
  uVar19 = 0;
  if (0xc < *(ushort *)((long)piVar18 - (long)*piVar18)) {
    uVar9 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[6];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar18 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x178) = uVar19;
  uVar19 = 0;
  if (0xe < *(ushort *)((long)piVar18 - (long)*piVar18)) {
    uVar9 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[7];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar18 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x17c) = uVar19;
  if ((0x10 < *(ushort *)((long)piVar18 - (long)*piVar18)) &&
     (uVar9 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[8], uVar9 != 0)) {
    uVar20 = *(undefined4 *)((long)piVar18 + uVar9);
  }
  *(undefined4 *)(param_1 + 0x180) = uVar20;
  if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x13) {
    uVar19 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[9];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar18 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x184) = uVar19;
  if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x15) {
    uVar19 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[10];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar18 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x188) = uVar19;
  if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x17) {
    uVar19 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[0xb];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar18 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x18c) = uVar19;
  if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x19) {
    uVar19 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[0xc];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar18 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 400) = uVar19;
  if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x1b) {
    uVar19 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[0xd];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar18 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x194) = uVar19;
  uVar19 = 0;
  if ((0x1c < *(ushort *)((long)piVar18 - (long)*piVar18)) &&
     (uVar9 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[0xe], uVar9 != 0)) {
    uVar19 = *(undefined4 *)((long)piVar18 + uVar9);
  }
  *(undefined4 *)(param_1 + 0x198) = uVar19;
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0x1b) {
    local_118 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[0xd];
    local_118 = 0;
    if (uVar9 != 0) {
      local_118 = *(undefined8 *)((long)piVar17 + uVar9);
    }
  }
  uVar19 = FUN_018fdfcc(&local_118);
  *(undefined4 *)(param_1 + 0x19c) = uVar19;
  uVar20 = 0;
  uVar19 = 0;
  if (0x20 < *(ushort *)((long)piVar18 - (long)*piVar18)) {
    uVar9 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[0x10];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar18 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x1a0) = uVar19;
  if ((0x16 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xb], uVar9 != 0)) {
    uVar20 = *(undefined4 *)((long)param_2 + uVar9);
  }
  *(undefined4 *)(param_1 + 0x1a4) = uVar20;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x19) {
    uVar19 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xc];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)param_2 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x1a8) = uVar19;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x1b) {
    uVar10 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xd];
    uVar10 = 0;
    if (uVar9 != 0) {
      uVar10 = *(undefined8 *)((long)param_2 + uVar9);
    }
  }
  *(undefined8 *)(param_1 + 0x1b0) = uVar10;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x1d) {
    uVar19 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xe];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)param_2 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x1b8) = uVar19;
  if (0x1e < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xf];
    uVar19 = 0;
    if (uVar9 == 0) goto LAB_01c874d8;
    lVar13 = *(long *)((long)param_2 + uVar9);
    if (lVar13 == -0x5a71fa4478ed30a3) {
      uVar19 = 1;
      goto LAB_01c874d8;
    }
    if (lVar13 == -0x1dbcdcd96621fd9f) {
      uVar19 = 3;
      goto LAB_01c874d8;
    }
    if (lVar13 == -0x969265302b4a1a8) {
      uVar19 = 2;
      goto LAB_01c874d8;
    }
  }
  uVar19 = 0;
LAB_01c874d8:
  *(undefined4 *)(param_1 + 0x1bc) = uVar19;
  iVar6 = FUN_01c876c0();
  if (iVar6 < *(int *)(param_1 + 0x1a8)) {
    *(undefined1 *)(param_1 + 0x1c0) = 1;
  }
  iVar6 = FUN_01c876c0();
  if (iVar6 < *(int *)(param_1 + 0x1b8)) {
    *(undefined1 *)(param_1 + 0x1c1) = 1;
  }
  return;
}


