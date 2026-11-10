/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cfb640; name: FUN_01cfb640
 */


void FUN_01cfb640(long param_1,int *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  size_t sVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  long lVar12;
  ushort *puVar13;
  undefined1 *puVar14;
  uint *puVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined8 local_130;
  ulong uStack_128;
  undefined1 *local_120;
  char *pcStack_118;
  size_t local_110;
  long *local_108;
  undefined1 *local_100;
  char *pcStack_f8;
  size_t local_f0;
  long *local_e8;
  undefined1 *local_e0;
  char *pcStack_d8;
  size_t local_d0;
  long *local_c8;
  undefined1 *local_c0;
  char *pcStack_b8;
  size_t local_b0;
  long *local_a8;
  undefined1 *local_a0;
  char *pcStack_98;
  size_t local_90;
  long *local_88;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar9 == 0)) {
    lVar12 = 0;
  }
  else {
    puVar15 = (uint *)((long)param_2 + uVar9);
    lVar12 = (long)puVar15 + (ulong)*puVar15;
  }
  sVar7 = strlen((char *)(lVar12 + 4));
  bVar4 = *(byte *)(lVar12 + 4);
  puVar14 = &DAT_cbf29ce484222645;
  if (bVar4 != 0) {
    puVar14 = &DAT_cbf29ce484222645;
    pbVar11 = (byte *)(lVar12 + 5);
    do {
      puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar4 != 0);
  }
  *(size_t *)(param_1 + 200) = sVar7;
  plVar8 = *(long **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined1 **)(param_1 + 0xb8) = puVar14;
  *(char **)(param_1 + 0xc0) = (char *)(lVar12 + 4);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  lVar12 = (long)*param_2;
  uVar9 = (ulong)((ushort *)((long)param_2 - lVar12))[4];
  uVar5 = *(ushort *)((long)param_2 - lVar12);
  puVar1 = (uint *)((long)param_2 + uVar9);
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  puVar15 = (uint *)0x0;
  if (uVar9 != 0) {
    puVar15 = puVar1;
  }
  uVar19 = *puVar1;
  if (puVar15 != puVar1 + uVar19) {
    puVar15 = puVar15 + 1;
    do {
      piVar2 = (int *)((long)puVar15 + (ulong)*puVar15);
      local_120 = &DAT_cbf29ce484222645;
      pcStack_118 = "";
      local_110 = 0;
      local_108 = (long *)0x0;
      local_100 = &DAT_cbf29ce484222645;
      pcStack_f8 = "";
      local_f0 = 0;
      local_e8 = (long *)0x0;
      local_e0 = &DAT_cbf29ce484222645;
      pcStack_d8 = "";
      local_d0 = 0;
      local_c8 = (long *)0x0;
      local_c0 = &DAT_cbf29ce484222645;
      pcStack_b8 = "";
      local_b0 = 0;
      local_a8 = (long *)0x0;
      local_a0 = &DAT_cbf29ce484222645;
      pcStack_98 = "";
      local_90 = 0;
      local_88 = (long *)0x0;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
        local_130 = 0;
      }
      else {
        uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
        local_130 = 0;
        if (uVar9 != 0) {
          local_130 = *(undefined8 *)((long)piVar2 + uVar9);
        }
      }
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 7) {
        uStack_128 = 0;
      }
      else {
        uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
        uStack_128 = 0;
        if (uVar9 != 0) {
          uStack_128 = *(undefined8 *)((long)piVar2 + uVar9);
        }
      }
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
         (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar9 == 0)) {
        lVar12 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar2 + uVar9);
        lVar12 = (long)puVar3 + (ulong)*puVar3;
      }
      local_110 = strlen((char *)(lVar12 + 4));
      bVar4 = *(byte *)(lVar12 + 4);
      local_120 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        local_120 = &DAT_cbf29ce484222645;
        pbVar11 = (byte *)(lVar12 + 5);
        do {
          local_120 = (undefined1 *)(((ulong)local_120 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar4 != 0);
      }
      local_108 = (long *)0x0;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) ||
         (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar9 == 0)) {
        lVar16 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar2 + uVar9);
        lVar16 = (long)puVar3 + (ulong)*puVar3;
      }
      pcStack_118 = (char *)(lVar12 + 4);
      local_f0 = strlen((char *)(lVar16 + 4));
      bVar4 = *(byte *)(lVar16 + 4);
      local_100 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        local_100 = &DAT_cbf29ce484222645;
        pbVar11 = (byte *)(lVar16 + 5);
        do {
          local_100 = (undefined1 *)(((ulong)local_100 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar4 != 0);
      }
      local_e8 = (long *)0x0;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xd) ||
         (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6], uVar9 == 0)) {
        lVar12 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar2 + uVar9);
        lVar12 = (long)puVar3 + (ulong)*puVar3;
      }
      pcStack_f8 = (char *)(lVar16 + 4);
      local_d0 = strlen((char *)(lVar12 + 4));
      bVar4 = *(byte *)(lVar12 + 4);
      local_e0 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        local_e0 = &DAT_cbf29ce484222645;
        pbVar11 = (byte *)(lVar12 + 5);
        do {
          local_e0 = (undefined1 *)(((ulong)local_e0 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar4 != 0);
      }
      local_c8 = (long *)0x0;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xf) ||
         (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7], uVar9 == 0)) {
        lVar16 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar2 + uVar9);
        lVar16 = (long)puVar3 + (ulong)*puVar3;
      }
      pcStack_d8 = (char *)(lVar12 + 4);
      local_b0 = strlen((char *)(lVar16 + 4));
      bVar4 = *(byte *)(lVar16 + 4);
      local_c0 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        local_c0 = &DAT_cbf29ce484222645;
        pbVar11 = (byte *)(lVar16 + 5);
        do {
          local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar4 != 0);
      }
      local_a8 = (long *)0x0;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x11) ||
         (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8], uVar9 == 0)) {
        lVar12 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar2 + uVar9);
        lVar12 = (long)puVar3 + (ulong)*puVar3;
      }
      pcStack_b8 = (char *)(lVar16 + 4);
      local_90 = strlen((char *)(lVar12 + 4));
      bVar4 = *(byte *)(lVar12 + 4);
      local_a0 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        local_a0 = &DAT_cbf29ce484222645;
        pbVar11 = (byte *)(lVar12 + 5);
        do {
          local_a0 = (undefined1 *)(((ulong)local_a0 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar4 != 0);
      }
      local_88 = (long *)0x0;
      pcStack_98 = (char *)(lVar12 + 4);
      FUN_01cfbe90(param_1 + 0xd8,&local_130);
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x20))();
      }
      if (local_108 != (long *)0x0) {
        (**(code **)(*local_108 + 0x20))();
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar1 + uVar19 + 1);
    lVar12 = (long)*param_2;
    uVar5 = *(ushort *)((long)param_2 - lVar12);
  }
  if (uVar5 < 0xb) {
    uVar10 = 0;
  }
  else {
    uVar9 = (ulong)*(ushort *)((long)param_2 + (10 - lVar12));
    uVar10 = 0;
    if (uVar9 != 0) {
      uVar10 = *(undefined8 *)((long)param_2 + uVar9);
    }
  }
  *(undefined8 *)(param_1 + 0x110) = uVar10;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xd) {
    uVar10 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6];
    uVar10 = 0;
    if (uVar9 != 0) {
      uVar10 = *(undefined8 *)((long)param_2 + uVar9);
    }
  }
  *(undefined8 *)(param_1 + 0x118) = uVar10;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x11) {
    uVar17 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[8];
    uVar17 = 0;
    if (uVar9 != 0) {
      uVar17 = *(undefined4 *)((long)param_2 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x124) = uVar17;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x13) {
    uVar17 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[9];
    uVar17 = 0;
    if (uVar9 != 0) {
      uVar17 = *(undefined4 *)((long)param_2 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x128) = uVar17;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x15) {
    bVar6 = false;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[10];
    bVar6 = false;
    if (uVar9 != 0) {
      bVar6 = *(char *)((long)param_2 + uVar9) != '\0';
    }
  }
  *(bool *)(param_1 + 300) = bVar6;
  puVar15 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (0x16 - (long)*param_2)));
  puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
  if (*puVar15 < 3) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  piVar2 = (int *)((long)(puVar15 + 1) + (ulong)puVar15[1]);
  puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar20 = 0;
  uVar18 = 0;
  uVar17 = 0;
  uStack_128 = 0;
  uVar5 = *puVar13;
  if (4 < uVar5) {
    uVar18 = 0;
    uVar17 = 0;
    if ((ulong)puVar13[2] != 0) {
      uVar17 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[2]);
    }
    if (uVar5 < 7) {
      uStack_128 = 0;
    }
    else {
      uStack_128 = 0;
      uVar18 = 0;
      if ((ulong)puVar13[3] != 0) {
        uVar18 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[3]);
      }
      if ((8 < uVar5) && ((ulong)puVar13[4] != 0)) {
        uStack_128 = (ulong)*(uint *)((long)piVar2 + (ulong)puVar13[4]);
      }
    }
  }
  local_130 = CONCAT44(uVar18,uVar17);
  FUN_01cfbee4(param_1 + 0x130,&local_130);
  piVar2 = (int *)((long)(puVar15 + 2) + (ulong)puVar15[2]);
  puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar5 = *puVar13;
  uVar18 = 0;
  uVar17 = 0;
  uVar19 = 0;
  if (4 < uVar5) {
    uVar18 = 0;
    uVar17 = 0;
    if ((ulong)puVar13[2] != 0) {
      uVar17 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[2]);
    }
    if (uVar5 < 7) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      uVar18 = 0;
      if ((ulong)puVar13[3] != 0) {
        uVar18 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[3]);
      }
      if ((8 < uVar5) && ((ulong)puVar13[4] != 0)) {
        uVar19 = *(uint *)((long)piVar2 + (ulong)puVar13[4]);
      }
    }
  }
  *(ulong *)(param_1 + 0x178) = (ulong)uVar19;
  *(ulong *)(param_1 + 0x170) = CONCAT44(uVar18,uVar17);
  piVar2 = (int *)((long)(puVar15 + 3) + (ulong)puVar15[3]);
  if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
     (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar9 != 0)) {
    uVar20 = *(undefined4 *)((long)piVar2 + uVar9);
  }
  *(undefined4 *)(param_1 + 0x180) = uVar20;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xf) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7], uVar9 == 0)) {
    uVar17 = 1;
  }
  else {
    lVar12 = *(long *)((long)param_2 + uVar9);
    if (lVar12 == 0x2222179230cf61ac) {
      uVar17 = 6;
    }
    else {
      uVar17 = 1;
      if (lVar12 < -0x2a8102a77c55efca) {
        if (lVar12 == -0x7e79a98f8ceff188) {
          uVar17 = 5;
        }
        else if (lVar12 == -0x4a78ebf0a4d45c6d) {
          uVar17 = 3;
        }
        else if (lVar12 == -0x40ba529037febb75) {
          uVar17 = 8;
        }
      }
      else if (lVar12 == -0x2a8102a77c55efca) {
        uVar17 = 7;
      }
      else if (lVar12 == -0xca437fc7512a88e) {
        uVar17 = 4;
      }
      else if (lVar12 == 0x1273fdc62f43a0a5) {
        uVar17 = 2;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x120) = uVar17;
  return;
}


