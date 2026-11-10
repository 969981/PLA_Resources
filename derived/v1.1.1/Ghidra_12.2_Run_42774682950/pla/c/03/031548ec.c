/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031548ec; name: FUN_031548ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_031548ec(undefined1 param_1 [16],float param_2,float param_3,long param_4,uint *param_5,
            undefined8 *param_6,undefined8 param_7,long param_8,undefined8 *param_9,uint *param_10)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  uint uVar3;
  int iVar4;
  undefined1 (*pauVar5) [12];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  float *pfVar27;
  uint uVar28;
  undefined8 *puVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  uint uVar33;
  ulong uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  float fVar51;
  undefined1 auVar50 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined8 uVar61;
  float fVar62;
  undefined8 uVar63;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar64 [16];
  undefined8 uVar68;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_78 [2];
  
  uStack_c8 = param_1._8_8_;
  local_d0 = param_1._0_8_;
  uVar33 = *param_5 & ((int)*param_5 >> 0x1f ^ 0xffffffffU);
  if (*(int *)(param_4 + 0x20) <= (int)uVar33) {
    return 1;
  }
  uVar3 = param_5[2];
  fVar62 = param_1._0_4_ * param_1._0_4_;
  uVar34 = (ulong)uVar33;
  uVar33 = 0xffffffff;
  do {
    lVar26 = *(long *)(param_4 + 0x18);
    uVar24 = *(uint *)(lVar26 + uVar34 * 0x90 + 0x70);
    uVar22 = (ulong)uVar24;
    if (param_8 == 0) {
      lVar23 = _DAT_00000038;
    }
    else {
      lVar23 = *(long *)(param_8 + 0x38);
      uVar22 = uVar22 & 0x3fffff;
      lVar31 = *(long *)(*(long *)(lVar23 + (ulong)(uVar24 >> 0x16) * 0xf0) + 0x20);
      iVar4 = *(int *)(*(long *)(lVar31 + 0x168) + uVar22 * 4);
      lVar30 = (long)iVar4;
      if (iVar4 < 0) {
        if ((*(int *)(lVar31 + 0x108) == 0) ||
           ((*(byte *)(*(long *)(lVar31 + 0x100) + uVar22) & 1) == 0)) {
          if (*(short *)(lVar26 + uVar34 * 0x90 + 0x74) != -1) {
            uVar24 = 0xffffffff;
          }
          uVar22 = (ulong)uVar24;
        }
        else {
          uVar22 = 0xffffffff;
        }
      }
      else {
        do {
          lVar30 = lVar30 + 1;
          if (*(int *)(lVar31 + 0x170) <= lVar30) break;
        } while (*(int *)(*(long *)(lVar31 + 0x168) + lVar30 * 4) == (int)uVar22);
        iVar25 = (int)*(short *)(lVar26 + uVar34 * 0x90 + 0x74);
        if ((iVar25 == -1) || (uVar28 = iVar4 + iVar25, (int)lVar30 <= (int)uVar28)) {
          uVar22 = 0xffffffff;
        }
        else {
          uVar22 = (ulong)(uVar28 | uVar24 & 0xffc00000);
        }
      }
    }
    uVar24 = (uint)uVar22 & 0x3fffff;
    uVar32 = *(undefined8 *)(lVar23 + (uVar22 >> 0x16) * 0xf0);
    local_78[0] = uVar24;
    fVar35 = (float)FUN_03196014(uVar32,local_78,param_7,param_6,&local_90);
    if (fVar35 < fVar62) {
      local_98[0] = uVar24;
      fVar36 = (float)FUN_03196514(uVar32,local_98,param_7,&local_90,&local_90);
      if (fVar36 < param_2) {
        uVar33 = (uint)uVar34;
        if (fVar35 == 0.0) {
          local_d0 = local_90;
          uStack_c8 = uStack_88;
          break;
        }
        uStack_c8 = uStack_88;
        local_d0 = local_90;
        fVar62 = fVar35;
      }
    }
    uVar34 = uVar34 + 1;
  } while ((long)uVar34 < (long)*(int *)(param_4 + 0x20));
  if ((int)uVar33 < 0) {
    return 1;
  }
  param_9[1] = uStack_c8;
  *param_9 = local_d0;
  lVar30 = *(long *)(param_4 + 0x18);
  uVar24 = *(uint *)(lVar30 + (long)(int)uVar33 * 0x90 + 0x70);
  uVar28 = uVar24 >> 0x16;
  lVar23 = (long)(int)uVar33;
  lVar31 = *(long *)(*(long *)(*(long *)(param_8 + 0x38) + (ulong)uVar28 * 0xf0) + 0x20);
  uVar34 = (ulong)uVar24 & 0x3fffff;
  iVar4 = *(int *)(*(long *)(lVar31 + 0x168) + uVar34 * 4);
  lVar26 = (long)iVar4;
  if (iVar4 < 0) {
    if ((*(int *)(lVar31 + 0x108) == 0) ||
       ((*(byte *)(*(long *)(lVar31 + 0x100) + uVar34) & 1) == 0)) {
      if (*(short *)(lVar30 + lVar23 * 0x90 + 0x74) != -1) {
        uVar24 = 0xffffffff;
      }
    }
    else {
      uVar24 = 0xffffffff;
    }
  }
  else {
    do {
      lVar26 = lVar26 + 1;
      if (*(int *)(lVar31 + 0x170) <= lVar26) break;
    } while (*(int *)(*(long *)(lVar31 + 0x168) + lVar26 * 4) == (int)uVar34);
    iVar25 = (int)*(short *)(lVar30 + lVar23 * 0x90 + 0x74);
    if ((iVar25 == -1) || (uVar21 = iVar4 + iVar25, (int)lVar26 <= (int)uVar21)) {
      uVar24 = 0xffffffff;
    }
    else {
      uVar24 = uVar21 | uVar24 & 0xffc00000;
    }
  }
  lVar26 = *(long *)(*(long *)(param_8 + 0x38) + (ulong)(uVar24 >> 0x16) * 0xf0);
  fVar62 = (float)*param_6 - (float)*(undefined8 *)(lVar26 + 0x90);
  fVar36 = (float)((ulong)*param_6 >> 0x20) - (float)((ulong)*(undefined8 *)(lVar26 + 0x90) >> 0x20)
  ;
  fVar38 = (float)param_6[1] - (float)*(undefined8 *)(lVar26 + 0x98);
  pauVar2 = (undefined1 (*) [12])(lVar26 + 0x70);
  uVar47 = (undefined4)((ulong)*(undefined8 *)(lVar26 + 0x78) >> 0x20);
  pauVar5 = (undefined1 (*) [12])(lVar26 + 0x80);
  uVar41 = (undefined4)((ulong)*(undefined8 *)(lVar26 + 0x88) >> 0x20);
  fVar66 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
  pauVar1 = (undefined1 (*) [12])(lVar26 + 0x60);
  uVar44 = (undefined4)((ulong)*(undefined8 *)(lVar26 + 0x68) >> 0x20);
  auVar50._12_4_ = uVar44;
  auVar50._0_12_ = *pauVar1;
  auVar53._12_4_ = uVar44;
  auVar53._0_12_ = *pauVar1;
  auVar50 = NEON_ext(auVar50,auVar53,8,1);
  auVar8._12_4_ = uVar47;
  auVar8._0_12_ = *pauVar2;
  auVar9._12_4_ = uVar47;
  auVar9._0_12_ = *pauVar2;
  auVar53 = NEON_ext(auVar8,auVar9,8,1);
  auVar54._12_4_ = uVar41;
  auVar54._0_12_ = *pauVar5;
  auVar64._12_4_ = uVar41;
  auVar64._0_12_ = *pauVar5;
  auVar54 = NEON_ext(auVar54,auVar64,8,1);
  fVar35 = auVar50._0_4_ * fVar38 +
           (float)*(undefined8 *)*pauVar1 * fVar62 +
           (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) * fVar36;
  fVar37 = auVar53._0_4_ * fVar38 +
           (float)*(undefined8 *)*pauVar2 * fVar62 +
           (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20) * fVar36;
  fVar39 = auVar54._0_4_ * fVar38 + (float)*(undefined8 *)*pauVar5 * fVar62 + fVar66 * fVar36;
  uVar32 = NEON_fmov(0x3f800000,4);
  if ((((int)uVar3 < (int)uVar33) && ((*(byte *)(lVar30 + lVar23 * 0x90 + 0x80) >> 4 & 1) != 0)) &&
     (uVar24 >> 0x16 == uVar28)) {
    puVar29 = (undefined8 *)(lVar30 + lVar23 * 0x90);
    fVar48 = -param_3;
    fVar52 = (float)*puVar29;
    fVar49 = (float)((ulong)*puVar29 >> 0x20);
    fVar20 = *(float *)(puVar29 + 4);
    fVar40 = *(float *)((long)puVar29 + 0x24);
    fVar45 = *(float *)(puVar29 + 5);
    fVar46 = *(float *)((long)puVar29 + 0x2c);
    fVar51 = *(float *)(puVar29 + 2) - fVar52;
    fVar42 = *(float *)((long)puVar29 + 0x14) - fVar49;
    fVar43 = *(float *)(puVar29 + 3) - (float)puVar29[1];
    fVar52 = fVar35 - fVar52;
    fVar49 = fVar37 - fVar49;
    fVar55 = fVar39 - (float)puVar29[1];
    fVar56 = fVar20 * fVar51;
    fVar58 = fVar40 * fVar42;
    fVar59 = fVar45 * fVar43;
    fVar57 = fVar56 + fVar58 + fVar59;
    fVar59 = fVar56 + fVar58 + fVar59;
    fVar51 = fVar51 - fVar20 * fVar57;
    fVar42 = fVar42 - fVar40 * fVar59;
    fVar43 = fVar43 - fVar45 * fVar57;
    fVar56 = fVar51 * fVar51 + fVar42 * fVar42 + fVar43 * fVar43;
    fVar57 = fVar51 * fVar51 + fVar42 * fVar42 + fVar43 * fVar43;
    uVar61 = NEON_frecpe(CONCAT44(fVar57,fVar56),4);
    uVar63 = NEON_frecps(CONCAT44(fVar57,fVar56),uVar61,4);
    fVar58 = (float)uVar61 * (float)uVar63;
    fVar60 = (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar63 >> 0x20);
    uVar61 = NEON_frecps(CONCAT44(fVar57,fVar56),CONCAT44(fVar60,fVar58),4);
    fVar56 = fVar20 * fVar52;
    fVar65 = fVar40 * fVar49;
    fVar67 = fVar45 * fVar55;
    fVar57 = fVar67 + fVar56 + fVar65;
    fVar67 = fVar67 + fVar56 + fVar65;
    fVar52 = fVar52 - fVar20 * fVar57;
    fVar49 = fVar49 - fVar40 * fVar67;
    fVar55 = fVar55 - fVar45 * fVar57;
    fVar56 = fVar51 * fVar52;
    fVar57 = fVar42 * fVar49;
    fVar65 = fVar43 * fVar55;
    uVar61 = NEON_fminnm(CONCAT44(fVar60 * (float)((ulong)uVar61 >> 0x20) *
                                  (fVar56 + fVar57 + fVar65),
                                  fVar58 * (float)uVar61 * (fVar56 + fVar57 + fVar65)),uVar32,4);
    uVar61 = NEON_fmax(uVar61,0,4);
    fVar57 = (float)uVar61;
    fVar58 = (float)((ulong)uVar61 >> 0x20);
    fVar56 = fVar48 + (-param_3 - fVar48) * fVar57;
    fVar52 = fVar52 - fVar51 * fVar57;
    fVar49 = fVar49 - fVar42 * fVar58;
    fVar55 = fVar55 - fVar43 * fVar57;
    fVar51 = fVar20 * fVar52;
    fVar43 = fVar40 * fVar49;
    fVar57 = fVar45 * fVar55;
    fVar42 = fVar51 + fVar43 + fVar57;
    fVar57 = fVar51 + fVar43 + fVar57;
    fVar52 = fVar52 - fVar20 * fVar42;
    fVar49 = fVar49 - fVar40 * fVar57;
    fVar55 = fVar55 - fVar45 * fVar42;
    fVar62 = ((((auVar54._4_4_ * fVar38 + fVar66 * fVar62 + auVar54._4_4_ * fVar36) - fVar48) -
              fVar46 * fVar67) - ((param_3 - fVar48) - fVar46 * fVar59) * fVar58) - fVar46 * fVar57;
    fVar52 = fVar52 * fVar52;
    fVar49 = fVar49 * fVar49;
    fVar55 = fVar55 * fVar55;
    fVar62 = fVar62 * fVar62;
    auVar6._4_4_ = fVar49;
    auVar6._0_4_ = fVar52;
    auVar6._8_4_ = fVar55;
    auVar6._12_4_ = fVar62;
    auVar7._4_4_ = fVar49;
    auVar7._0_4_ = fVar52;
    auVar7._8_4_ = fVar55;
    auVar7._12_4_ = fVar62;
    auVar54 = NEON_ext(auVar6,auVar7,8,1);
    if (fVar52 + fVar49 + auVar54._0_4_ < fVar56 * fVar56) {
      uVar28 = uVar33 + 1;
      uVar21 = uVar28;
      if (*(int *)(param_4 + 0x20) <= (int)uVar28) {
        return 1;
      }
      goto LAB_03154b58;
    }
  }
  pfVar27 = (float *)(lVar30 + lVar23 * 0x90 + -0x40);
  lVar26 = 0;
  do {
    lVar30 = lVar26;
    if (lVar23 + lVar30 <= (long)(int)uVar3 + 1) break;
    fVar45 = (float)((ulong)*(undefined8 *)(pfVar27 + -8) >> 0x20) * fVar35;
    fVar46 = (float)*(undefined8 *)(pfVar27 + -6) * fVar35;
    fVar48 = (float)((ulong)*(undefined8 *)(pfVar27 + -6) >> 0x20) * fVar35;
    fVar51 = pfVar27[-2] * fVar37;
    fVar52 = pfVar27[-1] * fVar37;
    fVar40 = pfVar27[3] * fVar39;
    fVar36 = pfVar27[-0x14];
    fVar38 = pfVar27[-0x13];
    fVar66 = pfVar27[-0x12];
    fVar20 = pfVar27[-0x11];
    fVar62 = pfVar27[-0xd];
    fVar35 = pfVar27[4] + (float)*(undefined8 *)(pfVar27 + -8) * fVar35 + pfVar27[-4] * fVar37 +
             *pfVar27 * fVar39;
    fVar37 = pfVar27[5] + fVar45 + pfVar27[-3] * fVar37 + pfVar27[1] * fVar39;
    fVar39 = pfVar27[6] + fVar46 + fVar51 + pfVar27[2] * fVar39;
    fVar40 = pfVar27[7] + fVar48 + fVar52 + fVar40;
    fVar45 = pfVar27[-0x10] - fVar35;
    fVar48 = pfVar27[-0xf] - fVar37;
    fVar52 = pfVar27[-0xe] - fVar39;
    fVar49 = fVar62 - fVar40;
    auVar10._4_4_ = fVar48;
    auVar10._0_4_ = fVar45;
    auVar10._8_4_ = fVar52;
    auVar10._12_4_ = fVar49;
    auVar11._4_4_ = fVar48;
    auVar11._0_4_ = fVar45;
    auVar11._8_4_ = fVar52;
    auVar11._12_4_ = fVar49;
    auVar54 = NEON_ext(auVar10,auVar11,4,1);
    fVar55 = fVar36 - fVar35;
    fVar57 = fVar38 - fVar37;
    fVar59 = fVar66 - fVar39;
    fVar60 = fVar20 - fVar40;
    auVar14._4_4_ = fVar57;
    auVar14._0_4_ = fVar55;
    auVar14._8_4_ = fVar59;
    auVar14._12_4_ = fVar60;
    auVar15._4_4_ = fVar57;
    auVar15._0_4_ = fVar55;
    auVar15._8_4_ = fVar59;
    auVar15._12_4_ = fVar60;
    auVar64 = NEON_ext(auVar14,auVar15,4,1);
    fVar42 = (float)*(undefined8 *)(pfVar27 + -10);
    fVar43 = (float)((ulong)*(undefined8 *)(pfVar27 + -10) >> 0x20);
    fVar46 = (float)*(undefined8 *)(pfVar27 + -0xc);
    fVar51 = (float)((ulong)*(undefined8 *)(pfVar27 + -0xc) >> 0x20);
    fVar56 = fVar45 * auVar64._0_4_ - fVar55 * auVar54._0_4_;
    fVar58 = fVar48 * auVar64._4_4_ - fVar57 * auVar54._4_4_;
    fVar45 = fVar52 * fVar55 - fVar59 * fVar45;
    fVar48 = fVar49 * fVar57 - fVar60 * fVar48;
    auVar16._4_4_ = fVar58;
    auVar16._0_4_ = fVar56;
    auVar16._8_4_ = fVar45;
    auVar16._12_4_ = fVar48;
    auVar17._4_4_ = fVar58;
    auVar17._0_4_ = fVar56;
    auVar17._8_4_ = fVar45;
    auVar17._12_4_ = fVar48;
    auVar54 = NEON_ext(auVar16,auVar17,4,1);
    fVar45 = fVar46 * auVar54._0_4_;
    fVar48 = fVar51 * auVar54._4_4_;
    auVar18._4_4_ = fVar48;
    auVar18._0_4_ = fVar45;
    auVar18._8_4_ = fVar42 * fVar56;
    auVar18._12_4_ = fVar43 * fVar58;
    auVar19._4_4_ = fVar48;
    auVar19._0_4_ = fVar45;
    auVar19._8_4_ = fVar42 * fVar56;
    auVar19._12_4_ = fVar43 * fVar58;
    auVar54 = NEON_ext(auVar18,auVar19,8,1);
    if (0.0 < fVar45 + fVar48 + auVar54._0_4_) break;
    fVar48 = pfVar27[-0x10] - fVar36;
    fVar52 = pfVar27[-0xf] - fVar38;
    fVar49 = pfVar27[-0xe] - fVar66;
    pfVar27 = pfVar27 + -0x24;
    fVar45 = fVar46 * fVar48;
    fVar56 = fVar51 * fVar52;
    fVar57 = fVar42 * fVar49;
    fVar55 = fVar57 + fVar45 + fVar56;
    fVar57 = fVar57 + fVar45 + fVar56;
    fVar58 = fVar46 * (fVar35 - fVar36);
    fVar59 = fVar51 * (fVar37 - fVar38);
    fVar60 = fVar42 * (fVar39 - fVar66);
    fVar48 = fVar48 - fVar46 * fVar55;
    fVar52 = fVar52 - fVar51 * fVar57;
    fVar49 = fVar49 - fVar42 * fVar55;
    uVar61 = CONCAT44(fVar48 * fVar48 + fVar52 * fVar52 + fVar49 * fVar49,
                      fVar48 * fVar48 + fVar52 * fVar52 + fVar49 * fVar49);
    uVar63 = NEON_frecpe(uVar61,4);
    uVar68 = NEON_frecps(uVar61,uVar63,4);
    fVar45 = (float)uVar63 * (float)uVar68;
    fVar55 = (float)((ulong)uVar63 >> 0x20) * (float)((ulong)uVar68 >> 0x20);
    fVar56 = fVar60 + fVar58 + fVar59;
    fVar60 = fVar60 + fVar58 + fVar59;
    uVar61 = NEON_frecps(uVar61,CONCAT44(fVar55,fVar45),4);
    fVar36 = (fVar35 - fVar36) - fVar46 * fVar56;
    fVar38 = (fVar37 - fVar38) - fVar51 * fVar60;
    fVar66 = (fVar39 - fVar66) - fVar42 * fVar56;
    fVar56 = fVar48 * fVar36;
    fVar58 = fVar52 * fVar38;
    fVar59 = fVar49 * fVar66;
    uVar61 = NEON_fminnm(CONCAT44(fVar55 * (float)((ulong)uVar61 >> 0x20) *
                                  (fVar56 + fVar58 + fVar59),
                                  fVar45 * (float)uVar61 * (fVar56 + fVar58 + fVar59)),uVar32,4);
    uVar61 = NEON_fmax(uVar61,0,4);
    fVar55 = (float)uVar61;
    fVar56 = (float)((ulong)uVar61 >> 0x20);
    fVar45 = fVar20 + (-fVar62 - fVar20) * fVar55;
    fVar36 = fVar36 - fVar48 * fVar55;
    fVar38 = fVar38 - fVar52 * fVar56;
    fVar66 = fVar66 - fVar49 * fVar55;
    fVar48 = fVar46 * fVar36;
    fVar49 = fVar51 * fVar38;
    fVar55 = fVar42 * fVar66;
    fVar52 = fVar48 + fVar49 + fVar55;
    fVar55 = fVar48 + fVar49 + fVar55;
    fVar36 = fVar36 - fVar46 * fVar52;
    fVar38 = fVar38 - fVar51 * fVar55;
    fVar66 = fVar66 - fVar42 * fVar52;
    fVar62 = (((fVar40 - fVar20) - fVar43 * fVar60) - ((fVar62 - fVar20) - fVar43 * fVar57) * fVar56
             ) - fVar43 * fVar55;
    fVar36 = fVar36 * fVar36;
    fVar38 = fVar38 * fVar38;
    fVar66 = fVar66 * fVar66;
    fVar62 = fVar62 * fVar62;
    auVar12._4_4_ = fVar38;
    auVar12._0_4_ = fVar36;
    auVar12._8_4_ = fVar66;
    auVar12._12_4_ = fVar62;
    auVar13._4_4_ = fVar38;
    auVar13._0_4_ = fVar36;
    auVar13._8_4_ = fVar66;
    auVar13._12_4_ = fVar62;
    auVar54 = NEON_ext(auVar12,auVar13,8,1);
    lVar26 = lVar30 + -1;
  } while (fVar36 + fVar38 + auVar54._0_4_ < fVar45 * fVar45);
  uVar28 = uVar33;
  uVar21 = uVar33 + (int)lVar30;
  uVar33 = uVar3;
LAB_03154b58:
  *param_5 = uVar28;
  param_5[1] = uVar21;
  param_5[2] = uVar33;
  *param_10 = uVar24;
  return 0;
}


