/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bcbd4; name: FUN_031bcbd4
 */


/* WARNING: Removing unreachable block (ram,0x031bd0f0) */

bool FUN_031bcbd4(long param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  undefined8 uVar27;
  int local_230;
  undefined1 uStack_22c;
  undefined1 uStack_22b;
  undefined1 uStack_22a;
  undefined1 uStack_229;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  int local_200;
  undefined1 local_1fc;
  undefined4 local_1fb;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined1 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  uint uStack_10c;
  undefined1 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_b0;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  char cStack_a9;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  uVar27 = *(undefined8 *)(param_1 + 0xa8);
  uVar13 = *(undefined8 *)(param_1 + 0xa0);
  fVar20 = (float)((ulong)uVar27 >> 0x20);
  if (0 < *(int *)(param_1 + 0x24)) {
    piVar14 = (int *)(param_1 + 0x70);
    piVar14[0] = 0;
    piVar14[1] = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    lVar9 = *(long *)(param_1 + 0x78);
    if ((*(uint *)(param_1 + 0x84) & 0x3fffffff) == 0) {
      lVar9 = FUN_031bd3f4(PTR_PTR_0434a090,1,lVar9,0);
      *(long *)(param_1 + 0x78) = lVar9;
      lVar10 = (long)*(int *)(param_1 + 0x80);
    }
    else {
      lVar10 = 0;
    }
    puVar11 = (undefined4 *)(lVar9 + lVar10 * 0x30);
    *(undefined4 *)(param_1 + 0x80) = 1;
    *(undefined4 *)((long)puVar11 + 5) = 1;
    *(bool *)((long)puVar11 + 6) = fVar20 < 0.0;
    *(undefined8 *)(puVar11 + 6) = uVar27;
    *(undefined8 *)(puVar11 + 4) = uVar13;
    *(undefined8 *)(puVar11 + 10) = uVar27;
    *(undefined8 *)(puVar11 + 8) = uVar13;
    *puVar11 = 0xffffffff;
    *(undefined1 *)(puVar11 + 1) = 0xff;
    *(undefined4 *)(param_1 + 0x74) = 0;
    FUN_033299e0(0xc8e76df8);
    iVar26 = 0;
    uVar18 = 1;
    uVar19 = 0;
LAB_031bccf0:
    if (iVar26 <= *(int *)(param_1 + 0x24)) {
      iVar1 = 1;
      iVar16 = *(int *)(param_1 + 0x70);
      if (uVar18 != 1) {
        iVar1 = -1;
        iVar16 = *(int *)(param_1 + 0x80) + -1;
      }
      bVar4 = false;
      iVar15 = iVar16;
      do {
        iVar15 = iVar15 + iVar1;
        puVar12 = (undefined8 *)(*(long *)(param_1 + 0x78) + (long)*(int *)(param_1 + 0x74) * 0x30);
        uStack_228 = (undefined1)puVar12[1];
        uStack_227 = (undefined7)((ulong)puVar12[1] >> 8);
        local_220 = puVar12[2];
        uStack_218 = puVar12[3];
        local_210 = puVar12[4];
        uStack_208 = puVar12[5];
        uVar13 = *puVar12;
        local_230 = (int)uVar13;
        uStack_22c = (undefined1)((ulong)uVar13 >> 0x20);
        uStack_22b = (undefined1)((ulong)uVar13 >> 0x28);
        uStack_22a = (undefined1)((ulong)uVar13 >> 0x30);
        uStack_229 = (undefined1)((ulong)uVar13 >> 0x38);
        uStack_ab = 0;
        uStack_aa = 0;
        cStack_a9 = '\0';
        uStack_a8 = 0;
        uStack_ac = (undefined1)uVar18;
        local_b0 = iVar26;
        FUN_031bb258(param_1,&local_b0);
        cVar3 = cStack_a9;
        local_e0 = CONCAT17(cStack_a9,
                            CONCAT16(uStack_aa,CONCAT15(uStack_ab,CONCAT14(uStack_ac,local_b0))));
        uStack_d8 = CONCAT71(uStack_a7,uStack_a8);
        local_c0 = local_90;
        uStack_b8 = uStack_88;
        local_d0 = local_a0;
        uStack_c8 = uStack_98;
        iVar6 = *(int *)(param_1 + 0x24);
        if (iVar26 < iVar6) {
          if (cStack_a9 == '\0') {
            lVar9 = *(long *)(param_1 + 0x78) + (long)iVar16 * 0x30;
            uVar13 = *(undefined8 *)(lVar9 + 0x10);
            fVar20 = (float)local_a0 - (float)uVar13;
            fVar22 = (float)((ulong)local_a0 >> 0x20) - (float)((ulong)uVar13 >> 0x20);
            fVar23 = (float)uStack_98 - (float)*(undefined8 *)(lVar9 + 0x18);
            fVar20 = fVar20 * fVar20;
            fVar22 = fVar22 * fVar22;
            fVar23 = fVar23 * fVar23;
            fVar21 = fVar20 + fVar22 + fVar23;
            uVar13 = CONCAT44(fVar20 + fVar22 + fVar23,fVar21);
            uVar27 = NEON_frsqrte(uVar13,4);
            fVar20 = (float)uVar27;
            fVar22 = (float)((ulong)uVar27 >> 0x20);
            uVar27 = NEON_frsqrts(uVar13,CONCAT44(fVar22 * fVar22,fVar20 * fVar20),4);
            fVar20 = fVar20 * (float)uVar27;
            fVar22 = fVar22 * (float)((ulong)uVar27 >> 0x20);
            uVar13 = NEON_frsqrts(uVar13,CONCAT44(fVar22 * fVar22,fVar20 * fVar20),4);
            iVar25 = -(uint)(fVar21 <= 0.0);
            fVar21 = fVar21 * (float)uVar13 * fVar20;
            if ((float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                         ~(byte)((uint)iVar25 >> 0x10),
                                         CONCAT11((byte)((uint)fVar21 >> 8) &
                                                  ~(byte)((uint)iVar25 >> 8),
                                                  SUB41(fVar21,0) & ~(byte)iVar25))) < 0.01)
            goto LAB_031bccc4;
          }
          iVar25 = FUN_031bc330(param_1,&local_230,&local_b0);
          if (((cVar3 == '\0') && (iVar26 != 0)) && (iVar25 != 0)) goto LAB_031bccc4;
        }
        local_110 = 0xfffffffe;
        uStack_10c = 0xff;
        uStack_108 = 0;
        local_140 = 0xfffffffe;
        uStack_13c = 0xff;
        uStack_138 = 0;
        if (uVar18 != 1) {
          if (*piVar14 <= iVar15) goto LAB_031bcec0;
LAB_031bce68:
          FUN_031bb3f8(param_1,&local_230,&local_b0);
          goto LAB_031bce78;
        }
        if (*(int *)(param_1 + 0x80) <= iVar15) goto LAB_031bce68;
LAB_031bcec0:
        bVar2 = iVar15 <= *(int *)(param_1 + 0x74);
        if (uVar18 != 1) {
          bVar2 = *(int *)(param_1 + 0x74) <= iVar15;
        }
        iVar25 = iVar16;
        if (!bVar2) {
          iVar25 = iVar15;
        }
        puVar12 = (undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar25 * 0x30);
        uStack_108 = *(undefined1 *)(puVar12 + 1);
        local_110 = (undefined4)*puVar12;
        uStack_10c = (uint)((ulong)*puVar12 >> 0x20);
        uStack_f8 = puVar12[3];
        local_100 = puVar12[2];
        uStack_e8 = puVar12[5];
        local_f0 = puVar12[4];
        iVar25 = iVar15;
        if (!bVar2) {
          iVar25 = iVar16;
        }
        puVar12 = (undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar25 * 0x30);
        uStack_138 = *(undefined1 *)(puVar12 + 1);
        local_140 = (undefined4)*puVar12;
        uStack_13c = (undefined4)((ulong)*puVar12 >> 0x20);
        uStack_128 = puVar12[3];
        local_130 = puVar12[2];
        uStack_118 = puVar12[5];
        local_120 = puVar12[4];
        iVar25 = FUN_031bc330(param_1,&local_b0,&local_110);
        if (iVar25 == 0) {
          iVar6 = FUN_031bc330(param_1,&local_140,&local_110);
          if (iVar6 == 0) {
            if (uVar18 == (uStack_10c & 0xff)) {
              uVar7 = FUN_031bc884(param_1,&local_140,&local_110,&local_230,&local_b0,&local_e0,
                                   iVar26 + -1);
              if ((uVar7 & 1) != 0) {
LAB_031bce78:
                FUN_031ba3d0(piVar14,&local_e0,uVar18);
                bVar5 = FUN_031bc038(param_1,&local_e0,uVar18,iVar26);
                bVar4 = (bool)(bVar5 & 1);
                goto LAB_031bccc4;
              }
            }
            else {
              FUN_031bb3f8(param_1,&local_230,&local_b0);
              FUN_031bb3f8(param_1,&local_140,&local_110);
              uVar17 = FUN_031babf0(param_1,&local_130,&local_100,&local_a0);
              if (uVar17 == uVar18) goto LAB_031bce78;
            }
          }
        }
        else {
          if ((iVar26 != iVar6) &&
             (((iVar26 < 0 || (iVar6 <= iVar26)) ||
              ((*(byte *)(*(long *)(param_1 + 0x40) + (long)iVar26 * 0x80 + 0x10) >> 4 & 1) == 0))))
          goto LAB_031bccc4;
          if (uVar18 == (uStack_10c & 0xff)) {
            iVar6 = FUN_031bbed4(param_1,&local_140,&local_110,&local_b0);
            FUN_031bb3f8(param_1,&local_230,&local_b0);
            if (iVar6 != 0) goto LAB_031bce78;
          }
          else {
            FUN_031bb3f8(param_1,&local_230,&local_b0);
          }
        }
        local_170 = 0xfffffffe;
        uStack_16c = 0xff;
        uStack_168 = 0;
        FUN_031ba5d8(piVar14,uVar18,&local_170);
        if ((*(int *)(param_1 + 0x74) < *(int *)(param_1 + 0x70)) ||
           (*(int *)(param_1 + 0x80) <= *(int *)(param_1 + 0x74))) {
          puVar12 = (undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar15 * 0x30);
          local_1a0 = *puVar12;
          local_198 = puVar12[1];
          uStack_190 = puVar12[2];
          local_188 = puVar12[3];
          local_180 = puVar12[4];
          uStack_178 = puVar12[5];
          local_1c0 = local_160;
          uStack_1b8 = uStack_158;
          local_1d0 = CONCAT44(uStack_16c,local_170);
          uStack_1c8 = CONCAT71(uStack_167,uStack_168);
          local_1b0 = local_150;
          uStack_1a8 = uStack_148;
          FUN_031bb3f8(param_1,&local_1d0,&local_1a0);
          iVar6 = FUN_031bbd64(param_1,&local_1d0,&local_1a0,&local_b0,iVar26 + -1);
          if (iVar6 != 0) goto code_r0x031bd038;
          FUN_031bb9e0(param_1,&local_1d0,&local_1a0);
          *(int *)(param_1 + 0x74) = iVar15;
        }
        iVar16 = iVar16 + iVar1;
      } while( true );
    }
    goto LAB_031bd310;
  }
  uStack_22a = fVar20 < 0.0;
  bVar4 = true;
  local_230 = -1;
  uStack_22b = 1;
  uStack_229 = 0;
  uStack_228 = 0;
  uStack_22c = 0xff;
  uStack_ab = 2;
  cStack_a9 = '\0';
  uStack_a8 = 0;
  uStack_98 = *(undefined8 *)(param_1 + 0xb8);
  local_a0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_ac = 0xff;
  uStack_aa = (float)((ulong)uStack_98 >> 0x20) < 0.0;
  local_220 = uVar13;
  uStack_218 = uVar27;
  local_210 = uVar13;
  uStack_208 = uVar27;
  local_b0 = *(int *)(param_1 + 0x24);
  local_90 = local_a0;
  uStack_88 = uStack_98;
  FUN_031bb9e0(param_1,&local_230,&local_b0);
  plVar8 = *(long **)(param_1 + 0xc0);
  if (*plVar8 != 0) goto LAB_031bd39c;
