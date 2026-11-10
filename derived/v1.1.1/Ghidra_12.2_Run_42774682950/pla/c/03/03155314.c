/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03155314; name: FUN_03155314
 */


/* WARNING: Removing unreachable block (ram,0x03156d64) */

undefined8
FUN_03155314(long param_1,undefined8 param_2,uint param_3,long param_4,long param_5,
            undefined8 param_6,undefined8 *param_7)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *puVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  ulong uVar21;
  int *piVar22;
  int iVar23;
  undefined8 uVar24;
  long *plVar25;
  uint *puVar26;
  int iVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  int *piVar35;
  uint uVar36;
  int iVar37;
  undefined8 *puVar38;
  uint uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  uint uVar46;
  ulong uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar55;
  float fVar56;
  undefined1 auVar54 [16];
  float fVar57;
  float fVar58;
  float fVar60;
  float fVar61;
  undefined1 auVar59 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined8 uVar74;
  uint local_150;
  uint local_f0;
  uint uStack_e4;
  uint *local_e0;
  undefined8 local_d8;
  uint *local_d0;
  float local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80 [2];
  float local_78 [2];
  ulong in_stack_ffffffffffffff90;
  uint local_68;
  byte local_64 [4];
  
  uVar16 = (uint)param_2;
  if ((*(byte *)(*(long *)(param_1 + 0x18) + (long)(int)uVar16 * 0x90 + 0x80) >> 4 & 1) == 0) {
    lVar44 = (long)(int)uVar16;
    uVar16 = *(uint *)(param_4 + 4);
    lVar42 = lVar44 * 0x90 + 0x80;
    lVar29 = lVar44 << 0x20;
    lVar43 = lVar44;
    uVar13 = 0;
    local_c0 = param_2;
    local_b0 = param_1;
    uStack_a8 = param_6;
    uStack_b8._4_4_ = param_3;
    while( true ) {
      uVar36 = uVar13;
      lVar40 = lVar43;
      lVar41 = lVar29;
      if (lVar40 <= (long)(ulong)(uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU))) break;
      lVar29 = *(long *)(local_b0 + 0x18) + lVar42;
      uVar74 = *(undefined8 *)(lVar29 + -0x110);
      if (((((float)((ulong)*(undefined8 *)(lVar29 + -0x108) >> 0x20) == *(float *)(lVar29 + -0xf4)
             && ((float)*(undefined8 *)(lVar29 + -0x108) == *(float *)(lVar29 + -0xf8) &&
                ((float)((ulong)uVar74 >> 0x20) == *(float *)(lVar29 + -0xfc) &&
                (float)uVar74 == *(float *)(lVar29 + -0x100)))) ||
           ((*(byte *)(lVar29 + -0x90) >> 4 & 1) != 0)) ||
          (auVar54 = *(undefined1 (*) [16])(lVar29 + -0x70),
          (float)((ulong)*(undefined8 *)(lVar29 + -0x78) >> 0x20) == auVar54._12_4_ &&
          ((float)*(undefined8 *)(lVar29 + -0x78) == auVar54._8_4_ &&
          ((float)((ulong)*(undefined8 *)(lVar29 + -0x80) >> 0x20) == auVar54._4_4_ &&
          (float)*(undefined8 *)(lVar29 + -0x80) == auVar54._0_4_)))) ||
         ((*(byte *)(*(long *)(local_b0 + 0x18) + lVar42) >> 4 & 1) != 0)) break;
      uVar13 = FUN_03159058((undefined8 *)(lVar29 + -0x110),param_5,&local_90);
      if (uVar13 == 0xffffffff) break;
      local_78[0] = (float)local_90;
      in_stack_ffffffffffffff90 = (ulong)uVar13;
      if ((uStack_b8._4_4_ & 1) == 0) {
        iVar14 = FUN_03157460(param_5,local_78 + 2,local_78,uStack_a8);
        if (iVar14 == 0) goto LAB_03155450;
LAB_031554a0:
        bVar12 = false;
      }
      else {
        iVar14 = FUN_03157730(param_5,local_78 + 2,local_78,uStack_a8);
        if (iVar14 != 0) goto LAB_031554a0;
LAB_03155450:
        uVar15 = FUN_03159058(lVar29 + -0x80,param_5,local_80);
        bVar12 = uVar13 == uVar15;
      }
      lVar42 = lVar42 + -0x90;
      lVar29 = lVar41 + -0x100000000;
      lVar43 = lVar40 + -1;
      uVar13 = uVar36 + 1;
      if (!bVar12) break;
    }
    local_c4 = (float)((int)local_c0 - uVar36);
    lVar43 = lVar44 * 0x90;
    lVar29 = lVar44 << 0x20;
    local_d0 = (uint *)CONCAT44(local_d0._4_4_,uVar36 + 1);
    iVar14 = 0;
    do {
      iVar37 = iVar14;
      lVar44 = lVar44 + 1;
      lVar29 = lVar29 + 0x100000000;
      if ((((*(int *)(local_b0 + 0x20) <= lVar44) ||
           (puVar38 = (undefined8 *)(*(long *)(local_b0 + 0x18) + lVar43),
           (float)((ulong)puVar38[1] >> 0x20) == *(float *)((long)puVar38 + 0x1c) &&
           ((float)puVar38[1] == *(float *)(puVar38 + 3) &&
           ((float)((ulong)*puVar38 >> 0x20) == *(float *)((long)puVar38 + 0x14) &&
           (float)*puVar38 == *(float *)(puVar38 + 2))))) ||
          (((*(byte *)(puVar38 + 0x10) >> 4 & 1) != 0 ||
           ((auVar54 = *(undefined1 (*) [16])(puVar38 + 0x14),
            (float)((ulong)puVar38[0x13] >> 0x20) == auVar54._12_4_ &&
            ((float)puVar38[0x13] == auVar54._8_4_ &&
            ((float)((ulong)puVar38[0x12] >> 0x20) == auVar54._4_4_ &&
            (float)puVar38[0x12] == auVar54._0_4_)) || ((*(byte *)(puVar38 + 0x22) >> 4 & 1) != 0)))
           ))) || (uVar16 = FUN_03159058(puVar38,param_5,&local_90), uVar16 == 0xffffffff)) break;
      local_78[0] = (float)local_90;
      in_stack_ffffffffffffff90 = (ulong)uVar16;
      if ((uStack_b8._4_4_ & 1) == 0) {
        iVar14 = FUN_03157460(param_5,local_78 + 2,local_78,uStack_a8);
        if (iVar14 == 0) goto LAB_031555d0;
LAB_03155620:
        bVar12 = false;
      }
      else {
        iVar14 = FUN_03157730(param_5,local_78 + 2,local_78,uStack_a8);
        if (iVar14 != 0) goto LAB_03155620;
LAB_031555d0:
        uVar13 = FUN_03159058(puVar38 + 0x12,param_5,local_80);
        bVar12 = uVar16 == uVar13;
      }
      lVar43 = lVar43 + 0x90;
      iVar14 = iVar37 + -1;
    } while (bVar12);
    uVar13 = (uint)local_c0;
    uVar16 = ~uVar13;
    if (*(int *)(local_b0 + 0x20) + uVar16 + iVar37 == 0) {
      return 1;
    }
    lVar42 = *(long *)(local_b0 + 0x18);
    lVar29 = lVar29 >> 0x20;
    uVar15 = *(uint *)(lVar42 + lVar29 * 0x90 + 0x70);
    uVar30 = (ulong)uVar15 & 0x3fffff;
    lVar44 = *(long *)(*(long *)(*(long *)(param_5 + 0x38) + (ulong)(uVar15 >> 0x16) * 0xf0) + 0x20)
    ;
    iVar14 = *(int *)(*(long *)(lVar44 + 0x168) + uVar30 * 4);
    lVar43 = (long)iVar14;
    if (iVar14 < 0) {
      if ((*(int *)(lVar44 + 0x108) != 0) &&
         ((*(byte *)(*(long *)(lVar44 + 0x100) + uVar30) & 1) != 0)) {
        return 2;
      }
      if (*(short *)(lVar42 + lVar29 * 0x90 + 0x74) != -1) {
        return 2;
      }
    }
    else {
      do {
        lVar43 = lVar43 + 1;
        if (*(int *)(lVar44 + 0x170) <= lVar43) break;
      } while (*(int *)(*(long *)(lVar44 + 0x168) + lVar43 * 4) == (int)uVar30);
      iVar27 = (int)*(short *)(lVar42 + lVar29 * 0x90 + 0x74);
      if (iVar27 == -1) {
        return 2;
      }
      uVar32 = iVar14 + iVar27;
      if ((int)lVar43 <= (int)uVar32) {
        return 2;
      }
      uVar15 = uVar32 | uVar15 & 0xffc00000;
    }
    if (uVar15 == 0xffffffff) {
      return 2;
    }
    local_e0 = (uint *)(lVar41 >> 0x20);
    local_d8 = FUN_03159058(lVar42 + (long)local_e0 * 0x90,param_5,local_78 + 2);
    uStack_e4 = (uint)local_d8;
    if (uStack_e4 == 0xffffffff) {
      return 2;
    }
    fVar49 = (float)in_stack_ffffffffffffff90;
    uVar30 = in_stack_ffffffffffffff90 & 0xffffffff;
    lVar29 = *(long *)(*(long *)(*(long *)(param_5 + 0x38) + (ulong)((uint)fVar49 >> 0x16) * 0xf0) +
                      0x20);
    iVar14 = *(int *)(lVar29 + 0x20);
    uVar31 = in_stack_ffffffffffffff90 & 0x3fffff;
    iVar27 = (int)uVar31;
    local_78[0] = fVar49;
    if ((uStack_b8._4_4_ & 1) == 0) {
      if (iVar27 < iVar14) {
        if (*(int *)(lVar29 + 0x98) != 0) {
          uVar32 = *(uint *)(*(long *)(lVar29 + 0x90) + uVar31 * 4);
          if (uVar32 == 0xffffffff) {
            puVar26 = (uint *)(*(long *)(lVar29 + 0x18) + uVar31 * 0x10);
            goto LAB_03155828;
          }
          uVar31 = (ulong)uVar32;
        }
        puVar26 = (uint *)(*(long *)(lVar29 + 0xb0) + (long)(int)uVar31 * 0x10);
        uVar13 = (uint)local_c0;
      }
      else {
        puVar26 = (uint *)(*(long *)(lVar29 + 0xd0) + (long)(iVar27 - iVar14) * 0x10);
      }
LAB_03155828:
      uVar32 = uStack_e4 & 0x3fffff;
      if (uVar32 == *puVar26) {
        uVar32 = uVar32 + (int)(short)puVar26[2];
      }
      uVar46 = 0;
      local_90 = CONCAT44(local_90._4_4_,uVar32 - 1 | uStack_e4 & 0xffc00000);
      while ((uint)uVar30 != uVar15) {
        iVar14 = FUN_03157730(param_5,&local_90,local_78,uStack_a8);
        if (iVar14 != 0) {
          return 2;
        }
        uVar46 = uVar46 + 1;
        uVar30 = (ulong)(uint)local_78[0];
        if (local_78[0] == fVar49) {
          return 2;
        }
      }
    }
    else {
      if (iVar27 < iVar14) {
        if (*(int *)(lVar29 + 0x98) != 0) {
          uVar32 = *(uint *)(*(long *)(lVar29 + 0x90) + uVar31 * 4);
          if (uVar32 == 0xffffffff) {
            puVar26 = (uint *)(*(long *)(lVar29 + 0x18) + uVar31 * 0x10);
            goto LAB_031557a8;
          }
          uVar31 = (ulong)uVar32;
        }
        puVar26 = (uint *)(*(long *)(lVar29 + 0xb0) + (long)(int)uVar31 * 0x10);
      }
      else {
        puVar26 = (uint *)(*(long *)(lVar29 + 0xd0) + (long)(iVar27 - iVar14) * 0x10);
      }
LAB_031557a8:
      uVar46 = 0;
      uVar32 = *puVar26;
      if ((uStack_e4 & 0x3fffff) != ((int)(short)puVar26[2] + uVar32) - 1) {
        uVar32 = (uStack_e4 & 0x3fffff) + 1;
      }
      local_90 = CONCAT44(local_90._4_4_,uVar32 | uStack_e4 & 0xffc00000);
      while ((uint)uVar30 != uVar15) {
        iVar14 = FUN_03157460(param_5,&local_90,local_78,uStack_a8);
        if (iVar14 != 0) {
          return 2;
        }
        uVar46 = uVar46 + 1;
        uVar30 = (ulong)(uint)local_78[0];
        if (local_78[0] == fVar49) {
          return 2;
        }
      }
    }
    puVar11 = PTR_PTR_0434a080;
    uVar15 = (uint)local_d8;
    uStack_e4 = uStack_e4 & 0xffc00000;
    lVar42 = lVar42 + (long)local_e0 * 0x90;
    uVar7 = *(undefined8 *)(lVar42 + 0x28);
    uVar74 = *(undefined8 *)(lVar42 + 0x20);
    iVar14 = (uVar36 - iVar37) + 1;
    iVar27 = (uVar36 - iVar37) + 1;
    if ((int)uVar46 < iVar27) {
      iVar2 = (uVar36 - uVar46) - iVar37;
      puVar26 = (uint *)(local_b0 + 0x24);
      uVar15 = *puVar26;
      iVar23 = *(int *)(local_b0 + 0x20);
      iVar27 = uVar46 + iVar23;
      uVar16 = ~uVar36 + iVar27 + iVar37;
      iVar27 = (iVar27 - uVar13) + iVar37 + -1;
      if ((int)(uVar15 & 0x3fffffff) < (int)uVar16) {
        uVar24 = *(undefined8 *)(local_b0 + 0x18);
        if (0x3fffffff < (int)uVar16) {
          FUN_032bd0a8(uVar16);
          uVar15 = *puVar26;
        }
        uVar13 = (uVar15 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar13) {
          uVar13 = 0x3fffffff;
        }
        uVar15 = uVar16;
        if ((int)uVar16 <= (int)uVar13) {
          uVar15 = uVar13;
        }
        lVar29 = FUN_032bd1d4(puVar11,uVar15,0x90,uVar24,iVar23);
        *(long *)(local_b0 + 0x18) = lVar29;
      }
      else {
        lVar29 = *(long *)(local_b0 + 0x18);
      }
      iVar23 = iVar2 + 1;
      if (0 < iVar27) {
        if (iVar23 < 1) {
          if ((int)local_d0 != uVar46 + iVar37) {
            lVar29 = lVar29 + (long)local_e0 * 0x90;
            FUN_032d57d0(lVar29,lVar29 + (long)iVar23 * 0x90,(long)iVar27 * 0x90);
          }
        }
        else {
          lVar43 = 0;
          puVar38 = (undefined8 *)(lVar29 + (long)(int)local_c4 * 0x90);
          do {
            lVar43 = (lVar43 << 0x20) + 0x800000000 >> 0x20;
            *puVar38 = puVar38[(long)iVar14 * 0x12 + (ulong)uVar46 * -0x12];
            puVar38 = puVar38 + 1;
          } while (lVar43 < (long)iVar27 * 0x90);
        }
      }
      uVar13 = *(uint *)(local_b0 + 0x34);
      iVar14 = *(int *)(local_b0 + 0x38);
      iVar37 = *(int *)(local_b0 + 0x30);
      iVar27 = iVar14 * (int)local_c4;
      iVar23 = iVar14 * iVar23;
      *(uint *)(local_b0 + 0x20) = uVar16;
      uVar16 = iVar37 - iVar23;
      uVar15 = (iVar37 - iVar27) - iVar23;
      uVar30 = (ulong)uVar15;
      if ((int)(uVar13 & 0x3fffffff) < (int)uVar16) {
        puVar26 = *(uint **)(local_b0 + 0x28);
        if (0x3fffffff < (int)uVar16) {
          local_e0 = *(uint **)(local_b0 + 0x28);
          local_d0 = (uint *)(local_b0 + 0x34);
          FUN_032bd0a8(uVar16);
          uVar13 = *local_d0;
          puVar26 = local_e0;
        }
        uVar13 = (uVar13 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar13) {
          uVar13 = 0x3fffffff;
        }
        uVar32 = uVar16;
        if ((int)uVar16 <= (int)uVar13) {
          uVar32 = uVar13;
        }
        lVar29 = FUN_032bd1d4(puVar11,uVar32,4,puVar26,iVar37);
        *(long *)(local_b0 + 0x28) = lVar29;
      }
      else {
        lVar29 = *(long *)(local_b0 + 0x28);
      }
      if (0 < (int)uVar15) {
        puVar17 = (undefined4 *)(lVar29 + (long)iVar27 * 4);
        puVar20 = puVar17 + iVar23;
        if (iVar23 < 1) {
          if (iVar23 != 0) goto LAB_03155afc;
        }
        else {
          *puVar17 = *puVar20;
          if ((((1 < (int)uVar15) && (puVar17[1] = puVar20[1], 2 < (int)uVar15)) &&
              (puVar17[2] = puVar20[2], 3 < (int)uVar15)) &&
             ((puVar17[3] = puVar20[3], 4 < (int)uVar15 &&
              (puVar17[4] = puVar20[4], 5 < (int)uVar15)))) {
            lVar29 = 0x14;
            puVar20 = puVar17 + 5;
            do {
              lVar29 = (lVar29 << 0x20) + 0x400000000 >> 0x20;
              *puVar20 = puVar20[iVar14 * (iVar2 + 1)];
              puVar20 = puVar20 + 1;
            } while (lVar29 < (long)(-(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar30 << 2));
          }
        }
      }
LAB_03155b08:
      *(uint *)(local_b0 + 0x30) = uVar16;
      uVar15 = (uint)local_d8;
    }
    else if (iVar27 < (int)uVar46) {
      iVar27 = uVar46 + iVar37;
      iVar23 = ~uVar36 + iVar27;
      puVar26 = (uint *)(local_b0 + 0x24);
      uVar15 = *puVar26;
      iVar2 = *(int *)(local_b0 + 0x20);
      uVar13 = ~uVar36 + uVar46 + iVar2 + iVar37;
      iVar37 = uVar16 + iVar2 + uVar36 + 1;
      if ((int)(uVar15 & 0x3fffffff) < (int)uVar13) {
        uVar24 = *(undefined8 *)(local_b0 + 0x18);
        if (0x3fffffff < (int)uVar13) {
          FUN_032bd0a8(uVar13);
          uVar15 = *puVar26;
        }
        fVar52 = local_c4;
        uVar16 = (uVar15 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar16) {
          uVar16 = 0x3fffffff;
        }
        uVar15 = uVar13;
        if ((int)uVar13 <= (int)uVar16) {
          uVar15 = uVar16;
        }
        lVar29 = FUN_032bd1d4(puVar11,uVar15,0x90,uVar24,iVar2);
        *(long *)(local_b0 + 0x18) = lVar29;
      }
      else {
        lVar29 = *(long *)(local_b0 + 0x18);
        fVar52 = local_c4;
      }
      if (iVar23 < 0) {
        if (((int)local_d0 != iVar27 && iVar37 != 0) && (0 < iVar37)) {
          lVar43 = 0;
          puVar38 = (undefined8 *)(lVar29 + (long)(int)fVar52 * 0x90);
          do {
            lVar43 = (lVar43 << 0x20) + 0x800000000 >> 0x20;
            puVar38[(long)iVar14 * -0x12 + (ulong)uVar46 * 0x12] = *puVar38;
            puVar38 = puVar38 + 1;
          } while (lVar43 < (long)iVar37 * 0x90);
        }
      }
      else if ((int)local_d0 != iVar27 && iVar37 != 0) {
        lVar29 = lVar29 + (long)local_e0 * 0x90;
        FUN_032d57d0(lVar29 + (long)iVar23 * 0x90,lVar29,(long)iVar37 * 0x90);
      }
      uVar15 = *(uint *)(local_b0 + 0x34);
      iVar14 = *(int *)(local_b0 + 0x38);
      iVar37 = *(int *)(local_b0 + 0x30);
      iVar23 = iVar14 * iVar23;
      *(uint *)(local_b0 + 0x20) = uVar13;
      uVar16 = iVar37 + iVar23;
      uVar13 = iVar37 - iVar14 * (int)fVar52;
      uVar30 = (ulong)uVar13;
      if ((int)(uVar15 & 0x3fffffff) < (int)uVar16) {
        puVar26 = *(uint **)(local_b0 + 0x28);
        if (0x3fffffff < (int)uVar16) {
          local_e0 = (uint *)(local_b0 + 0x34);
          local_d0 = *(uint **)(local_b0 + 0x28);
          FUN_032bd0a8(uVar16);
          uVar15 = *local_e0;
          puVar26 = local_d0;
        }
        uVar15 = (uVar15 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar15) {
          uVar15 = 0x3fffffff;
        }
        uVar32 = uVar16;
        if ((int)uVar16 <= (int)uVar15) {
          uVar32 = uVar15;
        }
        lVar29 = FUN_032bd1d4(puVar11,uVar32,4,puVar26,iVar37);
        *(long *)(local_b0 + 0x28) = lVar29;
      }
      else {
        lVar29 = *(long *)(local_b0 + 0x28);
      }
      puVar20 = (undefined4 *)(lVar29 + (long)(iVar14 * (int)fVar52) * 4);
      puVar17 = puVar20 + iVar23;
      if (iVar23 < 0) {
        if ((((iVar23 != 0 && uVar13 != 0) && (0 < (int)uVar13)) &&
            (*puVar17 = *puVar20, 1 < (int)uVar13)) &&
           (((puVar17[1] = puVar20[1], 2 < (int)uVar13 && (puVar17[2] = puVar20[2], 3 < (int)uVar13)
             ) && ((puVar17[3] = puVar20[3], 4 < (int)uVar13 &&
                   (puVar17[4] = puVar20[4], 5 < (int)uVar13)))))) {
          puVar20 = puVar20 + 5;
          lVar29 = 0x14;
          do {
            lVar29 = (lVar29 << 0x20) + 0x400000000 >> 0x20;
            puVar20[(int)(iVar14 * (~uVar36 + iVar27))] = *puVar20;
            puVar20 = puVar20 + 1;
          } while (lVar29 < (long)(-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar30 << 2));
        }
      }
      else if (iVar23 != 0 && uVar13 != 0) {
LAB_03155afc:
        FUN_032d57d0(puVar17,puVar20,-(uVar30 >> 0x1f) & 0xfffffffc00000000 | uVar30 << 2);
      }
      goto LAB_03155b08;
    }
    uVar24 = uStack_a8;
    fVar52 = local_c4;
    uVar30 = in_stack_ffffffffffffff90 & 0xffffffff;
    uStack_98 = CONCAT44(uStack_98._4_4_,(uint)fVar49 >> 0x16);
    lVar29 = *(long *)(*(long *)(*(long *)(param_5 + 0x38) + (ulong)((uint)fVar49 >> 0x16) * 0xf0) +
                      0x20);
    local_a0._4_4_ =
         CONCAT31(local_a0._5_3_,*(undefined1 *)(*(long *)(lVar29 + 0x68) + 0x80)) & 0xffffff01;
    iVar14 = *(int *)(lVar29 + 0x20);
    uVar31 = in_stack_ffffffffffffff90 & 0x3fffff;
    iVar37 = (int)uVar31;
    if ((uStack_b8._4_4_ & 1) == 0) {
      if (iVar37 < iVar14) {
        if (*(int *)(lVar29 + 0x98) != 0) {
          uVar16 = *(uint *)(*(long *)(lVar29 + 0x90) + uVar31 * 4);
          if (uVar16 == 0xffffffff) {
            puVar26 = (uint *)(*(long *)(lVar29 + 0x18) + uVar31 * 0x10);
            goto LAB_03155c54;
          }
          uVar31 = (ulong)uVar16;
        }
        puVar26 = (uint *)(*(long *)(lVar29 + 0xb0) + (long)(int)uVar31 * 0x10);
        uVar15 = (uint)local_d8;
      }
      else {
        puVar26 = (uint *)(*(long *)(lVar29 + 0xd0) + (long)(iVar37 - iVar14) * 0x10);
      }
LAB_03155c54:
      uVar15 = uVar15 & 0x3fffff;
      if (uVar15 == *puVar26) {
        uVar15 = uVar15 + (int)(short)puVar26[2];
      }
      uVar16 = uVar15 - 1;
      goto LAB_03155bac;
    }
    if (iVar37 < iVar14) {
      if (*(int *)(lVar29 + 0x98) != 0) {
        uVar16 = *(uint *)(*(long *)(lVar29 + 0x90) + uVar31 * 4);
        if (uVar16 == 0xffffffff) {
          puVar26 = (uint *)(*(long *)(lVar29 + 0x18) + uVar31 * 0x10);
          goto LAB_03155b90;
        }
        uVar31 = (ulong)uVar16;
      }
      puVar26 = (uint *)(*(long *)(lVar29 + 0xb0) + (long)(int)uVar31 * 0x10);
    }
    else {
      puVar26 = (uint *)(*(long *)(lVar29 + 0xd0) + (long)(iVar37 - iVar14) * 0x10);
    }
LAB_03155b90:
    uVar16 = *puVar26;
    if ((uVar15 & 0x3fffff) != ((int)(short)puVar26[2] + uVar16) - 1) {
      uVar16 = (uVar15 & 0x3fffff) + 1;
    }
LAB_03155bac:
    local_78[0] = (float)(uVar16 | uStack_e4);
    if (uVar46 != 0) {
      local_90 = uVar74;
      uStack_88 = uVar7;
      local_80[0] = fVar49;
      if ((uStack_b8._4_4_ & 1) == 0) {
        iVar14 = 0;
        while( true ) {
          local_a0._0_4_ = (float)uVar30;
          FUN_03154264(local_b0,param_5,uVar24,local_78[0],&local_90,&local_a0,&uStack_98,
                       (long)&local_a0 + 4,(int)fVar52 + iVar14);
          FUN_03157730(param_5,local_78,local_80,uVar24);
          if (uVar46 - 1 == iVar14) break;
          uVar30 = (ulong)(uint)local_80[0];
          iVar14 = iVar14 + 1;
        }
      }
      else {
        iVar14 = 0;
        while( true ) {
          local_a0._0_4_ = (float)uVar30;
          FUN_03154264(local_b0,param_5,uVar24,local_78[0],&local_90,&local_a0,&uStack_98,
                       (long)&local_a0 + 4,(int)fVar52 + iVar14);
          FUN_03157460(param_5,local_78,local_80,uVar24);
          if (uVar46 - 1 == iVar14) break;
          uVar30 = (ulong)(uint)local_80[0];
          iVar14 = iVar14 + 1;
        }
      }
    }
    if ((uint)local_c0 != uVar36) {
      *(undefined2 *)(*(long *)(local_b0 + 0x18) + 0x7c) = 0;
      *(undefined2 *)(*(long *)(local_b0 + 0x18) + 0x7e) = 0;
      if ((int)lVar40 != 1) {
        lVar43 = (ulong)(uint)fVar52 - 1;
        lVar29 = 0x10e;
        do {
          *(undefined2 *)(*(long *)(local_b0 + 0x18) + lVar29 + -2) = 0;
          *(undefined2 *)(*(long *)(local_b0 + 0x18) + lVar29) = 0;
          lVar43 = lVar43 + -1;
          lVar29 = lVar29 + 0x90;
        } while (lVar43 != 0);
        return 0;
      }
    }
    return 0;
  }
  puVar18 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar16 * 0x90);
  uStack_a8 = puVar18[5];
  uVar74 = *param_7;
  local_b0 = puVar18[4];
  puVar38 = puVar18;
  if ((param_3 & 1) == 0) {
    puVar38 = puVar18 + 2;
  }
  uVar30 = puVar38[1];
  uVar7 = *puVar38;
  uStack_b8 = uVar30 & 0xffffffff;
  local_c0 = uVar7;
  uVar31 = FUN_03159058(puVar18,param_5,&local_68);
  uVar47 = uVar31 >> 0x16 & 0x3ff;
  lVar29 = *(long *)(param_5 + 0x38);
  lVar43 = *(long *)(*(long *)(lVar29 + uVar47 * 0xf0) + 0x20);
  local_150 = (uint)uVar31 & 0x3fffff;
  uVar45 = (ulong)local_150;
  uVar13 = local_150 - *(int *)(lVar43 + 0x30);
  if ((int)local_150 < *(int *)(lVar43 + 0x30)) {
    uVar13 = local_150;
    if ((*(int *)(lVar43 + 0x78) == 0) ||
       (uVar13 = *(uint *)(*(long *)(lVar43 + 0x70) + (ulong)local_150 * 4), uVar13 != 0xffffffff))
    {
      lVar42 = *(long *)(lVar43 + 0xc0);
      goto LAB_03157108;
    }
    lVar42 = *(long *)(lVar43 + 0x28) + uVar45 * 0x14;
  }
  else {
    lVar42 = *(long *)(lVar43 + 0xe0);
LAB_03157108:
    lVar42 = lVar42 + (long)(int)uVar13 * 0x14;
  }
  uVar13 = *(uint *)(lVar42 + 8);
  if ((*(byte *)(lVar42 + 0x10) >> 6 & 1) == 0) {
    if (uVar13 == 0xffffffff) {
      return 2;
    }
    uVar13 = uVar13 & 0x3fffff | *(int *)(lVar43 + 0x17c) << 0x16;
  }
  if (uVar13 == 0xffffffff) {
    return 2;
  }
  uVar36 = uVar13 & 0x3fffff;
  uVar34 = (ulong)uVar36;
  lVar43 = *(long *)(lVar29 + (ulong)(uVar13 >> 0x16) * 0xf0);
  lVar42 = *(long *)(lVar43 + 0x20);
  if ((int)uVar36 < *(int *)(lVar42 + 0x30)) {
    if ((*(int *)(lVar42 + 0x78) == 0) ||
       (uVar36 = *(uint *)(*(long *)(lVar42 + 0x70) + uVar34 * 4), uVar36 != 0xffffffff)) {
      piVar35 = (int *)(*(long *)(lVar42 + 0xc0) + (long)(int)uVar36 * 0x14);
    }
    else {
      piVar35 = (int *)(*(long *)(lVar42 + 0x28) + uVar34 * 0x14);
    }
  }
  else {
    piVar35 = (int *)(*(long *)(lVar42 + 0xe0) +
                     (long)(int)(uVar36 - *(int *)(lVar42 + 0x30)) * 0x14);
  }
  iVar27 = *(int *)(lVar42 + 0x40);
  iVar14 = *piVar35;
  iVar37 = piVar35[1];
  plVar25 = (long *)(lVar42 + 0x38);
  if (iVar27 <= iVar14) {
    plVar25 = (long *)(lVar42 + 0xf0);
  }
  iVar23 = 0;
  if (iVar27 <= iVar14) {
    iVar23 = iVar27;
  }
  plVar1 = (long *)(lVar42 + 0x38);
  if (iVar27 <= iVar37) {
    plVar1 = (long *)(lVar42 + 0xf0);
  }
  iVar2 = 0;
  if (iVar27 <= iVar37) {
    iVar2 = iVar27;
  }
  puVar38 = (undefined8 *)(*plVar25 + (long)(iVar14 - iVar23) * 0x10);
  fVar53 = (float)puVar38[1];
  uVar24 = *puVar38;
  fVar48 = (float)uVar24;
  fVar50 = (float)((ulong)uVar24 >> 0x20);
  pfVar4 = (float *)(*plVar1 + (long)(iVar37 - iVar2) * 0x10);
  fVar49 = *pfVar4;
  fVar52 = pfVar4[1];
  fVar51 = pfVar4[2];
  fVar55 = (float)*(undefined8 *)(lVar43 + 0x70);
  fVar56 = (float)((ulong)*(undefined8 *)(lVar43 + 0x70) >> 0x20);
  fVar57 = (float)*(undefined8 *)(lVar43 + 0x78);
  fVar58 = (float)((ulong)*(undefined8 *)(lVar43 + 0x78) >> 0x20);
  fVar60 = (float)*(undefined8 *)(lVar43 + 0x80);
  fVar61 = (float)((ulong)*(undefined8 *)(lVar43 + 0x80) >> 0x20);
  fVar62 = (float)*(undefined8 *)(lVar43 + 0x88);
  fVar63 = (float)((ulong)*(undefined8 *)(lVar43 + 0x88) >> 0x20);
  puVar38 = &local_90;
  if ((param_3 & 1) == 0) {
    puVar38 = &local_a0;
  }
  fVar64 = (float)*(undefined8 *)(lVar43 + 0x90);
  fVar65 = (float)((ulong)*(undefined8 *)(lVar43 + 0x90) >> 0x20);
  fVar66 = (float)*(undefined8 *)(lVar43 + 0x98);
  fVar67 = (float)((ulong)*(undefined8 *)(lVar43 + 0x98) >> 0x20);
  uStack_88 = CONCAT44(fVar67 + fVar63 * fVar53 +
                                *(float *)(lVar43 + 0x6c) * fVar48 + fVar58 * fVar50,
                       fVar66 + fVar62 * fVar53 +
                                *(float *)(lVar43 + 0x68) * fVar48 + fVar57 * fVar50);
  local_90 = CONCAT44(fVar65 + fVar61 * fVar53 + *(float *)(lVar43 + 100) * fVar48 + fVar56 * fVar50
                      ,fVar64 + fVar60 * fVar53 +
                                *(float *)(lVar43 + 0x60) * fVar48 + fVar55 * fVar50);
  uStack_98 = CONCAT44(fVar67 + fVar63 * fVar51 +
                                *(float *)(lVar43 + 0x6c) * fVar49 + fVar58 * fVar52,
                       fVar66 + fVar62 * fVar51 +
                                *(float *)(lVar43 + 0x68) * fVar49 + fVar57 * fVar52);
  local_a0 = CONCAT44(fVar65 + fVar61 * fVar51 + *(float *)(lVar43 + 100) * fVar49 + fVar56 * fVar52
                      ,fVar64 + fVar60 * fVar51 +
                                *(float *)(lVar43 + 0x60) * fVar49 + fVar55 * fVar52);
  fVar49 = (float)uVar74 * (float)uVar74;
  uVar24 = puVar38[1];
  uVar74 = *puVar38;
  FUN_03157a00(&local_d8,*(undefined8 *)(lVar29 + (ulong)(local_68 >> 0x16) * 0xf0),local_68,
               &local_c0,&local_b0,param_6,&local_d0);
  if (((uint)local_d8 == 0xffffffff) || (fVar49 <= local_c4)) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar13 = local_68 & 0xffc00000 | (uint)local_d8;
  }
  bVar12 = uVar13 != 0xffffffff;
  if (uVar13 == 0xffffffff) {
    lVar29 = *(long *)(param_5 + 0x38);
    uVar36 = local_68;
  }
  else {
    lVar29 = *(long *)(param_5 + 0x38);
    uVar36 = uVar13 & 0x3fffff;
    uVar34 = (ulong)uVar36;
    lVar43 = *(long *)(*(long *)(lVar29 + (ulong)(uVar13 >> 0x16) * 0xf0) + 0x20);
    if ((int)uVar36 < *(int *)(lVar43 + 0x30)) {
      if ((*(int *)(lVar43 + 0x78) == 0) ||
         (uVar36 = *(uint *)(*(long *)(lVar43 + 0x70) + uVar34 * 4), uVar36 != 0xffffffff)) {
        lVar42 = *(long *)(lVar43 + 0xc0) + (long)(int)uVar36 * 0x14;
      }
      else {
        lVar42 = *(long *)(lVar43 + 0x28) + uVar34 * 0x14;
      }
    }
    else {
      lVar42 = *(long *)(lVar43 + 0xe0) + (long)(int)(uVar36 - *(int *)(lVar43 + 0x30)) * 0x14;
    }
    uVar36 = *(uint *)(lVar42 + 0xc);
    if (((*(byte *)(lVar42 + 0x10) >> 6 & 1) == 0) && (uVar36 != 0xffffffff)) {
      uVar36 = uVar36 & 0x3fffff | *(int *)(lVar43 + 0x17c) << 0x16;
    }
  }
  local_d0 = (uint *)CONCAT44(local_d0._4_4_,uVar36);
  uVar32 = uVar36 >> 0x16;
  lVar29 = *(long *)(*(long *)(lVar29 + (ulong)uVar32 * 0xf0) + 0x20);
  uVar15 = uVar36 & 0x3fffff;
  uVar34 = (ulong)uVar15;
  if ((int)uVar15 < *(int *)(lVar29 + 0x20)) {
    if ((*(int *)(lVar29 + 0x98) == 0) ||
       (uVar15 = *(uint *)(*(long *)(lVar29 + 0x90) + uVar34 * 4), uVar15 != 0xffffffff)) {
      lVar29 = *(long *)(lVar29 + 0xb0) + (long)(int)uVar15 * 0x10;
    }
    else {
      lVar29 = *(long *)(lVar29 + 0x18) + uVar34 * 0x10;
    }
  }
  else {
    lVar29 = *(long *)(lVar29 + 0xd0) + (long)(int)(uVar15 - *(int *)(lVar29 + 0x20)) * 0x10;
  }
  if (*(short *)(lVar29 + 10) < 1) {
    return 2;
  }
  iVar14 = 0;
  uVar15 = 0xffffffff;
  local_f0 = uVar36 & 0xffc00000;
  do {
    uVar46 = *(int *)(lVar29 + 4) + iVar14;
    uVar28 = uVar46 | local_f0;
    uVar33 = uVar15;
    if ((uVar28 != (uint)uVar31) && (uVar34 = FUN_031654a8(param_6,uVar28,6), (uVar34 & 1) != 0)) {
      uVar46 = uVar46 & 0x3fffff;
      uVar34 = (ulong)uVar46;
      lVar42 = *(long *)(*(long *)(param_5 + 0x38) + (ulong)(uVar28 >> 0x16) * 0xf0);
      lVar44 = *(long *)(lVar42 + 0x20);
      iVar37 = *(int *)(lVar44 + 0x30);
      piVar35 = (int *)(*(long *)(lVar44 + 0x28) + uVar34 * 0x14);
      lVar43 = 0;
      if ((int)uVar46 < iVar37) goto LAB_031564dc;
LAB_03156714:
      uVar39 = uVar46 - iVar37;
      lVar41 = *(long *)(lVar44 + 0xe0);
      do {
        piVar22 = (int *)(lVar41 + (long)(int)uVar39 * 0x14);
        do {
          iVar27 = *(int *)(lVar44 + 0x40);
          if (*piVar22 < iVar27) {
            iVar23 = 0;
            plVar25 = (long *)(lVar44 + 0x38);
          }
          else {
            plVar25 = (long *)(lVar44 + 0xf0);
            iVar23 = iVar27;
          }
          iVar2 = piVar22[1];
          puVar38 = (undefined8 *)(*plVar25 + (long)(*piVar22 - iVar23) * 0x10);
          fVar48 = (float)puVar38[1];
          uVar6 = *puVar38;
          fVar52 = (float)uVar6;
          fVar51 = (float)((ulong)uVar6 >> 0x20);
          plVar25 = (long *)(lVar44 + 0x38);
          if (iVar27 <= iVar2) {
            plVar25 = (long *)(lVar44 + 0xf0);
          }
          fVar50 = (float)*(undefined8 *)(lVar42 + 0x70);
          fVar53 = (float)((ulong)*(undefined8 *)(lVar42 + 0x70) >> 0x20);
          fVar55 = (float)*(undefined8 *)(lVar42 + 0x78);
          fVar56 = (float)((ulong)*(undefined8 *)(lVar42 + 0x78) >> 0x20);
          iVar23 = 0;
          if (iVar27 <= iVar2) {
            iVar23 = iVar27;
          }
          fVar61 = (float)*(undefined8 *)(lVar42 + 0x80);
          fVar62 = (float)((ulong)*(undefined8 *)(lVar42 + 0x80) >> 0x20);
          fVar63 = (float)*(undefined8 *)(lVar42 + 0x88);
          fVar64 = (float)((ulong)*(undefined8 *)(lVar42 + 0x88) >> 0x20);
          pfVar4 = (float *)(*plVar25 + (long)(iVar2 - iVar23) * 0x10);
          fVar57 = *pfVar4;
          fVar58 = pfVar4[1];
          fVar60 = pfVar4[2];
          pfVar4 = (float *)&local_a0;
          if ((&DAT_03aa7534)[lVar43] == '\0') {
            pfVar4 = (float *)&local_90;
          }
          fVar65 = (float)*(undefined8 *)(lVar42 + 0x90);
          fVar66 = (float)((ulong)*(undefined8 *)(lVar42 + 0x90) >> 0x20);
          fVar67 = (float)*(undefined8 *)(lVar42 + 0x98);
          fVar68 = (float)((ulong)*(undefined8 *)(lVar42 + 0x98) >> 0x20);
          uStack_88 = CONCAT44(fVar68 + fVar64 * fVar48 +
                                        *(float *)(lVar42 + 0x6c) * fVar52 + fVar56 * fVar51,
                               fVar67 + fVar63 * fVar48 +
                                        *(float *)(lVar42 + 0x68) * fVar52 + fVar55 * fVar51);
          local_90 = CONCAT44(fVar66 + fVar62 * fVar48 +
                                       *(float *)(lVar42 + 100) * fVar52 + fVar53 * fVar51,
                              fVar65 + fVar61 * fVar48 +
                                       *(float *)(lVar42 + 0x60) * fVar52 + fVar50 * fVar51);
          uStack_98 = CONCAT44(fVar68 + fVar64 * fVar60 +
                                        *(float *)(lVar42 + 0x6c) * fVar57 + fVar56 * fVar58,
                               fVar67 + fVar63 * fVar60 +
                                        *(float *)(lVar42 + 0x68) * fVar57 + fVar55 * fVar58);
          local_a0 = CONCAT44(fVar66 + fVar62 * fVar60 +
                                       *(float *)(lVar42 + 100) * fVar57 + fVar53 * fVar58,
                              fVar65 + fVar61 * fVar60 +
                                       *(float *)(lVar42 + 0x60) * fVar57 + fVar50 * fVar58);
          fVar53 = (float)*(undefined8 *)pfVar4 - (float)uVar7;
          fVar55 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20) - (float)((ulong)uVar7 >> 0x20);
          fVar56 = (float)*(undefined8 *)(pfVar4 + 2) - (float)uVar30;
          fVar48 = (float)uStack_a8;
          fVar50 = (float)((ulong)uStack_a8 >> 0x20);
          fVar52 = (float)local_b0;
          fVar51 = (float)((ulong)local_b0 >> 0x20);
          fVar57 = fVar52 * fVar53;
          fVar60 = fVar51 * fVar55;
          fVar61 = fVar48 * fVar56;
          fVar58 = fVar57 + fVar60 + fVar61;
          fVar61 = fVar57 + fVar60 + fVar61;
          fVar53 = fVar53 - fVar52 * fVar58;
          fVar55 = fVar55 - fVar51 * fVar61;
          fVar56 = fVar56 - fVar48 * fVar58;
          fVar57 = ((float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20) - 0.0) - fVar50 * fVar61;
          auVar54._0_4_ = fVar53 * fVar53;
          auVar54._4_4_ = fVar55 * fVar55;
          auVar54._8_4_ = fVar56 * fVar56;
          auVar54._12_4_ = fVar57 * fVar57;
          auVar59 = NEON_ext(auVar54,auVar54,8,1);
          if (auVar54._0_4_ + auVar54._4_4_ + auVar59._0_4_ <= fVar49) {
            uVar39 = uVar46 - iVar37;
            if ((int)uVar46 < iVar37) {
              uVar39 = uVar46;
              if (*(int *)(lVar44 + 0x78) == 0) {
LAB_03156720:
                lVar41 = *(long *)(lVar44 + 0xc0);
                goto LAB_0315672c;
              }
              uVar39 = *(uint *)(*(long *)(lVar44 + 0x70) + uVar34 * 4);
              piVar22 = piVar35;
              if (uVar39 != 0xffffffff) goto LAB_03156720;
            }
            else {
              lVar41 = *(long *)(lVar44 + 0xe0);
LAB_0315672c:
              piVar22 = (int *)(lVar41 + (long)(int)uVar39 * 0x14);
            }
            uVar39 = piVar22[2];
            if ((*(byte *)(piVar22 + 4) >> 6 & 1) == 0) {
              if (uVar39 == 0xffffffff) goto LAB_031564c8;
              uVar39 = uVar39 & 0x3fffff | *(int *)(lVar44 + 0x17c) << 0x16;
            }
            if (uVar39 != 0xffffffff) {
              uVar19 = uVar39 & 0x3fffff;
              uVar21 = (ulong)uVar19;
              lVar40 = *(long *)(*(long *)(param_5 + 0x38) + (ulong)(uVar39 >> 0x16) * 0xf0);
              lVar41 = *(long *)(lVar40 + 0x20);
              if ((int)uVar19 < *(int *)(lVar41 + 0x30)) {
                if ((*(int *)(lVar41 + 0x78) == 0) ||
                   (uVar19 = *(uint *)(*(long *)(lVar41 + 0x70) + uVar21 * 4), uVar19 != 0xffffffff)
                   ) {
                  piVar22 = (int *)(*(long *)(lVar41 + 0xc0) + (long)(int)uVar19 * 0x14);
                }
                else {
                  piVar22 = (int *)(*(long *)(lVar41 + 0x28) + uVar21 * 0x14);
                }
              }
              else {
                piVar22 = (int *)(*(long *)(lVar41 + 0xe0) +
                                 (long)(int)(uVar19 - *(int *)(lVar41 + 0x30)) * 0x14);
              }
              iVar2 = *(int *)(lVar41 + 0x40);
              iVar27 = *piVar22;
              iVar23 = piVar22[1];
              plVar25 = (long *)(lVar41 + 0x38);
              if (iVar2 <= iVar27) {
                plVar25 = (long *)(lVar41 + 0xf0);
              }
              iVar3 = 0;
              if (iVar2 <= iVar27) {
                iVar3 = iVar2;
              }
              pfVar4 = (float *)(*plVar25 + (long)(iVar27 - iVar3) * 0x10);
              fVar53 = *pfVar4;
              fVar55 = pfVar4[1];
              fVar56 = pfVar4[2];
              fVar57 = (float)*(undefined8 *)(lVar40 + 0x60);
              fVar58 = (float)((ulong)*(undefined8 *)(lVar40 + 0x60) >> 0x20);
              fVar60 = (float)*(undefined8 *)(lVar40 + 0x68);
              fVar61 = (float)((ulong)*(undefined8 *)(lVar40 + 0x68) >> 0x20);
              fVar62 = (float)*(undefined8 *)(lVar40 + 0x70);
              fVar63 = (float)((ulong)*(undefined8 *)(lVar40 + 0x70) >> 0x20);
              fVar64 = (float)*(undefined8 *)(lVar40 + 0x78);
              fVar65 = (float)((ulong)*(undefined8 *)(lVar40 + 0x78) >> 0x20);
              plVar25 = (long *)(lVar41 + 0x38);
              if (iVar2 <= iVar23) {
                plVar25 = (long *)(lVar41 + 0xf0);
              }
              fVar66 = (float)*(undefined8 *)(lVar40 + 0x80);
              fVar67 = (float)((ulong)*(undefined8 *)(lVar40 + 0x80) >> 0x20);
              fVar68 = (float)*(undefined8 *)(lVar40 + 0x88);
              fVar69 = (float)((ulong)*(undefined8 *)(lVar40 + 0x88) >> 0x20);
              iVar27 = 0;
              if (iVar2 <= iVar23) {
                iVar27 = iVar2;
              }
              pfVar4 = (float *)(*plVar25 + (long)(iVar23 - iVar27) * 0x10);
              fVar8 = *pfVar4;
              fVar9 = pfVar4[1];
              fVar10 = pfVar4[2];
              fVar70 = (float)*(undefined8 *)(lVar40 + 0x90);
              fVar71 = (float)((ulong)*(undefined8 *)(lVar40 + 0x90) >> 0x20);
              fVar72 = (float)*(undefined8 *)(lVar40 + 0x98);
              fVar73 = (float)((ulong)*(undefined8 *)(lVar40 + 0x98) >> 0x20);
              pfVar4 = (float *)&local_90;
              if ((&DAT_03aa7534)[lVar43] == '\0') {
                pfVar4 = (float *)&local_a0;
              }
              uStack_88 = CONCAT44(fVar73 + fVar69 * fVar56 + fVar61 * fVar53 + fVar65 * fVar55,
                                   fVar72 + fVar68 * fVar56 + fVar60 * fVar53 + fVar64 * fVar55);
              local_90 = CONCAT44(fVar71 + fVar67 * fVar56 + fVar58 * fVar53 + fVar63 * fVar55,
                                  fVar70 + fVar66 * fVar56 + fVar57 * fVar53 + fVar62 * fVar55);
              uStack_98 = CONCAT44(fVar73 + fVar69 * fVar10 + fVar61 * fVar8 + fVar65 * fVar9,
                                   fVar72 + fVar68 * fVar10 + fVar60 * fVar8 + fVar64 * fVar9);
              local_a0 = CONCAT44(fVar71 + fVar67 * fVar10 + fVar58 * fVar8 + fVar63 * fVar9,
                                  fVar70 + fVar66 * fVar10 + fVar57 * fVar8 + fVar62 * fVar9);
              fVar53 = *pfVar4 - (float)uVar74;
              fVar55 = pfVar4[1] - (float)((ulong)uVar74 >> 0x20);
              fVar56 = pfVar4[2] - (float)uVar24;
              fVar57 = fVar52 * fVar53;
              fVar60 = fVar51 * fVar55;
              fVar61 = fVar48 * fVar56;
              fVar58 = fVar57 + fVar60 + fVar61;
              fVar61 = fVar57 + fVar60 + fVar61;
              fVar53 = fVar53 - fVar52 * fVar58;
              fVar55 = fVar55 - fVar51 * fVar61;
              fVar56 = fVar56 - fVar48 * fVar58;
              fVar52 = (pfVar4[3] - 0.0) - fVar50 * fVar61;
              fVar53 = fVar53 * fVar53;
              fVar55 = fVar55 * fVar55;
              fVar56 = fVar56 * fVar56;
              fVar52 = fVar52 * fVar52;
              auVar59._4_4_ = fVar55;
              auVar59._0_4_ = fVar53;
              auVar59._8_4_ = fVar56;
              auVar59._12_4_ = fVar52;
              auVar5._4_4_ = fVar55;
              auVar5._0_4_ = fVar53;
              auVar5._8_4_ = fVar56;
              auVar5._12_4_ = fVar52;
              auVar54 = NEON_ext(auVar59,auVar5,8,1);
              if (fVar53 + fVar55 + auVar54._0_4_ < fVar49) {
                uVar33 = uVar28;
                goto LAB_0315678c;
              }
            }
          }
LAB_031564c8:
          lVar43 = lVar43 + 1;
          if (lVar43 == 2) goto LAB_0315678c;
          if (iVar37 <= (int)uVar46) goto LAB_03156714;
LAB_031564dc:
          uVar39 = uVar46;
          if (*(int *)(lVar44 + 0x78) == 0) break;
          uVar39 = *(uint *)(*(long *)(lVar44 + 0x70) + uVar34 * 4);
          piVar22 = piVar35;
        } while (uVar39 == 0xffffffff);
        lVar41 = *(long *)(lVar44 + 0xc0);
      } while( true );
    }
