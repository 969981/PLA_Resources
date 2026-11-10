/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018c0798; name: FUN_018c0798
 */


void FUN_018c0798(long param_1)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  byte bVar8;
  undefined *puVar9;
  int iVar10;
  uint *puVar11;
  ushort *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  byte *pbVar16;
  uint *puVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint *puVar24;
  long lVar25;
  uint *puVar26;
  uint *puVar27;
  undefined8 uVar28;
  float fVar29;
  long local_1f0;
  undefined1 *local_1e8;
  byte *pbStack_1e0;
  size_t local_1d8;
  long *local_1d0;
  undefined1 *local_1c8;
  char *pcStack_1c0;
  size_t local_1b8;
  undefined8 uStack_1b0;
  undefined1 *local_1a8;
  char *pcStack_1a0;
  size_t local_198;
  undefined8 uStack_190;
  undefined1 *local_188;
  char *pcStack_180;
  size_t local_178;
  undefined8 uStack_170;
  undefined1 *local_168;
  char *pcStack_160;
  size_t local_158;
  undefined8 uStack_150;
  undefined1 *local_148;
  char *pcStack_140;
  size_t local_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined1 *local_f0;
  char *pcStack_e8;
  size_t local_e0;
  long *local_d8;
  undefined1 *local_d0;
  char *pcStack_c8;
  size_t local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  char *pcStack_a8;
  size_t local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  char *pcStack_88;
  size_t local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar11 = *(uint **)(*(long *)(param_1 + 0x160) + 0x250);
  piVar4 = (int *)((long)puVar11 + (ulong)*puVar11);
  uVar18 = (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4));
  puVar5 = (uint *)((long)piVar4 + uVar18);
  uVar20 = (ulong)*puVar5;
  puVar5 = (uint *)((long)puVar5 + uVar20);
  puVar27 = puVar5 + 1;
  uVar21 = (ulong)*puVar5;
  if (uVar21 != 0) {
    puVar5 = puVar27 + uVar21;
    plVar1 = (long *)(param_1 + 0x428);
    plVar2 = (long *)(param_1 + 0x458);
    local_1f0 = (long)puVar11 + uVar20 + uVar18 + (ulong)*puVar11 + 0xd;
    do {
      uVar7 = *puVar27;
      local_110 = *(undefined8 *)(param_1 + 8);
      piVar4 = (int *)((long)puVar27 + (ulong)uVar7);
      local_1c8 = &DAT_cbf29ce484222645;
      pcStack_1c0 = "";
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = &DAT_cbf29ce484222645;
      pcStack_1a0 = "";
      local_198 = 0;
      uStack_190 = 0;
      local_188 = &DAT_cbf29ce484222645;
      pcStack_180 = "";
      local_178 = 0;
      uStack_170 = 0;
      local_168 = &DAT_cbf29ce484222645;
      pcStack_160 = "";
      local_158 = 0;
      uStack_150 = 0;
      local_148 = &DAT_cbf29ce484222645;
      pcStack_140 = "";
      local_138 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_130 = (long *)0x0;
      uStack_128 = 0;
      local_f8 = 0;
      local_f0 = &DAT_cbf29ce484222645;
      pcStack_e8 = "";
      local_108 = 0x7ffffffffffffff;
      uStack_100 = 0;
      local_e0 = 0;
      local_d8 = (long *)0x0;
      local_d0 = &DAT_cbf29ce484222645;
      pcStack_c8 = "";
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = &DAT_cbf29ce484222645;
      pcStack_a8 = "";
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = &DAT_cbf29ce484222645;
      pcStack_88 = "";
      local_70 = 0;
      local_80 = 0;
      uStack_78 = 0;
      puVar12 = (ushort *)((long)piVar4 - (long)*piVar4);
      if (*puVar12 < 5) {
        puVar11 = (uint *)0x0;
        lVar15 = 0;
      }
      else {
        if ((ulong)puVar12[2] == 0) {
          puVar11 = (uint *)0x0;
        }
        else {
          puVar11 = *(uint **)((long)piVar4 + (ulong)puVar12[2]);
        }
        if ((*puVar12 < 0xb) || ((ulong)puVar12[5] == 0)) {
          lVar15 = 0;
        }
        else {
          puVar24 = (uint *)((long)piVar4 + (ulong)puVar12[5]);
          lVar15 = (long)puVar24 + (ulong)*puVar24;
        }
      }
      local_1b8 = strlen((char *)(lVar15 + 4));
      bVar8 = *(byte *)(lVar15 + 4);
      local_1c8 = &DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        local_1c8 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(lVar15 + 5);
        do {
          local_1c8 = (undefined1 *)(((ulong)local_1c8 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar8 != 0);
      }
      uStack_1b0 = 0;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
         (uVar18 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar18 == 0)) {
        lVar25 = 0;
      }
      else {
        puVar24 = (uint *)((long)piVar4 + uVar18);
        lVar25 = (long)puVar24 + (ulong)*puVar24;
      }
      pcStack_1c0 = (char *)(lVar15 + 4);
      local_198 = strlen((char *)(lVar25 + 4));
      bVar8 = *(byte *)(lVar25 + 4);
      local_1a8 = &DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        local_1a8 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(lVar25 + 5);
        do {
          local_1a8 = (undefined1 *)(((ulong)local_1a8 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar8 != 0);
      }
      uStack_190 = 0;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xd) ||
         (uVar18 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[6], uVar18 == 0)) {
        lVar15 = 0;
      }
      else {
        puVar24 = (uint *)((long)piVar4 + uVar18);
        lVar15 = (long)puVar24 + (ulong)*puVar24;
      }
      pcStack_1a0 = (char *)(lVar25 + 4);
      local_178 = strlen((char *)(lVar15 + 4));
      bVar8 = *(byte *)(lVar15 + 4);
      local_188 = &DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        local_188 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(lVar15 + 5);
        do {
          local_188 = (undefined1 *)(((ulong)local_188 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar8 != 0);
      }
      uStack_170 = 0;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x19) ||
         (uVar18 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xc], uVar18 == 0)) {
        lVar25 = 0;
      }
      else {
        puVar24 = (uint *)((long)piVar4 + uVar18);
        lVar25 = (long)puVar24 + (ulong)*puVar24;
      }
      pcStack_180 = (char *)(lVar15 + 4);
      local_c0 = strlen((char *)(lVar25 + 4));
      bVar8 = *(byte *)(lVar25 + 4);
      local_d0 = &DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        local_d0 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(lVar25 + 5);
        do {
          local_d0 = (undefined1 *)(((ulong)local_d0 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar8 != 0);
      }
      uStack_b8 = 0;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x17) ||
         (uVar18 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xb], uVar18 == 0)) {
        lVar15 = 0;
      }
      else {
        puVar24 = (uint *)((long)piVar4 + uVar18);
        lVar15 = (long)puVar24 + (ulong)*puVar24;
      }
      pcStack_c8 = (char *)(lVar25 + 4);
      local_a0 = strlen((char *)(lVar15 + 4));
      bVar8 = *(byte *)(lVar15 + 4);
      local_b0 = &DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        local_b0 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(lVar15 + 5);
        do {
          local_b0 = (undefined1 *)(((ulong)local_b0 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar8 != 0);
      }
      uStack_98 = 0;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x1b) ||
         (uVar18 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xd], uVar18 == 0)) {
        lVar25 = 0;
      }
      else {
        puVar24 = (uint *)((long)piVar4 + uVar18);
        lVar25 = (long)puVar24 + (ulong)*puVar24;
      }
      pcStack_a8 = (char *)(lVar15 + 4);
      local_80 = strlen((char *)(lVar25 + 4));
      bVar8 = *(byte *)(lVar25 + 4);
      local_90 = &DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        local_90 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(lVar25 + 5);
        do {
          local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar8 != 0);
      }
      uStack_78 = 0;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x11) ||
         (uVar18 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[8], uVar18 == 0)) {
        lVar15 = 0;
      }
      else {
        puVar24 = (uint *)((long)piVar4 + uVar18);
        lVar15 = (long)puVar24 + (ulong)*puVar24;
      }
      pcStack_88 = (char *)(lVar25 + 4);
      local_158 = strlen((char *)(lVar15 + 4));
      bVar8 = *(byte *)(lVar15 + 4);
      local_168 = &DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        local_168 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(lVar15 + 5);
        do {
          local_168 = (undefined1 *)(((ulong)local_168 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar8 != 0);
      }
      uStack_150 = 0;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x13) ||
         (uVar18 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[9], uVar18 == 0)) {
        lVar25 = 0;
      }
      else {
        puVar24 = (uint *)((long)piVar4 + uVar18);
        lVar25 = (long)puVar24 + (ulong)*puVar24;
      }
      pcVar3 = (char *)(lVar25 + 4);
      pcStack_160 = (char *)(lVar15 + 4);
      local_138 = strlen(pcVar3);
      bVar8 = *(byte *)(lVar25 + 4);
      local_148 = &DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        local_148 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(lVar25 + 5);
        do {
          local_148 = (undefined1 *)(((ulong)local_148 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar8 != 0);
      }
      local_130 = (long *)0x0;
      lVar15 = (long)*piVar4;
      uVar18 = (ulong)*(ushort *)((long)piVar4 + (0xe - lVar15));
      puVar24 = (uint *)((long)piVar4 + uVar18);
      uVar20 = (ulong)*puVar24;
      piVar6 = (int *)((long)puVar24 + uVar20);
      uVar21 = (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6));
      puVar24 = (uint *)((long)piVar6 + uVar21);
      uVar22 = (ulong)*puVar24;
      puVar24 = (uint *)((long)puVar24 + uVar22);
      puVar26 = puVar24 + 1;
      uVar23 = (ulong)*puVar24;
      pcStack_140 = pcVar3;
      if (uVar23 != 0) {
        puVar24 = puVar26 + uVar23;
        lVar15 = local_1f0 + uVar22 + uVar21 + uVar20 + uVar18 + (ulong)uVar7;
        puVar17 = puVar26;
        do {
          puVar26 = puVar17 + 1;
          uVar7 = *puVar17;
          pbVar16 = (byte *)((long)puVar26 + (ulong)uVar7);
          local_1d8 = strlen((char *)pbVar16);
          bVar8 = *pbVar16;
          local_1e8 = &DAT_cbf29ce484222645;
          if (bVar8 != 0) {
            local_1e8 = &DAT_cbf29ce484222645;
            pbVar19 = (byte *)(lVar15 + (ulong)uVar7);
            do {
              local_1e8 = (undefined1 *)(((ulong)local_1e8 ^ (ulong)bVar8) * 0x100000001b3);
              bVar8 = *pbVar19;
              pbVar19 = pbVar19 + 1;
            } while (bVar8 != 0);
          }
          local_1d0 = (long *)0x0;
          pbStack_1e0 = pbVar16;
          FUN_018c1608(&uStack_128,&local_1e8);
          if (local_1d0 != (long *)0x0) {
            (**(code **)(*local_1d0 + 0x20))();
          }
          lVar15 = lVar15 + 4;
          puVar17 = puVar26;
        } while (puVar26 != puVar24);
        lVar15 = (long)*piVar4;
      }
      if ((*(ushort *)((long)piVar4 - lVar15) < 0x13) ||
         (uVar18 = (ulong)((ushort *)((long)piVar4 - lVar15))[9], uVar18 == 0)) {
        lVar15 = 0;
      }
      else {
        puVar24 = (uint *)((long)piVar4 + uVar18);
        lVar15 = (long)puVar24 + (ulong)*puVar24;
      }
      pcVar3 = (char *)(lVar15 + 4);
      local_138 = strlen(pcVar3);
      plVar13 = local_130;
      bVar8 = *(byte *)(lVar15 + 4);
      local_148 = &DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        local_148 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(lVar15 + 5);
        do {
          local_148 = (undefined1 *)(((ulong)local_148 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar8 != 0);
      }
      local_130 = (long *)0x0;
      pcStack_140 = pcVar3;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      local_130 = (long *)0x0;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x15) ||
         (uVar18 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[10], uVar18 == 0)) {
        lVar15 = 0;
      }
      else {
        puVar24 = (uint *)((long)piVar4 + uVar18);
        lVar15 = (long)puVar24 + (ulong)*puVar24;
      }
      pcVar3 = (char *)(lVar15 + 4);
      local_e0 = strlen(pcVar3);
      plVar13 = local_d8;
      bVar8 = *(byte *)(lVar15 + 4);
      local_f0 = &DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        local_f0 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(lVar15 + 5);
        do {
          local_f0 = (undefined1 *)(((ulong)local_f0 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar8 != 0);
      }
      local_d8 = (long *)0x0;
      pcStack_e8 = pcVar3;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      local_d8 = (long *)0x0;
      if (*(ushort *)((long)piVar4 - (long)*piVar4) < 7) {
        local_70 = 0;
      }
      else {
        uVar18 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
        local_70 = 0;
        if (uVar18 != 0) {
          local_70 = *(undefined4 *)((long)piVar4 + uVar18);
        }
      }
      puVar24 = *(uint **)(param_1 + 0x430);
      if (puVar24 == (uint *)0x0) {
LAB_018c0ec0:
        plVar13 = (long *)(**(code **)(**(long **)(param_1 + 0x460) + 0x10))
                                    (*(long **)(param_1 + 0x460),0x178,8);
        if (plVar13 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x460) + 0xb8))();
        }
        uVar28 = *(undefined8 *)(param_1 + 0x460);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar10 != 0))
        {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar15 == 0) {
          plVar13[2] = (long)puVar11;
          FUN_018c4f0c(plVar13 + 3,&local_1c8);
        }
        else {
          if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar28;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
          plVar13[2] = (long)puVar11;
          FUN_018c4f0c(plVar13 + 3,&local_1c8);
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
        }
        *plVar13 = 0;
        plVar13[1] = (long)puVar11;
        fVar29 = (float)(*(long *)(param_1 + 0x480) + 1);
        if ((puVar24 == (uint *)0x0) || (*(float *)(param_1 + 0x488) * (float)puVar24 < fVar29)) {
          uVar18 = (ulong)(puVar24 < (uint *)0x3 || ((ulong)puVar24 & (long)puVar24 - 1U) != 0) |
                   (long)puVar24 << 1;
          uVar20 = (ulong)(fVar29 / *(float *)(param_1 + 0x488));
          if (uVar20 <= uVar18) {
            uVar20 = uVar18;
          }
          FUN_018c4e08(plVar1,uVar20);
          puVar24 = *(uint **)(param_1 + 0x430);
          if (((ulong)puVar24 & (long)puVar24 - 1U) == 0) {
            puVar26 = (uint *)((long)puVar24 - 1U & (ulong)puVar11);
          }
          else if (puVar11 < puVar24) {
            puVar26 = puVar11;
          }
          else {
            uVar18 = 0;
            if (puVar24 != (uint *)0x0) {
              uVar18 = (ulong)puVar11 / (ulong)puVar24;
            }
            puVar26 = (uint *)((long)puVar11 - uVar18 * (long)puVar24);
          }
        }
        plVar14 = *(long **)(*plVar1 + (long)puVar26 * 8);
        if (plVar14 == (long *)0x0) {
          *plVar13 = *plVar2;
          *plVar2 = (long)plVar13;
          *(long **)(*plVar1 + (long)puVar26 * 8) = plVar2;
          if (*plVar13 != 0) {
            puVar11 = *(uint **)(*plVar13 + 8);
            if (((ulong)puVar24 & (long)puVar24 - 1U) == 0) {
              puVar11 = (uint *)((ulong)puVar11 & (long)puVar24 - 1U);
            }
            else if (puVar24 <= puVar11) {
              uVar18 = 0;
              if (puVar24 != (uint *)0x0) {
                uVar18 = (ulong)puVar11 / (ulong)puVar24;
              }
              puVar11 = (uint *)((long)puVar11 - uVar18 * (long)puVar24);
            }
            plVar14 = (long *)(*plVar1 + (long)puVar11 * 8);
            goto LAB_018c0fc8;
          }
        }
        else {
          *plVar13 = *plVar14;
LAB_018c0fc8:
          *plVar14 = (long)plVar13;
        }
        *(long *)(param_1 + 0x480) = *(long *)(param_1 + 0x480) + 1;
      }
      else {
        uVar18 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          puVar26 = (uint *)((long)puVar24 - 1U & (ulong)puVar11);
        }
        else {
          puVar26 = puVar11;
          if (puVar24 <= puVar11) {
            uVar20 = 0;
            if (puVar24 != (uint *)0x0) {
              uVar20 = (ulong)puVar11 / (ulong)puVar24;
            }
            puVar26 = (uint *)((long)puVar11 - uVar20 * (long)puVar24);
          }
        }
        plVar13 = *(long **)(*plVar1 + (long)puVar26 * 8);
        if (plVar13 == (long *)0x0) goto LAB_018c0ec0;
        if (uVar18 < 2) {
          do {
            plVar13 = (long *)*plVar13;
            if ((plVar13 == (long *)0x0) ||
               ((uint *)plVar13[1] != puVar11 &&
                (uint *)((ulong)plVar13[1] & (long)puVar24 - 1U) != puVar26)) goto LAB_018c0ec0;
          } while ((uint *)plVar13[2] != puVar11);
        }
        else {
          do {
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) goto LAB_018c0ec0;
            puVar17 = (uint *)plVar13[1];
            if (puVar17 != puVar11) {
              if (puVar24 <= puVar17) {
                uVar18 = 0;
                if (puVar24 != (uint *)0x0) {
                  uVar18 = (ulong)puVar17 / (ulong)puVar24;
                }
                puVar17 = (uint *)((long)puVar17 - uVar18 * (long)puVar24);
              }
              if (puVar17 != puVar26) goto LAB_018c0ec0;
            }
          } while ((uint *)plVar13[2] != puVar11);
        }
      }
      FUN_018c2538(&local_1c8);
      local_1f0 = local_1f0 + 4;
      puVar27 = puVar27 + 1;
    } while (puVar27 != puVar5);
  }
  return;
}