LAB_031bd390:
  bVar4 = *(int *)((long)plVar8 + 0x14) < (int)plVar8[2];
LAB_031bd39c:
  FUN_031ba39c();
  return bVar4;
code_r0x031bd038:
  FUN_031bb9e0(param_1,&local_230,&local_b0);
  FUN_031ba3d0(piVar14,&local_e0,uVar18);
  bVar4 = (int)local_e0 == *(int *)(param_1 + 0x24);
  FUN_031bb464(param_1,&local_e0,iVar26);
LAB_031bccc4:
  if (uVar19 == 0xffffffff) {
    iVar16 = iVar26 + 1;
    uVar7 = FUN_031bb2ec(param_1,iVar26,1);
    if ((uVar7 & 1) == 0) {
      uVar7 = FUN_031bb2ec(param_1,iVar26,0);
      if ((uVar7 & 1) == 0) {
        uStack_22b = 0;
        uStack_22a = 0;
        uStack_229 = 0;
        uStack_228 = 0;
        local_1fb = 0;
        local_1fc = 1;
        uStack_22c = 0;
        local_230 = iVar16;
        local_200 = iVar16;
        FUN_031bb258(param_1,&local_230);
        puVar12 = (undefined8 *)(*(long *)(param_1 + 0x78) + (long)*(int *)(param_1 + 0x74) * 0x30);
        uStack_a8 = (undefined1)puVar12[1];
        uStack_a7 = (undefined7)((ulong)puVar12[1] >> 8);
        local_a0 = puVar12[2];
        uStack_98 = puVar12[3];
        local_90 = puVar12[4];
        uStack_88 = puVar12[5];
        uVar13 = *puVar12;
        local_b0 = (int)uVar13;
        uStack_ac = (undefined1)((ulong)uVar13 >> 0x20);
        uStack_ab = (undefined1)((ulong)uVar13 >> 0x28);
        uStack_aa = (undefined1)((ulong)uVar13 >> 0x30);
        cStack_a9 = (char)((ulong)uVar13 >> 0x38);
        FUN_031bb3f8(param_1,&local_b0,&local_230);
        fVar20 = (float)local_a0 - (float)local_220;
        fVar22 = (float)((ulong)local_a0 >> 0x20) - (float)((ulong)local_220 >> 0x20);
        fVar23 = (float)uStack_98 - (float)uStack_218;
        fVar20 = fVar20 * fVar20;
        fVar22 = fVar22 * fVar22;
        fVar23 = fVar23 * fVar23;
        fVar21 = fVar20 + fVar22 + fVar23;
        uVar13 = CONCAT44(fVar20 + fVar22 + fVar23,fVar21);
        uVar27 = NEON_frsqrte(uVar13,4);
        fVar20 = (float)uVar27;
        fVar22 = (float)((ulong)uVar27 >> 0x20);
        uVar27 = NEON_frsqrts(uVar13,CONCAT44(fVar22 * fVar22,fVar20 * fVar20),4);
        fVar20 = fVar20 * (float)uVar27;
        fVar22 = fVar22 * (float)((ulong)uVar27 >> 0x20);
        uVar13 = NEON_frsqrts(uVar13,CONCAT44(fVar22 * fVar22,fVar20 * fVar20),4);
        iVar26 = -(uint)(fVar21 <= 0.0);
        fVar21 = fVar21 * (float)uVar13 * fVar20;
        fVar20 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                 CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                          ~(byte)((uint)iVar26 >> 0x10),
                                          CONCAT11((byte)((uint)fVar21 >> 8) &
                                                   ~(byte)((uint)iVar26 >> 8),
                                                   SUB41(fVar21,0) & ~(byte)iVar26)));
        FUN_031bb258(param_1,&local_200);
        puVar12 = (undefined8 *)(*(long *)(param_1 + 0x78) + (long)*(int *)(param_1 + 0x74) * 0x30);
        uStack_a8 = (undefined1)puVar12[1];
        uStack_a7 = (undefined7)((ulong)puVar12[1] >> 8);
        local_a0 = puVar12[2];
        uStack_98 = puVar12[3];
        local_90 = puVar12[4];
        uStack_88 = puVar12[5];
        uVar13 = *puVar12;
        local_b0 = (int)uVar13;
        uStack_ac = (undefined1)((ulong)uVar13 >> 0x20);
        uStack_ab = (undefined1)((ulong)uVar13 >> 0x28);
        uStack_aa = (undefined1)((ulong)uVar13 >> 0x30);
        cStack_a9 = (char)((ulong)uVar13 >> 0x38);
        FUN_031bb3f8(param_1,&local_b0,&local_200);
        fVar21 = (float)local_a0 - (float)local_1f0;
        fVar23 = (float)((ulong)local_a0 >> 0x20) - (float)((ulong)local_1f0 >> 0x20);
        fVar24 = (float)uStack_98 - (float)uStack_1e8;
        fVar21 = fVar21 * fVar21;
        fVar23 = fVar23 * fVar23;
        fVar24 = fVar24 * fVar24;
        fVar22 = fVar21 + fVar23 + fVar24;
        uVar13 = CONCAT44(fVar21 + fVar23 + fVar24,fVar22);
        uVar27 = NEON_frsqrte(uVar13,4);
        fVar21 = (float)uVar27;
        fVar23 = (float)((ulong)uVar27 >> 0x20);
        uVar27 = NEON_frsqrts(uVar13,CONCAT44(fVar23 * fVar23,fVar21 * fVar21),4);
        fVar21 = fVar21 * (float)uVar27;
        fVar23 = fVar23 * (float)((ulong)uVar27 >> 0x20);
        uVar13 = NEON_frsqrts(uVar13,CONCAT44(fVar23 * fVar23,fVar21 * fVar21),4);
        iVar26 = -(uint)(fVar22 <= 0.0);
        fVar22 = fVar22 * (float)uVar13 * fVar21;
        fVar21 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                 CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                          ~(byte)((uint)iVar26 >> 0x10),
                                          CONCAT11((byte)((uint)fVar22 >> 8) &
                                                   ~(byte)((uint)iVar26 >> 8),
                                                   SUB41(fVar22,0) & ~(byte)iVar26)));
        uVar19 = (uint)(fVar21 < fVar20);
        uVar17 = (uint)(fVar20 <= fVar21);
        iVar26 = iVar16;
      }
      else {
        uVar19 = 1;
        uVar17 = 0xffffffff;
        iVar26 = iVar16;
      }
    }
    else {
      uVar19 = 0;
      uVar17 = 0xffffffff;
      iVar26 = iVar16;
    }
  }
  else {
    uVar17 = 0xffffffff;
  }
  FUN_033299e0(0xe7dde9f4);
  uVar18 = uVar19;
  uVar19 = uVar17;
  if (bVar4 != false) goto LAB_031bd310;
  goto LAB_031bccf0;
LAB_031bd310:
  plVar8 = *(long **)(param_1 + 0xc0);
  if (*plVar8 != 0) {
    bVar4 = true;
    goto LAB_031bd39c;
  }
  goto LAB_031bd390;
}