LAB_0315678c:
    puVar11 = PTR_PTR_0434a080;
    iVar14 = iVar14 + 1;
    if (*(short *)(lVar29 + 10) <= iVar14) {
      if (uVar33 == 0xffffffff) {
        return 2;
      }
      break;
    }
  } while (uVar33 == 0xffffffff);
  lVar29 = *(long *)(param_5 + 0x38);
  lVar43 = *(long *)(*(long *)(lVar29 + uVar47 * 0xf0) + 0x20);
  if ((int)local_150 < *(int *)(lVar43 + 0x30)) {
    if ((*(int *)(lVar43 + 0x78) == 0) ||
       (local_150 = *(uint *)(*(long *)(lVar43 + 0x70) + uVar45 * 4), local_150 != 0xffffffff)) {
      lVar42 = *(long *)(lVar43 + 0xc0) + (long)(int)local_150 * 0x14;
    }
    else {
      lVar42 = *(long *)(lVar43 + 0x28) + uVar45 * 0x14;
    }
  }
  else {
    lVar42 = *(long *)(lVar43 + 0xe0) + (long)(int)(local_150 - *(int *)(lVar43 + 0x30)) * 0x14;
  }
  uVar46 = *(uint *)(lVar42 + 0xc);
  uVar15 = 0xffffffff;
  if (uVar46 != 0xffffffff) {
    uVar15 = uVar46 & 0x3fffff | *(int *)(lVar43 + 0x17c) << 0x16;
  }
  if ((*(byte *)(lVar42 + 0x10) & 0x40) == 0) {
    uVar46 = uVar15;
  }
  uVar15 = uVar33 & 0x3fffff;
  uVar30 = (ulong)uVar15;
  lVar43 = *(long *)(*(long *)(lVar29 + (ulong)(uVar33 >> 0x16) * 0xf0) + 0x20);
  if ((int)uVar15 < *(int *)(lVar43 + 0x30)) {
    if ((*(int *)(lVar43 + 0x78) == 0) ||
       (uVar15 = *(uint *)(*(long *)(lVar43 + 0x70) + uVar30 * 4), uVar15 != 0xffffffff)) {
      lVar42 = *(long *)(lVar43 + 0xc0) + (long)(int)uVar15 * 0x14;
    }
    else {
      lVar42 = *(long *)(lVar43 + 0x28) + uVar30 * 0x14;
    }
  }
  else {
    lVar42 = *(long *)(lVar43 + 0xe0) + (long)(int)(uVar15 - *(int *)(lVar43 + 0x30)) * 0x14;
  }
  uVar28 = *(uint *)(lVar42 + 0xc);
  uVar15 = 0xffffffff;
  if (uVar28 != 0xffffffff) {
    uVar15 = uVar28 & 0x3fffff | *(int *)(lVar43 + 0x17c) << 0x16;
  }
  if ((*(byte *)(lVar42 + 0x10) & 0x40) == 0) {
    uVar28 = uVar15;
  }
  local_d8 = CONCAT44(local_d8._4_4_,uVar28);
  if (uVar46 == 0xffffffff) {
    return 2;
  }
  uVar15 = uVar16;
  if ((0 < (int)uVar16) && (uVar13 != 0xffffffff)) {
    lVar42 = (long)(int)uVar16 + -1;
    lVar44 = *(long *)(param_1 + 0x18);
    uVar15 = *(uint *)(lVar44 + lVar42 * 0x90 + 0x70);
    uVar30 = (ulong)uVar15 & 0x3fffff;
    lVar41 = *(long *)(*(long *)(lVar29 + (ulong)(uVar15 >> 0x16) * 0xf0) + 0x20);
    iVar14 = *(int *)(*(long *)(lVar41 + 0x168) + uVar30 * 4);
    lVar43 = (long)iVar14;
    if (iVar14 < 0) {
      if (((*(int *)(lVar41 + 0x108) != 0) &&
          ((*(byte *)(*(long *)(lVar41 + 0x100) + uVar30) & 1) != 0)) ||
         (*(short *)(lVar44 + lVar42 * 0x90 + 0x74) != -1)) {
        uVar15 = 0xffffffff;
      }
    }
    else {
      do {
        lVar43 = lVar43 + 1;
        if (*(int *)(lVar41 + 0x170) <= lVar43) break;
      } while (*(int *)(*(long *)(lVar41 + 0x168) + lVar43 * 4) == (int)uVar30);
      iVar37 = (int)*(short *)(lVar44 + lVar42 * 0x90 + 0x74);
      if ((iVar37 == -1) || (uVar39 = iVar14 + iVar37, (int)lVar43 <= (int)uVar39)) {
        uVar15 = 0xffffffff;
      }
      else {
        uVar15 = uVar39 | uVar15 & 0xffc00000;
      }
    }
    bVar12 = uVar36 != uVar15;
    uVar15 = (uint)lVar42;
    if (bVar12) {
      uVar15 = uVar16;
    }
  }
  iVar14 = uVar16 + 1;
  if (uVar46 == uVar28) {
    iVar37 = 0;
    uVar16 = 0xffffffff;
  }
  else {
    lVar43 = (long)(int)uVar16 + 2;
    if (*(int *)(param_1 + 0x20) <= (int)lVar43) goto LAB_03157250;
    lVar44 = *(long *)(param_1 + 0x18);
    uVar16 = *(uint *)(lVar44 + lVar43 * 0x90 + 0x70);
    uVar30 = (ulong)uVar16 & 0x3fffff;
    lVar41 = *(long *)(*(long *)(lVar29 + (ulong)(uVar16 >> 0x16) * 0xf0) + 0x20);
    iVar37 = *(int *)(*(long *)(lVar41 + 0x168) + uVar30 * 4);
    lVar42 = (long)iVar37;
    if (iVar37 < 0) {
      if (((*(int *)(lVar41 + 0x108) == 0) ||
          ((*(byte *)(*(long *)(lVar41 + 0x100) + uVar30) & 1) == 0)) &&
         (*(short *)(lVar44 + lVar43 * 0x90 + 0x74) == -1)) goto joined_r0x03156b68;
      if (uVar28 != 0xffffffff) goto LAB_03157250;
    }
    else {
      do {
        lVar42 = lVar42 + 1;
        if (*(int *)(lVar41 + 0x170) <= lVar42) break;
      } while (*(int *)(*(long *)(lVar41 + 0x168) + lVar42 * 4) == (int)uVar30);
      iVar27 = (int)*(short *)(lVar44 + lVar43 * 0x90 + 0x74);
      if ((iVar27 == -1) || (uVar36 = iVar37 + iVar27, (int)lVar42 <= (int)uVar36)) {
        uVar16 = 0xffffffff;
      }
      else {
        uVar16 = uVar36 | uVar16 & 0xffc00000;
      }
joined_r0x03156b68:
      if (uVar28 != uVar16) {
LAB_03157250:
        lVar43 = *(long *)(*(long *)(lVar29 + (ulong)(uVar28 >> 0x16) * 0xf0) + 0x20);
        uVar16 = uVar28 & 0x3fffff;
        uVar30 = (ulong)uVar16;
        if ((int)uVar16 < *(int *)(lVar43 + 0x20)) {
          if ((*(int *)(lVar43 + 0x98) == 0) ||
             (uVar16 = *(uint *)(*(long *)(lVar43 + 0x90) + uVar30 * 4), uVar16 != 0xffffffff)) {
            puVar26 = (uint *)(*(long *)(lVar43 + 0xb0) + (long)(int)uVar16 * 0x10);
          }
          else {
            puVar26 = (uint *)(*(long *)(lVar43 + 0x18) + uVar30 * 0x10);
          }
        }
        else {
          puVar26 = (uint *)(*(long *)(lVar43 + 0xd0) +
                            (long)(int)(uVar16 - *(int *)(lVar43 + 0x20)) * 0x10);
        }
        iVar37 = (int)(short)puVar26[2];
        if (0 < (short)puVar26[2]) {
          uVar36 = *puVar26;
          do {
            uVar16 = uVar36 | uVar28 & 0xffc00000;
            lVar43 = *(long *)(*(long *)(lVar29 + (ulong)(uVar16 >> 0x16) * 0xf0) + 0x20);
            uVar39 = uVar36 & 0x3fffff;
            uVar30 = (ulong)uVar39;
            if ((int)uVar39 < *(int *)(lVar43 + 0x30)) {
              if ((*(int *)(lVar43 + 0x78) == 0) ||
                 (uVar39 = *(uint *)(*(long *)(lVar43 + 0x70) + uVar30 * 4), uVar39 != 0xffffffff))
              {
                lVar42 = *(long *)(lVar43 + 0xc0) + (long)(int)uVar39 * 0x14;
              }
              else {
                lVar42 = *(long *)(lVar43 + 0x28) + uVar30 * 0x14;
              }
            }
            else {
              lVar42 = *(long *)(lVar43 + 0xe0) +
                       (long)(int)(uVar39 - *(int *)(lVar43 + 0x30)) * 0x14;
            }
            uVar19 = *(uint *)(lVar42 + 0xc);
            uVar39 = 0xffffffff;
            if (uVar19 != 0xffffffff) {
              uVar39 = uVar19 & 0x3fffff | *(int *)(lVar43 + 0x17c) << 0x16;
            }
            if ((*(byte *)(lVar42 + 0x10) & 0x40) == 0) {
              uVar19 = uVar39;
            }
            if (uVar19 == uVar46) {
              if (uVar16 == 0xffffffff) {
                return 2;
              }
              iVar37 = 1;
              goto LAB_03156960;
            }
            uVar36 = uVar36 + 1;
            iVar37 = iVar37 + -1;
          } while (iVar37 != 0);
        }
        return 2;
      }
    }
    iVar37 = 0;
    uVar16 = 0xffffffff;
    iVar14 = (int)lVar43;
  }
