/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018bebc0; name: FUN_018bebc0
 */


void FUN_018bebc0(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  undefined *puVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  long *plVar16;
  char *pcVar17;
  ulong uVar18;
  uint *puVar19;
  ushort *puVar20;
  long *plVar21;
  byte *pbVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  undefined8 uVar26;
  long lVar27;
  ushort uVar28;
  long *plVar29;
  uint uVar30;
  long *plVar31;
  long *unaff_x26;
  long *unaff_x28;
  float fVar32;
  uint local_1f4;
  undefined1 *local_1f0;
  char *pcStack_1e8;
  size_t local_1e0;
  long *local_1d8;
  undefined1 *local_1d0;
  char *pcStack_1c8;
  size_t local_1c0;
  long *local_1b8;
  undefined1 *local_1b0;
  char *pcStack_1a8;
  size_t local_1a0;
  long *local_198;
  undefined1 *local_190;
  char *pcStack_188;
  size_t local_180;
  long *local_178;
  undefined1 *local_170;
  char *pcStack_168;
  size_t local_160;
  long *local_158;
  undefined1 *local_150;
  char *pcStack_148;
  size_t local_140;
  long *local_138;
  long local_130;
  long local_128;
  long local_120;
  long *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined1 *local_f8;
  char *pcStack_f0;
  size_t local_e8;
  long *plStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined1 uStack_d4;
  long local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  float local_70;
  
  if (((*PTR_DAT_0437a780 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  lVar13 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar13;
  puVar19 = *(uint **)(*(long *)(param_1 + 0xd0) + 0x250);
  uVar4 = *puVar19;
  puVar14 = *(uint **)(*(long *)(*(long *)(lVar13 + 0x78) + 0x220) + 0x250);
  piVar1 = (int *)((long)puVar14 + (ulong)*puVar14);
  local_c0 = *(long **)(param_1 + 8);
  local_d0 = 0;
  local_c8 = (long *)0x0;
  local_b0 = 0;
  uStack_b8 = 0xfffffffffffffff;
  local_a8 = 0;
  local_a0 = (long *)0x0;
  local_90 = 0xfffffffffffffff;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 1.0;
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar14 = puVar2 + 1;
  uVar15 = (ulong)*puVar2;
  local_98 = local_c0;
  if (uVar15 != 0) {
    puVar2 = puVar14 + uVar15;
    do {
      plVar29 = local_c8;
      piVar1 = (int *)((long)puVar14 + (ulong)*puVar14);
      puVar20 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar7 = *puVar20;
      if (uVar7 < 5) {
        uVar28 = 0;
        plVar31 = (long *)0x0;
LAB_018bedbc:
        uVar30 = 0;
        uVar9 = uVar30;
        if (local_c8 == (long *)0x0) goto LAB_018bedc8;
LAB_018bed08:
        uVar30 = uVar9;
        uVar15 = (long)local_c8 - ((ulong)local_c8 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
        uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar15 < 2) {
          unaff_x28 = (long *)((long)local_c8 - 1U & (ulong)plVar31);
        }
        else {
          unaff_x28 = plVar31;
          if (local_c8 <= plVar31) {
            uVar23 = 0;
            if (local_c8 != (long *)0x0) {
              uVar23 = (ulong)plVar31 / (ulong)local_c8;
            }
            unaff_x28 = (long *)((long)plVar31 - uVar23 * (long)local_c8);
          }
        }
        plVar16 = *(long **)(local_d0 + (long)unaff_x28 * 8);
        if (plVar16 == (long *)0x0) goto LAB_018bedc8;
        if (uVar15 < 2) {
          do {
            plVar16 = (long *)*plVar16;
            if ((plVar16 == (long *)0x0) ||
               ((long *)plVar16[1] != plVar31 &&
                (long *)((ulong)plVar16[1] & (long)local_c8 - 1U) != unaff_x28)) goto LAB_018bedc8;
          } while ((long *)plVar16[2] != plVar31);
        }
        else {
          do {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_018bedc8;
            plVar21 = (long *)plVar16[1];
            if (plVar21 != plVar31) {
              if (local_c8 <= plVar21) {
                uVar15 = 0;
                if (local_c8 != (long *)0x0) {
                  uVar15 = (ulong)plVar21 / (ulong)local_c8;
                }
                plVar21 = (long *)((long)plVar21 - uVar15 * (long)local_c8);
              }
              if (plVar21 != unaff_x28) goto LAB_018bedc8;
            }
          } while ((long *)plVar16[2] != plVar31);
        }
      }
      else {
        if ((ulong)puVar20[2] == 0) {
          plVar31 = (long *)0x0;
        }
        else {
          plVar31 = *(long **)((long)piVar1 + (ulong)puVar20[2]);
        }
        if (uVar7 < 9) {
          uVar28 = 0;
          goto LAB_018bedbc;
        }
        if ((ulong)puVar20[4] == 0) {
          uVar28 = 0;
          if (10 < uVar7) goto LAB_018becec;
          goto LAB_018bedbc;
        }
        uVar28 = (ushort)(*(char *)((long)piVar1 + (ulong)puVar20[4]) != '\0');
        if (uVar7 < 0xb) goto LAB_018bedbc;
LAB_018becec:
        if ((ulong)puVar20[5] == 0) goto LAB_018bedbc;
        bVar10 = *(char *)((long)piVar1 + (ulong)puVar20[5]) != '\0';
        uVar30 = (uint)bVar10;
        uVar9 = (uint)bVar10;
        if (local_c8 != (long *)0x0) goto LAB_018bed08;
LAB_018bedc8:
        plVar16 = (long *)(**(code **)(*local_98 + 0x10))(local_98,0x20,8);
        if (plVar16 == (long *)0x0) {
          (**(code **)(*local_98 + 0xb8))();
        }
        unaff_x26 = local_98;
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), iVar11 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar13 == 0) {
          plVar16[2] = (long)plVar31;
          *(ushort *)(plVar16 + 3) = uVar28 | (ushort)(uVar30 << 8);
        }
        else {
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_018bfd38;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = unaff_x26;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar16[2] = (long)plVar31;
          *(ushort *)(plVar16 + 3) = uVar28 | (ushort)(uVar30 << 8);
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        *plVar16 = 0;
        plVar16[1] = (long)plVar31;
        if (plVar29 == (long *)0x0) {
LAB_018beef0:
          uVar15 = (ulong)(plVar29 < (long *)0x3 || ((ulong)plVar29 & (long)plVar29 - 1U) != 0) |
                   (long)plVar29 << 1;
          uVar23 = (ulong)((float)(local_78 + 1) / local_70);
          if (uVar23 <= uVar15) {
            uVar23 = uVar15;
          }
          FUN_018c3f80(&local_d0,uVar23);
          plVar29 = local_c8;
          if (((ulong)local_c8 & (long)local_c8 - 1U) == 0) {
            unaff_x28 = (long *)((long)local_c8 - 1U & (ulong)plVar31);
          }
          else if (plVar31 < local_c8) {
            unaff_x28 = plVar31;
          }
          else {
            uVar15 = 0;
            if (local_c8 != (long *)0x0) {
              uVar15 = (ulong)plVar31 / (ulong)local_c8;
            }
            unaff_x28 = (long *)((long)plVar31 - uVar15 * (long)local_c8);
          }
        }
        else if (local_70 * (float)plVar29 < (float)(local_78 + 1)) goto LAB_018beef0;
        plVar31 = *(long **)(local_d0 + (long)unaff_x28 * 8);
        if (plVar31 == (long *)0x0) {
          *plVar16 = (long)local_a0;
          *(long ***)(local_d0 + (long)unaff_x28 * 8) = &local_a0;
          local_a0 = plVar16;
          if (*plVar16 != 0) {
            plVar31 = *(long **)(*plVar16 + 8);
            if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
              plVar31 = (long *)((ulong)plVar31 & (long)plVar29 - 1U);
            }
            else if (plVar29 <= plVar31) {
              uVar15 = 0;
              if (plVar29 != (long *)0x0) {
                uVar15 = (ulong)plVar31 / (ulong)plVar29;
              }
              plVar31 = (long *)((long)plVar31 - uVar15 * (long)plVar29);
            }
            plVar31 = (long *)(local_d0 + (long)plVar31 * 8);
            goto LAB_018bee80;
          }
        }
        else {
          *plVar16 = *plVar31;
LAB_018bee80:
          *plVar31 = (long)plVar16;
        }
        local_78 = local_78 + 1;
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar2);
  }
  piVar1 = (int *)((long)puVar19 + (ulong)uVar4);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar14 = puVar2 + 1;
  uVar15 = (ulong)*puVar2;
  if (uVar15 != 0) {
    puVar2 = puVar14 + uVar15;
    plVar29 = (long *)(param_1 + 0x288);
    plVar31 = (long *)(param_1 + 0x2b8);
    do {
      piVar1 = (int *)((long)puVar14 + (ulong)*puVar14);
      puVar20 = (ushort *)((long)piVar1 - (long)*piVar1);
      if (*puVar20 < 5) {
        plVar16 = (long *)0x0;
LAB_018bfa50:
        lVar13 = 0;
        cVar5 = DAT_00000004;
      }
      else {
        if ((ulong)puVar20[2] == 0) {
          plVar16 = (long *)0x0;
        }
        else {
          plVar16 = *(long **)((long)piVar1 + (ulong)puVar20[2]);
        }
        if (*puVar20 < 7) goto LAB_018bfa50;
        lVar13 = 0;
        if ((ulong)puVar20[3] != 0) {
          puVar19 = (uint *)((long)piVar1 + (ulong)puVar20[3]);
          lVar13 = (long)puVar19 + (ulong)*puVar19;
        }
        cVar5 = *(char *)(lVar13 + 4);
      }
      if (cVar5 != '\0') {
        pcVar17 = (char *)(lVar13 + 5);
        do {
          cVar5 = *pcVar17;
          pcVar17 = pcVar17 + 1;
        } while (cVar5 != '\0');
      }
      local_118 = *(long **)(param_1 + 8);
      local_1f0 = &DAT_cbf29ce484222645;
      pcStack_1e8 = "";
      local_1e0 = 0;
      local_1d8 = (long *)0x0;
      local_1d0 = &DAT_cbf29ce484222645;
      pcStack_1c8 = "";
      local_1c0 = 0;
      local_1b8 = (long *)0x0;
      local_1b0 = &DAT_cbf29ce484222645;
      pcStack_1a8 = "";
      local_1a0 = 0;
      local_198 = (long *)0x0;
      local_190 = &DAT_cbf29ce484222645;
      pcStack_188 = "";
      local_180 = 0;
      local_178 = (long *)0x0;
      local_170 = &DAT_cbf29ce484222645;
      pcStack_168 = "";
      local_160 = 0;
      local_158 = (long *)0x0;
      local_150 = &DAT_cbf29ce484222645;
      pcStack_148 = "";
      local_140 = 0;
      local_128 = 0;
      local_120 = 0;
      local_138 = (long *)0x0;
      local_130 = 0;
      local_110 = 0x3fffffffffffffff;
      uStack_108 = 0;
      local_100 = 0;
      local_f8 = &DAT_cbf29ce484222645;
      pcStack_f0 = "";
      uStack_d8 = 0;
      uStack_d7 = 0;
      uStack_d6 = 0;
      uStack_d5 = 0;
      uStack_d4 = 0;
      local_e8 = 0;
      plStack_e0 = (long *)0x0;
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar15 == 0)) {
        lVar13 = 0;
      }
      else {
        puVar19 = (uint *)((long)piVar1 + uVar15);
        lVar13 = (long)puVar19 + (ulong)*puVar19;
      }
      local_1e0 = strlen((char *)(lVar13 + 4));
      bVar6 = *(byte *)(lVar13 + 4);
      local_1f0 = &DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        local_1f0 = &DAT_cbf29ce484222645;
        pbVar22 = (byte *)(lVar13 + 5);
        do {
          local_1f0 = (undefined1 *)(((ulong)local_1f0 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar6 != 0);
      }
      local_1d8 = (long *)0x0;
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
         (uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar15 == 0)) {
        lVar27 = 0;
      }
      else {
        puVar19 = (uint *)((long)piVar1 + uVar15);
        lVar27 = (long)puVar19 + (ulong)*puVar19;
      }
      pcStack_1e8 = (char *)(lVar13 + 4);
      local_1a0 = strlen((char *)(lVar27 + 4));
      bVar6 = *(byte *)(lVar27 + 4);
      local_1b0 = &DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        local_1b0 = &DAT_cbf29ce484222645;
        pbVar22 = (byte *)(lVar27 + 5);
        do {
          local_1b0 = (undefined1 *)(((ulong)local_1b0 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar6 != 0);
      }
      local_198 = (long *)0x0;
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar15 == 0)) {
        lVar13 = 0;
      }
      else {
        puVar19 = (uint *)((long)piVar1 + uVar15);
        lVar13 = (long)puVar19 + (ulong)*puVar19;
      }
      pcStack_1a8 = (char *)(lVar27 + 4);
      local_1c0 = strlen((char *)(lVar13 + 4));
      bVar6 = *(byte *)(lVar13 + 4);
      local_1d0 = &DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        local_1d0 = &DAT_cbf29ce484222645;
        pbVar22 = (byte *)(lVar13 + 5);
        do {
          local_1d0 = (undefined1 *)(((ulong)local_1d0 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar6 != 0);
      }
      local_1b8 = (long *)0x0;
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x15) ||
         (uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10], uVar15 == 0)) {
        lVar27 = 0;
      }
      else {
        puVar19 = (uint *)((long)piVar1 + uVar15);
        lVar27 = (long)puVar19 + (ulong)*puVar19;
      }
      pcStack_1c8 = (char *)(lVar13 + 4);
      local_180 = strlen((char *)(lVar27 + 4));
      bVar6 = *(byte *)(lVar27 + 4);
      local_190 = &DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        local_190 = &DAT_cbf29ce484222645;
        pbVar22 = (byte *)(lVar27 + 5);
        do {
          local_190 = (undefined1 *)(((ulong)local_190 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar6 != 0);
      }
      local_178 = (long *)0x0;
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x17) ||
         (uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xb], uVar15 == 0)) {
        lVar13 = 0;
      }
      else {
        puVar19 = (uint *)((long)piVar1 + uVar15);
        lVar13 = (long)puVar19 + (ulong)*puVar19;
      }
      pcStack_188 = (char *)(lVar27 + 4);
      local_140 = strlen((char *)(lVar13 + 4));
      bVar6 = *(byte *)(lVar13 + 4);
      local_150 = &DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        local_150 = &DAT_cbf29ce484222645;
        pbVar22 = (byte *)(lVar13 + 5);
        do {
          local_150 = (undefined1 *)(((ulong)local_150 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar6 != 0);
      }
      local_138 = (long *)0x0;
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x19) ||
         (uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xc], uVar15 == 0)) {
        lVar27 = 0;
      }
      else {
        puVar19 = (uint *)((long)piVar1 + uVar15);
        lVar27 = (long)puVar19 + (ulong)*puVar19;
      }
      pcVar17 = (char *)(lVar27 + 4);
      pcStack_148 = (char *)(lVar13 + 4);
      local_160 = strlen(pcVar17);
      bVar6 = *(byte *)(lVar27 + 4);
      local_170 = &DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        local_170 = &DAT_cbf29ce484222645;
        pbVar22 = (byte *)(lVar27 + 5);
        do {
          local_170 = (undefined1 *)(((ulong)local_170 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar6 != 0);
      }
      local_158 = (long *)0x0;
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1b) {
        uStack_d6 = false;
      }
      else {
        uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xd];
        uStack_d6 = false;
        if (uVar15 != 0) {
          uStack_d6 = *(char *)((long)piVar1 + uVar15) != '\0';
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1d) {
        uStack_d5 = false;
      }
      else {
        uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xe];
        uStack_d5 = false;
        if (uVar15 != 0) {
          uStack_d5 = *(char *)((long)piVar1 + uVar15) != '\0';
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1f) {
        uStack_d4 = false;
      }
      else {
        uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xf];
        uStack_d4 = false;
        if (uVar15 != 0) {
          uStack_d4 = *(char *)((long)piVar1 + uVar15) != '\0';
        }
      }
      lVar13 = (long)*piVar1;
      puVar19 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (10 - lVar13)));
      puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
      uVar4 = *puVar19;
      uVar15 = (ulong)uVar4;
      pcStack_168 = pcVar17;
      if (uVar15 != 0) {
        local_1f4 = puVar19[1];
        FUN_018c189c(&local_130,&local_1f4);
        if (uVar4 != 1) {
          local_1f4 = puVar19[2];
          puVar3 = puVar19 + 1 + uVar15;
          FUN_018c189c(&local_130,&local_1f4);
          if (puVar19 + 3 != puVar3) {
            local_1f4 = puVar19[3];
            FUN_018c189c(&local_130,&local_1f4);
            if (puVar19 + 4 != puVar3) {
              local_1f4 = puVar19[4];
              FUN_018c189c(&local_130,&local_1f4);
              if (puVar19 + 5 != puVar3) {
                lVar13 = uVar15 * 4 + -0x10;
                puVar19 = puVar19 + 5;
                do {
                  local_1f4 = *puVar19;
                  FUN_018c189c(&local_130,&local_1f4);
                  lVar13 = lVar13 + -4;
                  puVar19 = puVar19 + 1;
                } while (lVar13 != 0);
              }
            }
          }
        }
        lVar13 = (long)*piVar1;
        unaff_x26 = &local_130;
      }
      if ((*(ushort *)((long)piVar1 - lVar13) < 0xd) ||
         (uVar15 = (ulong)((ushort *)((long)piVar1 - lVar13))[6], uVar15 == 0)) {
        lVar13 = 0;
      }
      else {
        puVar19 = (uint *)((long)piVar1 + uVar15);
        lVar13 = (long)puVar19 + (ulong)*puVar19;
      }
      pcVar17 = (char *)(lVar13 + 4);
      local_e8 = strlen(pcVar17);
      bVar6 = *(byte *)(lVar13 + 4);
      local_f8 = &DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        local_f8 = &DAT_cbf29ce484222645;
        pbVar22 = (byte *)(lVar13 + 5);
        do {
          local_f8 = (undefined1 *)(((ulong)local_f8 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar6 != 0);
      }
      pcStack_f0 = pcVar17;
      if (plStack_e0 != (long *)0x0) {
        lVar13 = *plStack_e0;
        plStack_e0 = (long *)0;
        (**(code **)(lVar13 + 0x20))();
      }
      plStack_e0 = (long *)0x0;
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x11) {
        uStack_d8 = false;
      }
      else {
        uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8];
        uStack_d8 = false;
        if (uVar15 != 0) {
          uStack_d8 = *(char *)((long)piVar1 + uVar15) != '\0';
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) {
        uStack_d7 = false;
      }
      else {
        uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9];
        uStack_d7 = false;
        if (uVar15 != 0) {
          uStack_d7 = *(char *)((long)piVar1 + uVar15) != '\0';
        }
      }
      if (local_c8 != (long *)0x0) {
        uVar15 = (long)local_c8 - ((ulong)local_c8 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
        uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar15 < 2) {
          plVar21 = (long *)((long)local_c8 - 1U & (ulong)plVar16);
        }
        else {
          plVar21 = plVar16;
          if (local_c8 <= plVar16) {
            uVar23 = 0;
            if (local_c8 != (long *)0x0) {
              uVar23 = (ulong)plVar16 / (ulong)local_c8;
            }
            plVar21 = (long *)((long)plVar16 - uVar23 * (long)local_c8);
          }
        }
        plVar24 = *(long **)(local_d0 + (long)plVar21 * 8);
        if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
          if (uVar15 < 2) {
            do {
              if ((long *)plVar24[1] == plVar16) {
                if ((long *)plVar24[2] == plVar16) break;
              }
              else if ((long *)((ulong)plVar24[1] & (long)local_c8 - 1U) != plVar21) break;
              plVar24 = (long *)*plVar24;
            } while (plVar24 != (long *)0x0);
          }
          else {
            do {
              plVar25 = (long *)plVar24[1];
              if (plVar25 == plVar16) {
                if ((long *)plVar24[2] == plVar16) break;
              }
              else {
                if (local_c8 <= plVar25) {
                  uVar15 = 0;
                  if (local_c8 != (long *)0x0) {
                    uVar15 = (ulong)plVar25 / (ulong)local_c8;
                  }
                  plVar25 = (long *)((long)plVar25 - uVar15 * (long)local_c8);
                }
                if (plVar25 != plVar21) break;
              }
              plVar24 = (long *)*plVar24;
            } while (plVar24 != (long *)0x0);
          }
        }
      }
      plVar21 = *(long **)(param_1 + 0x290);
      if (plVar21 == (long *)0x0) {
LAB_018bf770:
        plVar24 = (long *)(**(code **)(**(long **)(param_1 + 0x2c0) + 0x10))
                                    (*(long **)(param_1 + 0x2c0),0x138,8);
        if (plVar24 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x2c0) + 0xb8))();
        }
        uVar26 = *(undefined8 *)(param_1 + 0x2c0);
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar11 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar8 = PTR_DAT_04379528;
          if (iVar11 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar13 == 0) {
          plVar24[2] = (long)plVar16;
          FUN_018c431c(plVar24 + 3,&local_1f0);
        }
        else {
          if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_018bfd38:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar26;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar24[2] = (long)plVar16;
          FUN_018c431c(plVar24 + 3,&local_1f0);
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        *plVar24 = 0;
        plVar24[1] = (long)plVar16;
        fVar32 = (float)(*(long *)(param_1 + 0x2e0) + 1);
        if ((plVar21 == (long *)0x0) || (*(float *)(param_1 + 0x2e8) * (float)plVar21 < fVar32)) {
          uVar15 = (ulong)(plVar21 < (long *)0x3 || ((ulong)plVar21 & (long)plVar21 - 1U) != 0) |
                   (long)plVar21 << 1;
          uVar23 = (ulong)(fVar32 / *(float *)(param_1 + 0x2e8));
          if (uVar23 <= uVar15) {
            uVar23 = uVar15;
          }
          if (uVar23 - 1 == 0) {
            uVar23 = 2;
          }
          else if ((uVar23 & uVar23 - 1) != 0) {
            uVar23 = std::__next_prime(uVar23);
          }
          uVar15 = *(ulong *)(param_1 + 0x290);
          if (uVar15 < uVar23) {
            uVar12 = uVar23;
LAB_018bfae4:
            FUN_018c45b0(plVar29,uVar12);
          }
          else if (uVar23 < uVar15) {
            uVar12 = (ulong)((float)*(ulong *)(param_1 + 0x2e0) / *(float *)(param_1 + 0x2e8));
            if ((uVar15 < 3) ||
               (uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
               uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333),
               1 < (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar12 = std::__next_prime(uVar12);
            }
            else if (1 < uVar12) {
              uVar12 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar12 - 1) & 0x3f);
            }
            if (uVar12 <= uVar23) {
              uVar12 = uVar23;
            }
            if (uVar12 < uVar15) goto LAB_018bfae4;
          }
          plVar21 = *(long **)(param_1 + 0x290);
          if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
            unaff_x26 = (long *)((long)plVar21 - 1U & (ulong)plVar16);
          }
          else if (plVar16 < plVar21) {
            unaff_x26 = plVar16;
          }
          else {
            uVar15 = 0;
            if (plVar21 != (long *)0x0) {
              uVar15 = (ulong)plVar16 / (ulong)plVar21;
            }
            unaff_x26 = (long *)((long)plVar16 - uVar15 * (long)plVar21);
          }
        }
        plVar16 = *(long **)(*plVar29 + (long)unaff_x26 * 8);
        if (plVar16 == (long *)0x0) {
          *plVar24 = *plVar31;
          *plVar31 = (long)plVar24;
          *(long **)(*plVar29 + (long)unaff_x26 * 8) = plVar31;
          if (*plVar24 != 0) {
            plVar16 = *(long **)(*plVar24 + 8);
            if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
              plVar16 = (long *)((ulong)plVar16 & (long)plVar21 - 1U);
            }
            else if (plVar21 <= plVar16) {
              uVar15 = 0;
              if (plVar21 != (long *)0x0) {
                uVar15 = (ulong)plVar16 / (ulong)plVar21;
              }
              plVar16 = (long *)((long)plVar16 - uVar15 * (long)plVar21);
            }
            plVar16 = (long *)(*plVar29 + (long)plVar16 * 8);
            goto LAB_018bf880;
          }
        }
        else {
          *plVar24 = *plVar16;
LAB_018bf880:
          *plVar16 = (long)plVar24;
        }
        *(long *)(param_1 + 0x2e0) = *(long *)(param_1 + 0x2e0) + 1;
        if (plStack_e0 != (long *)0x0) {
          (**(code **)(*plStack_e0 + 0x20))();
        }
      }
      else {
        uVar15 = (long)plVar21 - ((ulong)plVar21 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
        uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar15 < 2) {
          unaff_x26 = (long *)((long)plVar21 - 1U & (ulong)plVar16);
        }
        else {
          unaff_x26 = plVar16;
          if (plVar21 <= plVar16) {
            uVar23 = 0;
            if (plVar21 != (long *)0x0) {
              uVar23 = (ulong)plVar16 / (ulong)plVar21;
            }
            unaff_x26 = (long *)((long)plVar16 - uVar23 * (long)plVar21);
          }
        }
        plVar24 = *(long **)(*plVar29 + (long)unaff_x26 * 8);
        if (plVar24 == (long *)0x0) goto LAB_018bf770;
        if (uVar15 < 2) {
          do {
            plVar24 = (long *)*plVar24;
            if ((plVar24 == (long *)0x0) ||
               ((long *)plVar24[1] != plVar16 &&
                (long *)((ulong)plVar24[1] & (long)plVar21 - 1U) != unaff_x26)) goto LAB_018bf770;
          } while ((long *)plVar24[2] != plVar16);
        }
        else {
          do {
            plVar24 = (long *)*plVar24;
            if (plVar24 == (long *)0x0) goto LAB_018bf770;
            plVar25 = (long *)plVar24[1];
            if (plVar25 != plVar16) {
              if (plVar21 <= plVar25) {
                uVar15 = 0;
                if (plVar21 != (long *)0x0) {
                  uVar15 = (ulong)plVar25 / (ulong)plVar21;
                }
                plVar25 = (long *)((long)plVar25 - uVar15 * (long)plVar21);
              }
              if (plVar25 != unaff_x26) goto LAB_018bf770;
            }
          } while ((long *)plVar24[2] != plVar16);
        }
      }
      plVar16 = local_118;
      if (local_130 != 0) {
        local_128 = local_130;
        uVar15 = (**(code **)(*local_118 + 0xc0))(local_118);
        unaff_x26 = plVar16;
        if ((uVar15 & 1) != 0) {
          lVar13 = tpidr_el0;
          if (*(char *)(lVar13 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar13 + 0x38d488) = 1;
            *(undefined8 *)(lVar13 + 0x38d478) = 0;
            *(undefined8 *)(lVar13 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar13 + 0x38d480)) {
            FUN_02bcc824(plVar16,local_130,local_120 - local_130,4);
            goto joined_r0x018bf934;
          }
        }
        (**(code **)(*plVar16 + 0x18))(plVar16,local_130,local_120 - local_130,4);
      }
joined_r0x018bf934:
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
      if (local_158 != (long *)0x0) {
        (**(code **)(*local_158 + 0x20))();
      }
      if (local_178 != (long *)0x0) {
        (**(code **)(*local_178 + 0x20))();
      }
      if (local_198 != (long *)0x0) {
        (**(code **)(*local_198 + 0x20))();
      }
      if (local_1b8 != (long *)0x0) {
        (**(code **)(*local_1b8 + 0x20))();
      }
      if (local_1d8 != (long *)0x0) {
        (**(code **)(*local_1d8 + 0x20))();
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar2);
  }
  FUN_018c27dc(&local_d0);
  return;
}