LAB_03156960:
  iVar27 = 1;
  if (bVar12) {
    iVar27 = 2;
  }
  iVar27 = iVar27 + iVar37;
  iVar14 = iVar14 - uVar15;
  iVar23 = iVar27 - iVar14;
  if (iVar27 < iVar14) {
    uVar36 = *(uint *)(param_1 + 0x24);
    iVar23 = *(int *)(param_1 + 0x20);
    iVar2 = iVar14 - iVar27;
    uVar46 = iVar23 - iVar2;
    iVar3 = (iVar23 - uVar15) - iVar2;
    if ((int)(uVar36 & 0x3fffffff) < (int)uVar46) {
      uVar74 = *(undefined8 *)(param_1 + 0x18);
      if (0x3fffffff < (int)uVar46) {
        FUN_032bd0a8(uVar46);
        uVar36 = *(uint *)(param_1 + 0x24);
      }
      uVar36 = (uVar36 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar36) {
        uVar36 = 0x3fffffff;
      }
      uVar28 = uVar46;
      if ((int)uVar46 <= (int)uVar36) {
        uVar28 = uVar36;
      }
      lVar29 = FUN_032bd1d4(puVar11,uVar28,0x90,uVar74,iVar23);
      *(long *)(param_1 + 0x18) = lVar29;
    }
    else {
      lVar29 = *(long *)(param_1 + 0x18);
    }
    if (0 < iVar3) {
      puVar38 = (undefined8 *)(lVar29 + (long)(int)uVar15 * 0x90);
      if (iVar2 < 1) {
        if (iVar2 != 0) {
          FUN_032d57d0(puVar38,puVar38 + (long)iVar2 * 0x12,(long)iVar3 * 0x90);
        }
      }
      else {
        lVar29 = 0;
        do {
          lVar29 = (lVar29 << 0x20) + 0x800000000 >> 0x20;
          *puVar38 = puVar38[(long)iVar27 * -0x12 + (long)iVar14 * 0x12];
          puVar38 = puVar38 + 1;
        } while (lVar29 < (long)iVar3 * 0x90);
      }
    }
    uVar28 = *(uint *)(param_1 + 0x34);
    lVar43 = (long)*(int *)(param_1 + 0x38) * (long)(int)uVar15;
    lVar29 = (long)*(int *)(param_1 + 0x38) * (long)iVar2;
    iVar14 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x20) = uVar46;
    iVar27 = (int)lVar29;
    uVar36 = iVar14 - iVar27;
    uVar46 = (iVar14 - (int)lVar43) - iVar27;
    if ((int)(uVar28 & 0x3fffffff) < (int)uVar36) {
      uVar74 = *(undefined8 *)(param_1 + 0x28);
      if (0x3fffffff < (int)uVar36) {
        FUN_032bd0a8(uVar36);
        uVar28 = *(uint *)(param_1 + 0x34);
      }
      uVar28 = (uVar28 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar28) {
        uVar28 = 0x3fffffff;
      }
      uVar39 = uVar36;
      if ((int)uVar36 <= (int)uVar28) {
        uVar39 = uVar28;
      }
      lVar42 = FUN_032bd1d4(puVar11,uVar39,4,uVar74,iVar14);
      *(long *)(param_1 + 0x28) = lVar42;
    }
    else {
      lVar42 = *(long *)(param_1 + 0x28);
    }
    if (0 < (int)uVar46) {
      puVar20 = (undefined4 *)(lVar42 + lVar43 * 4);
      puVar17 = puVar20 + lVar29;
      if (iVar27 < 1) {
        if (iVar27 != 0) {
          FUN_032d57d0(puVar20,puVar17,
                       -(ulong)(uVar46 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar46 << 2);
        }
      }
      else {
        *puVar20 = *puVar17;
        if ((((1 < (int)uVar46) && (puVar20[1] = puVar17[1], 2 < (int)uVar46)) &&
            (puVar20[2] = puVar17[2], 3 < (int)uVar46)) &&
           ((puVar20[3] = puVar17[3], 4 < (int)uVar46 && (puVar20[4] = puVar17[4], 5 < (int)uVar46))
           )) {
          lVar43 = 0x14;
          puVar20 = puVar20 + 5;
          do {
            lVar43 = (lVar43 << 0x20) + 0x400000000 >> 0x20;
            *puVar20 = puVar20[lVar29];
            puVar20 = puVar20 + 1;
          } while (lVar43 < (long)(-(ulong)(uVar46 >> 0x1f) & 0xfffffffc00000000 |
                                  (ulong)uVar46 << 2));
        }
      }
    }
  }
  else {
    if (iVar23 == 0 || iVar27 < iVar14) goto LAB_03156a90;
    uVar46 = *(uint *)(param_1 + 0x24);
    iVar2 = *(int *)(param_1 + 0x20);
    uVar36 = iVar2 + iVar23;
    iVar3 = iVar2 - uVar15;
    if ((int)(uVar46 & 0x3fffffff) < (int)uVar36) {
      uVar74 = *(undefined8 *)(param_1 + 0x18);
      if (0x3fffffff < (int)uVar36) {
        FUN_032bd0a8(uVar36);
        uVar46 = *(uint *)(param_1 + 0x24);
      }
      uVar46 = (uVar46 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar46) {
        uVar46 = 0x3fffffff;
      }
      uVar28 = uVar36;
      if ((int)uVar36 <= (int)uVar46) {
        uVar28 = uVar46;
      }
      lVar29 = FUN_032bd1d4(puVar11,uVar28,0x90,uVar74,iVar2);
      *(long *)(param_1 + 0x18) = lVar29;
    }
    else {
      lVar29 = *(long *)(param_1 + 0x18);
    }
    puVar38 = (undefined8 *)(lVar29 + (long)(int)uVar15 * 0x90);
    if (iVar23 < 0) {
      if ((iVar23 != 0 && iVar3 != 0) && (0 < iVar3)) {
        lVar29 = 0;
        do {
          lVar29 = (lVar29 << 0x20) + 0x800000000 >> 0x20;
          puVar38[(long)iVar14 * -0x12 + (long)iVar27 * 0x12] = *puVar38;
          puVar38 = puVar38 + 1;
        } while (lVar29 < (long)iVar3 * 0x90);
      }
    }
    else if (iVar23 != 0 && iVar3 != 0) {
      FUN_032d57d0(puVar38 + (long)iVar23 * 0x12,puVar38,(long)iVar3 * 0x90);
    }
    puVar26 = (uint *)(param_1 + 0x34);
    uVar46 = *puVar26;
    lVar29 = (long)*(int *)(param_1 + 0x38) * (long)iVar23;
    lVar43 = (long)*(int *)(param_1 + 0x38) * (long)(int)uVar15;
    iVar14 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x20) = uVar36;
    iVar27 = (int)lVar29;
    uVar36 = iVar14 + iVar27;
    uVar28 = iVar14 - (int)lVar43;
    if ((int)(uVar46 & 0x3fffffff) < (int)uVar36) {
      uVar74 = *(undefined8 *)(param_1 + 0x28);
      if (0x3fffffff < (int)uVar36) {
        FUN_032bd0a8(uVar36);
        uVar46 = *puVar26;
      }
      uVar46 = (uVar46 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar46) {
        uVar46 = 0x3fffffff;
      }
      uVar39 = uVar36;
      if ((int)uVar36 <= (int)uVar46) {
        uVar39 = uVar46;
      }
      lVar42 = FUN_032bd1d4(puVar11,uVar39,4,uVar74,iVar14,puVar26);
      *(long *)(param_1 + 0x28) = lVar42;
    }
    else {
      lVar42 = *(long *)(param_1 + 0x28);
    }
    puVar20 = (undefined4 *)(lVar42 + lVar43 * 4);
    puVar17 = puVar20 + lVar29;
    if (iVar27 < 0) {
      if ((((iVar27 != 0 && uVar28 != 0) && (0 < (int)uVar28)) &&
          (*puVar17 = *puVar20, 1 < (int)uVar28)) &&
         (((puVar17[1] = puVar20[1], 2 < (int)uVar28 && (puVar17[2] = puVar20[2], 3 < (int)uVar28))
          && ((puVar17[3] = puVar20[3], 4 < (int)uVar28 &&
              (puVar17[4] = puVar20[4], 5 < (int)uVar28)))))) {
        puVar20 = puVar20 + 5;
        lVar43 = 0x14;
        do {
          lVar43 = (lVar43 << 0x20) + 0x400000000 >> 0x20;
          puVar20[lVar29] = *puVar20;
          puVar20 = puVar20 + 1;
        } while (lVar43 < (long)(-(ulong)(uVar28 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar28 << 2)
                );
      }
    }
    else if (iVar27 != 0 && uVar28 != 0) {
      FUN_032d57d0(puVar17,puVar20,
                   -(ulong)(uVar28 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar28 << 2);
    }
  }
  *(uint *)(param_1 + 0x30) = uVar36;
LAB_03156a90:
  if (bVar12) {
    local_e0 = (uint *)CONCAT44(local_e0._4_4_,local_68 >> 0x16);
    local_64[0] = *(byte *)(*(long *)(*(long *)(*(long *)(*(long *)(param_5 + 0x38) +
                                                         (ulong)(local_68 >> 0x16) * 0xf0) + 0x20) +
                                     0x68) + 0x80) & 1;
    FUN_03154264(param_1,param_5,param_6,uVar13,&local_b0,&local_68,&local_e0,local_64,uVar15);
  }
  local_64[0] = *(byte *)(*(long *)(*(long *)(*(long *)(*(long *)(param_5 + 0x38) +
                                                       (ulong)uVar32 * 0xf0) + 0x20) + 0x68) + 0x80)
                & 1;
  local_e0._0_4_ = uVar32;
  FUN_03154264(param_1,param_5,param_6,uVar33,&local_b0,&local_d0,&local_e0,local_64,bVar12 + uVar15
              );
  if (iVar37 != 0) {
    local_e0 = (uint *)CONCAT44(local_e0._4_4_,local_68 >> 0x16);
    local_64[0] = *(byte *)(*(long *)(*(long *)(*(long *)(*(long *)(param_5 + 0x38) +
                                                         (ulong)(local_68 >> 0x16) * 0xf0) + 0x20) +
                                     0x68) + 0x80) & 1;
    FUN_03154264(param_1,param_5,param_6,uVar16,&local_b0,&local_d8,&local_e0,local_64,
                 bVar12 + uVar15 + 1);
  }
  if (uVar15 == 0) {
    return 0;
  }
  if (uVar15 == 1) {
    lVar29 = 0;
  }
  else {
    lVar29 = 0;
    lVar43 = 0x10c;
    do {
      *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar43 + -0x90) = 0;
      *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar43 + -0x8e) = 0;
      *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar43) = 0;
      lVar29 = lVar29 + 2;
      lVar42 = *(long *)(param_1 + 0x18) + lVar43;
      lVar43 = lVar43 + 0x120;
      *(undefined2 *)(lVar42 + 2) = 0;
    } while ((ulong)uVar15 - ((ulong)uVar15 & 1) != lVar29);
    if ((uVar15 & 1) == 0) {
      return 0;
    }
  }
  *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar29 * 0x90 + 0x7c) = 0;
  *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar29 * 0x90 + 0x7e) = 0;
  return 0;
}


