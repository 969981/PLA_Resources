/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de9000; name: FUN_02de9000
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02de9000(float param_1,undefined1 param_2 [16],long param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  long lVar14;
  int *piVar15;
  undefined1 (*pauVar16) [12];
  ushort *puVar17;
  ulong uVar18;
  ushort *puVar19;
  undefined1 *puVar20;
  int *piVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  ushort uVar24;
  long *plVar25;
  undefined1 *puVar26;
  uint *puVar27;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_var;
  float extraout_var_00;
  undefined8 extraout_d0;
  undefined1 auVar28 [12];
  undefined1 auVar30 [16];
  float fVar37;
  float fVar41;
  float fVar42;
  undefined1 auVar31 [16];
  float fVar38;
  float fVar43;
  undefined1 auVar32 [16];
  float fVar39;
  undefined1 auVar33 [16];
  float fVar40;
  undefined1 auVar34 [16];
  undefined1 auVar29 [12];
  float extraout_var_01;
  float extraout_var_02;
  float extraout_var_03;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar49 [12];
  undefined8 uVar47;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar60;
  undefined1 auVar55 [16];
  int iVar61;
  int iVar63;
  undefined1 auVar50 [12];
  undefined8 uVar48;
  int iVar64;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  undefined1 auVar59 [16];
  undefined8 uVar65;
  undefined1 auVar67 [12];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar68 [12];
  undefined1 auVar72 [16];
  undefined8 uVar66;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  byte bVar88;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  float fVar89;
  float fVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  byte bVar103;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  float fVar104;
  float fVar105;
  byte bVar109;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  float fVar110;
  float fVar111;
  byte bVar115;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  float fVar116;
  float fVar117;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined4 uVar121;
  undefined4 uVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float local_110;
  float fStack_10c;
  float fStack_108;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  int *local_a0;
  undefined8 uStack_98;
  
  if ((char)param_4[0xf] == '\0') {
    return;
  }
  if (0.0 <= (float)param_4[0xe]) {
    param_4[0xe] = (uint)((float)param_4[0xe] + param_1);
  }
  switch(*param_4) {
  case 0:
    lVar14 = FUN_02b6962c(*(undefined8 *)(param_3 + 0x90),(short)param_4[6]);
    fVar46 = (float)CONCAT13(*(byte *)(lVar14 + 0x33) & (byte)((ulong)_DAT_038897c0 >> 0x18),
                             CONCAT12(*(byte *)(lVar14 + 0x32) &
                                      (byte)((ulong)_DAT_038897c0 >> 0x10),
                                      CONCAT11(*(byte *)(lVar14 + 0x31) &
                                               (byte)((ulong)_DAT_038897c0 >> 8),
                                               *(byte *)(lVar14 + 0x30) & (byte)_DAT_038897c0)));
    auVar28._0_8_ =
         CONCAT17(*(byte *)(lVar14 + 0x37) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                  CONCAT16(*(byte *)(lVar14 + 0x36) & (byte)((ulong)_DAT_038897c0 >> 0x30),
                           CONCAT15(*(byte *)(lVar14 + 0x35) & (byte)((ulong)_DAT_038897c0 >> 0x28),
                                    CONCAT14(*(byte *)(lVar14 + 0x34) &
                                             (byte)((ulong)_DAT_038897c0 >> 0x20),fVar46))));
    auVar28[8] = *(byte *)(lVar14 + 0x38) & (byte)_UNK_038897c8;
    auVar28[9] = *(byte *)(lVar14 + 0x39) & (byte)((ulong)_UNK_038897c8 >> 8);
    auVar28[10] = *(byte *)(lVar14 + 0x3a) & (byte)((ulong)_UNK_038897c8 >> 0x10);
    auVar28[0xb] = *(byte *)(lVar14 + 0x3b) & (byte)((ulong)_UNK_038897c8 >> 0x18);
    auVar30[0xc] = *(byte *)(lVar14 + 0x3c) & (byte)((ulong)_UNK_038897c8 >> 0x20);
    auVar30._0_12_ = auVar28;
    auVar30[0xd] = *(byte *)(lVar14 + 0x3d) & (byte)((ulong)_UNK_038897c8 >> 0x28);
    auVar30[0xe] = *(byte *)(lVar14 + 0x3e) & (byte)((ulong)_UNK_038897c8 >> 0x30);
    auVar30[0xf] = *(byte *)(lVar14 + 0x3f) & (byte)((ulong)_UNK_038897c8 >> 0x38);
    if ((0.0 < param_1) && (*(char *)(param_3 + 0x280) == '\0')) {
      fVar46 = fVar46 - (float)param_4[8];
      fVar45 = (float)((ulong)auVar28._0_8_ >> 0x20) - (float)param_4[9];
      fVar39 = auVar28._8_4_ - (float)param_4[10];
      fVar37 = auVar30._12_4_ - (float)param_4[0xb];
      auVar51._0_4_ = fVar46 * fVar46;
      auVar51._4_4_ = fVar45 * fVar45;
      auVar51._8_4_ = fVar39 * fVar39;
      auVar51._12_4_ = fVar37 * fVar37;
      auVar76 = NEON_ext(auVar51,auVar51,8,1);
      param_4[0xc] = (uint)(SQRT(auVar76._0_4_ + auVar51._0_4_ + auVar76._4_4_ + auVar51._4_4_) /
                           param_1);
    }
    *(long *)(param_4 + 10) = auVar30._8_8_;
    *(undefined8 *)(param_4 + 8) = auVar28._0_8_;
    cVar4 = *(char *)(param_3 + 0x280);
    goto joined_r0x02de96b8;
  case 1:
    lVar14 = FUN_02b6962c(*(undefined8 *)(param_3 + 0x90),(short)param_4[6]);
    piVar15 = *(int **)(param_4 + 4);
    puVar17 = (ushort *)((long)piVar15 - (long)*piVar15);
    if (*puVar17 < 0xb) {
      pauVar16 = (undefined1 (*) [12])0x0;
    }
    else {
      pauVar16 = (undefined1 (*) [12])0x0;
      if (puVar17[5] != 0) {
        pauVar16 = (undefined1 (*) [12])((long)piVar15 + (ulong)puVar17[5]);
      }
    }
    fVar45 = (float)CONCAT13(*(byte *)(lVar14 + 0x33) & (byte)((ulong)_DAT_038897c0 >> 0x18),
                             CONCAT12(*(byte *)(lVar14 + 0x32) &
                                      (byte)((ulong)_DAT_038897c0 >> 0x10),
                                      CONCAT11(*(byte *)(lVar14 + 0x31) &
                                               (byte)((ulong)_DAT_038897c0 >> 8),
                                               *(byte *)(lVar14 + 0x30) & (byte)_DAT_038897c0)));
    auVar29._0_8_ =
         CONCAT17(*(byte *)(lVar14 + 0x37) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                  CONCAT16(*(byte *)(lVar14 + 0x36) & (byte)((ulong)_DAT_038897c0 >> 0x30),
                           CONCAT15(*(byte *)(lVar14 + 0x35) & (byte)((ulong)_DAT_038897c0 >> 0x28),
                                    CONCAT14(*(byte *)(lVar14 + 0x34) &
                                             (byte)((ulong)_DAT_038897c0 >> 0x20),fVar45))));
    auVar29[8] = *(byte *)(lVar14 + 0x38) & (byte)_UNK_038897c8;
    auVar29[9] = *(byte *)(lVar14 + 0x39) & (byte)((ulong)_UNK_038897c8 >> 8);
    auVar29[10] = *(byte *)(lVar14 + 0x3a) & (byte)((ulong)_UNK_038897c8 >> 0x10);
    auVar29[0xb] = *(byte *)(lVar14 + 0x3b) & (byte)((ulong)_UNK_038897c8 >> 0x18);
    auVar35[0xc] = *(byte *)(lVar14 + 0x3c) & (byte)((ulong)_UNK_038897c8 >> 0x20);
    auVar35._0_12_ = auVar29;
    auVar35[0xd] = *(byte *)(lVar14 + 0x3d) & (byte)((ulong)_UNK_038897c8 >> 0x28);
    auVar35[0xe] = *(byte *)(lVar14 + 0x3e) & (byte)((ulong)_UNK_038897c8 >> 0x30);
    auVar35[0xf] = *(byte *)(lVar14 + 0x3f) & (byte)((ulong)_UNK_038897c8 >> 0x38);
    fVar46 = (float)((ulong)auVar29._0_8_ >> 0x20);
    if ((ulong)puVar17[4] == 0) {
switchD_02de9604_caseD_0:
      auVar49 = *pauVar16;
      fVar45 = fVar45 - auVar49._0_4_;
      fVar46 = fVar46 - auVar49._4_4_;
      fVar39 = auVar29._8_4_ - auVar49._8_4_;
      fVar37 = auVar35._12_4_ - 0.0;
      auVar36._0_4_ = fVar45 * fVar45;
      auVar36._4_4_ = fVar46 * fVar46;
      auVar36._8_4_ = fVar39 * fVar39;
      auVar36._12_4_ = fVar37 * fVar37;
      auVar76 = NEON_ext(auVar36,auVar36,8,1);
      param_4[0xc] = (uint)SQRT(auVar76._0_4_ + auVar36._0_4_ + auVar76._4_4_ + auVar36._4_4_);
      cVar4 = *(char *)(param_3 + 0x280);
      goto joined_r0x02de96b8;
    }
    switch(*(undefined4 *)((long)piVar15 + (ulong)puVar17[4])) {
    case 0:
      goto switchD_02de9604_caseD_0;
    case 1:
      fVar46 = ABS(fVar45 - *(float *)*pauVar16);
      goto LAB_02de97bc;
    case 2:
      fVar45 = *(float *)(*pauVar16 + 4);
      break;
    case 3:
      fVar45 = *(float *)(*pauVar16 + 8);
      fVar46 = auVar29._8_4_;
      break;
    default:
      goto switchD_02de9078_default;
    }
    fVar46 = ABS(fVar46 - fVar45);
    goto LAB_02de97bc;
  case 2:
    auVar76 = FUN_02b6937c(*(undefined8 *)(param_3 + 0x90),(short)param_4[6]);
    uStack_98 = auVar76._8_8_;
    local_a0 = auVar76._0_8_;
    FUN_0098fad4(&local_a0);
    fVar46 = extraout_s0_00 * 180.0 * 0.31830987;
    fVar45 = extraout_var_00 * 180.0 * 0.31830987;
    fVar39 = extraout_var_02 * 180.0 * 0.31830987;
    fVar37 = extraout_var_03 * 180.0 * 0.31830987;
    if ((0.0 < param_1) && (*(char *)(param_3 + 0x280) == '\0')) {
      piVar15 = *(int **)(param_4 + 4);
      fVar40 = 0.0;
      if (8 < *(ushort *)((long)piVar15 - (long)*piVar15)) {
        uVar18 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[4];
        if (uVar18 != 0) {
          uVar3 = *(int *)((long)piVar15 + uVar18) - 1;
          if (uVar3 < 3) {
            fVar40 = ABS(*(float *)((ulong)&local_b0 | ((long)(int)uVar3 & 3U) << 2) -
                         (float)param_4[(long)(int)uVar3 + 8]);
            local_b0 = fVar46;
            fStack_ac = fVar45;
            fStack_a8 = fVar39;
            fStack_a4 = fVar37;
            if (360.0 <= fVar40) {
              fVar40 = fmodf(fVar40,360.0);
            }
          }
        }
      }
      if (180.0 <= fVar40) {
        fVar40 = 360.0 - fVar40;
      }
      param_4[0xc] = (uint)(fVar40 / param_1);
    }
    param_4[10] = (uint)fVar39;
    param_4[0xb] = (uint)fVar37;
    param_4[8] = (uint)fVar46;
    param_4[9] = (uint)fVar45;
    cVar4 = *(char *)(param_3 + 0x280);
    goto joined_r0x02de96b8;
  case 3:
    lVar14 = FUN_02b6962c(*(undefined8 *)(param_3 + 0x90),(short)param_4[6]);
    auVar76 = *(undefined1 (*) [16])(lVar14 + 0x30);
    lVar14 = FUN_02b6962c(*(undefined8 *)(param_3 + 0x90),*(undefined2 *)((long)param_4 + 0x1a));
    auVar124 = *(undefined1 (*) [16])(lVar14 + 0x30);
    lVar14 = FUN_02b6962c(*(undefined8 *)(param_3 + 0x90),(short)param_4[7]);
    uVar91 = param_2._0_8_;
    piVar15 = *(int **)(param_4 + 4);
    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 0xd) ||
       (uVar18 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[6], uVar18 == 0)) break;
    uVar3 = *(uint *)((long)piVar15 + uVar18);
    uVar96 = extraout_d0;
    if (uVar3 < 4) {
      fVar46 = *(float *)(lVar14 + 0x38);
      local_d0 = auVar124._0_4_;
      fStack_cc = auVar124._4_4_;
      fStack_c8 = auVar124._8_4_;
      local_c0 = auVar76._0_4_;
      fStack_bc = auVar76._4_4_;
      fStack_b8 = auVar76._8_4_;
      switch(uVar3) {
      case 0:
        goto switchD_02de9078_default;
      case 1:
        uVar96 = CONCAT44(fStack_c8 - fStack_b8,local_d0 - local_c0);
        fStack_bc = fStack_b8;
        break;
      case 2:
        uVar96 = CONCAT44(fStack_c8 - fStack_b8,fStack_cc - fStack_bc);
        local_c0 = *(float *)(lVar14 + 0x34) - fStack_bc;
        fVar46 = fVar46 - fStack_b8;
        goto LAB_02de9824;
      case 3:
        uVar96 = CONCAT44(fStack_cc - fStack_bc,local_d0 - local_c0);
        fVar46 = *(float *)(lVar14 + 0x34);
      }
      local_c0 = *(float *)(lVar14 + 0x30) - local_c0;
      fVar46 = fVar46 - fStack_bc;
LAB_02de9824:
      uVar91 = CONCAT44(fVar46,local_c0);
    }
    fVar45 = (float)uVar96 * (float)uVar96;
    fVar39 = (float)((ulong)uVar96 >> 0x20);
    fVar39 = fVar39 * fVar39;
    fVar46 = fVar45 + fVar39;
    fVar45 = fVar45 + fVar39;
    if (fVar46 != 0.0) {
      fVar37 = (float)uVar91 * (float)uVar91;
      fVar40 = (float)((ulong)uVar91 >> 0x20);
      fVar40 = fVar40 * fVar40;
      fVar39 = fVar37 + fVar40;
      fVar37 = fVar37 + fVar40;
      if (fVar39 != 0.0) {
        uVar96 = NEON_frsqrte(CONCAT44(fVar45,fVar46),4);
        fVar42 = (float)((ulong)uVar96 >> 0x20);
        uVar91 = NEON_frsqrts(uVar96,CONCAT44(fVar45 * fVar42,fVar46 * (float)uVar96),4);
        fVar40 = (float)uVar96 * (float)uVar91;
        fVar42 = fVar42 * (float)((ulong)uVar91 >> 0x20);
        NEON_frsqrts(CONCAT44(fVar42,fVar40),CONCAT44(fVar45 * fVar42,fVar46 * fVar40),4);
        uVar91 = NEON_frsqrte(CONCAT44(fVar37,fVar39),4);
        fVar45 = (float)((ulong)uVar91 >> 0x20);
        uVar96 = NEON_frsqrts(uVar91,CONCAT44(fVar37 * fVar45,fVar39 * (float)uVar91),4);
        fVar46 = (float)uVar91 * (float)uVar96;
        fVar45 = fVar45 * (float)((ulong)uVar96 >> 0x20);
        NEON_frsqrts(CONCAT44(fVar45,fVar46),CONCAT44(fVar37 * fVar45,fVar39 * fVar46),4);
        fVar45 = (float)FUN_00aacd40();
        piVar15 = *(int **)(param_4 + 4);
        fVar46 = fVar45 + -360.0;
        if (fVar45 <= 180.0) {
          fVar46 = fVar45;
        }
        if (0xe < *(ushort *)((long)piVar15 - (long)*piVar15)) {
          uVar18 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[7];
          if (uVar18 != 0) {
            if (*(char *)((long)piVar15 + uVar18) != '\0') {
              fVar46 = ABS(fVar46);
            }
          }
        }
        param_4[0xc] = (uint)fVar46;
      }
    }
    break;
  case 4:
    pbVar13 = (byte *)FUN_02b6962c(*(undefined8 *)(param_3 + 0x90),(short)param_4[6]);
    uVar48 = DAT_0388a888;
    uVar12 = DAT_0388a880;
    uVar11 = DAT_0388a758;
    uVar94 = DAT_0388a710;
    uVar10 = DAT_0388a700;
    uVar95 = DAT_0388a640;
    uVar66 = DAT_0388a590;
    bVar88 = (byte)_DAT_038897c0;
    bVar100 = (byte)((ulong)_DAT_038897c0 >> 8);
    bVar101 = (byte)((ulong)_DAT_038897c0 >> 0x10);
    bVar102 = (byte)((ulong)_DAT_038897c0 >> 0x18);
    fVar60 = (float)CONCAT13(pbVar13[3] & bVar102,
                             CONCAT12(pbVar13[2] & bVar101,
                                      CONCAT11(pbVar13[1] & bVar100,*pbVar13 & bVar88)));
    bVar103 = (byte)((ulong)_DAT_038897c0 >> 0x20);
    bVar106 = (byte)((ulong)_DAT_038897c0 >> 0x28);
    bVar107 = (byte)((ulong)_DAT_038897c0 >> 0x30);
    bVar108 = (byte)((ulong)_DAT_038897c0 >> 0x38);
    auVar75._0_8_ =
         CONCAT17(pbVar13[7] & bVar108,
                  CONCAT16(pbVar13[6] & bVar107,
                           CONCAT15(pbVar13[5] & bVar106,CONCAT14(pbVar13[4] & bVar103,fVar60))));
    bVar109 = (byte)_UNK_038897c8;
    auVar75[8] = pbVar13[8] & bVar109;
    bVar112 = (byte)((ulong)_UNK_038897c8 >> 8);
    auVar75[9] = pbVar13[9] & bVar112;
    bVar113 = (byte)((ulong)_UNK_038897c8 >> 0x10);
    auVar75[10] = pbVar13[10] & bVar113;
    bVar114 = (byte)((ulong)_UNK_038897c8 >> 0x18);
    auVar75[0xb] = pbVar13[0xb] & bVar114;
    bVar115 = (byte)((ulong)_UNK_038897c8 >> 0x20);
    auVar75[0xc] = pbVar13[0xc] & bVar115;
    bVar118 = (byte)((ulong)_UNK_038897c8 >> 0x28);
    auVar75[0xd] = pbVar13[0xd] & bVar118;
    bVar119 = (byte)((ulong)_UNK_038897c8 >> 0x30);
    auVar75[0xe] = pbVar13[0xe] & bVar119;
    bVar120 = (byte)((ulong)_UNK_038897c8 >> 0x38);
    auVar75[0xf] = pbVar13[0xf] & bVar120;
    fVar38 = (float)CONCAT13(pbVar13[0x13] & bVar102,
                             CONCAT12(pbVar13[0x12] & bVar101,
                                      CONCAT11(pbVar13[0x11] & bVar100,pbVar13[0x10] & bVar88)));
    auVar49._0_8_ =
         CONCAT17(pbVar13[0x17] & bVar108,
                  CONCAT16(pbVar13[0x16] & bVar107,
                           CONCAT15(pbVar13[0x15] & bVar106,CONCAT14(pbVar13[0x14] & bVar103,fVar38)
                                   )));
    auVar49[8] = pbVar13[0x18] & bVar109;
    auVar49[9] = pbVar13[0x19] & bVar112;
    auVar49[10] = pbVar13[0x1a] & bVar113;
    auVar49[0xb] = pbVar13[0x1b] & bVar114;
    auVar67._0_8_ =
         CONCAT17(pbVar13[0x27] & bVar108,
                  CONCAT16(pbVar13[0x26] & bVar107,
                           CONCAT15(pbVar13[0x25] & bVar106,
                                    CONCAT14(pbVar13[0x24] & bVar103,
                                             CONCAT13(pbVar13[0x23] & bVar102,
                                                      CONCAT12(pbVar13[0x22] & bVar101,
                                                               CONCAT11(pbVar13[0x21] & bVar100,
                                                                        pbVar13[0x20] & bVar88))))))
                 );
    auVar67[8] = pbVar13[0x28] & bVar109;
    auVar67[9] = pbVar13[0x29] & bVar112;
    auVar67[10] = pbVar13[0x2a] & bVar113;
    auVar67[0xb] = pbVar13[0x2b] & bVar114;
    fVar39 = (float)_DAT_03889820;
    fVar40 = (float)((ulong)_DAT_03889820 >> 0x20);
    fVar62 = (float)_UNK_03889828;
    fVar41 = (float)((ulong)_UNK_03889828 >> 0x20);
    fVar42 = (float)((ulong)auVar49._0_8_ >> 0x20);
    fVar89 = (float)_DAT_0388a450;
    fVar104 = (float)((ulong)_DAT_0388a450 >> 0x20);
    fVar110 = (float)_UNK_0388a458;
    fVar116 = (float)((ulong)_UNK_0388a458 >> 0x20);
    fVar43 = auVar67._8_4_;
    fVar90 = (float)_DAT_03889eb0;
    fVar105 = (float)((ulong)_DAT_03889eb0 >> 0x20);
    fVar111 = (float)_UNK_03889eb8;
    fVar117 = (float)((ulong)_UNK_03889eb8 >> 0x20);
    auVar97 = NEON_fmov(0x3f800000,4);
    fVar46 = fVar39 * fVar60 + fVar89 * fVar42 + fVar90 * fVar43 + auVar97._0_4_;
    fVar45 = fVar40 * fVar60 + fVar104 * fVar42 + fVar105 * fVar43 + auVar97._4_4_;
    fVar37 = fVar62 * fVar60 + fVar110 * fVar42 + fVar111 * fVar43 + auVar97._8_4_;
    fVar42 = fVar41 * fVar60 + fVar116 * fVar42 + fVar117 * fVar43 + auVar97._12_4_;
    uVar91 = NEON_ext(auVar75._0_8_,auVar67._0_8_,4,1);
    auVar76 = NEON_ext(auVar75,auVar75,8,1);
    fVar43 = (float)((ulong)auVar67._0_8_ >> 0x20);
    auVar69._0_4_ = (float)uVar91 + fVar38;
    fVar60 = (float)((ulong)uVar91 >> 0x20);
    auVar69._4_4_ = fVar60 + auVar76._0_4_;
    auVar69._8_4_ = auVar49._8_4_ + fVar43;
    auVar69._12_4_ = 0;
    auVar77._0_4_ = (float)uVar91 - fVar38;
    auVar77._4_4_ = fVar60 - auVar76._0_4_;
    auVar77._8_4_ = auVar49._8_4_ - fVar43;
    auVar77._12_4_ = 0;
    uVar47 = a64_TBL(ZEXT816(0),auVar69,auVar77,DAT_0388a888);
    uVar92 = a64_TBL(ZEXT816(0),auVar69,auVar77,DAT_0388a710);
    uVar91 = a64_TBL(ZEXT816(0),auVar69,auVar77,DAT_0388a640);
    uVar121 = (undefined4)((ulong)uVar47 >> 0x20);
    uVar122 = (undefined4)((ulong)uVar92 >> 0x20);
    uVar93 = a64_TBL(ZEXT816(0),auVar69,auVar77,DAT_0388a758);
    auVar98._0_8_ = a64_TBL(ZEXT816(0),auVar69,auVar77,DAT_0388a880);
    uVar96 = a64_TBL(ZEXT816(0),auVar69,auVar77,DAT_0388a700);
    uVar65 = a64_TBL(ZEXT816(0),auVar69,auVar77,DAT_0388a590);
    auVar78._4_4_ = fVar45;
    auVar78._0_4_ = fVar45;
    auVar78._8_4_ = fVar45;
    auVar78._12_4_ = fVar45;
    auVar52._0_4_ = (undefined4)uVar47;
    auVar52._4_4_ = fVar45;
    auVar52._8_8_ = uVar93;
    auVar128._4_4_ = fVar46;
    auVar128._0_4_ = fVar46;
    auVar128._8_4_ = fVar46;
    auVar128._12_4_ = fVar46;
    auVar98._12_4_ = (undefined4)((ulong)uVar91 >> 0x20);
    auVar98._8_4_ = fVar37;
    auVar123._0_8_ = CONCAT44(-(uint)(fVar46 <= fVar45),-(uint)(fVar46 <= fVar45));
    auVar123._8_4_ = -(uint)(fVar46 <= fVar45);
    auVar123._12_4_ = -(uint)(fVar46 <= fVar45);
    auVar127._8_8_ = auVar123._8_8_;
    auVar127._0_8_ = auVar123._0_8_;
    auVar76._4_4_ = uVar121;
    auVar76._0_4_ = fVar46;
    auVar76._8_4_ = (int)uVar92;
    auVar76._12_4_ = uVar122;
    auVar124._4_4_ = uVar121;
    auVar124._0_4_ = fVar46;
    auVar124._8_4_ = (int)uVar92;
    auVar124._12_4_ = uVar122;
    auVar124 = auVar124 ^ (auVar76 ^ auVar52) & auVar123;
    auVar53._4_4_ = fVar37;
    auVar53._0_4_ = fVar37;
    auVar53._8_4_ = fVar37;
    auVar53._12_4_ = fVar37;
    auVar128 = auVar128 ^ (auVar128 ^ auVar78) & auVar127;
    auVar70._0_8_ = CONCAT44(-(uint)(auVar128._4_4_ <= fVar37),-(uint)(auVar128._0_4_ <= fVar37));
    auVar70._8_4_ = -(uint)(auVar128._8_4_ <= fVar37);
    auVar70._12_4_ = -(uint)(auVar128._12_4_ <= fVar37);
    auVar79._8_8_ = auVar70._8_8_;
    auVar79._0_8_ = auVar70._0_8_;
    auVar124 = auVar124 ^ (auVar124 ^ auVar98) & auVar70;
    auVar128 = auVar128 ^ (auVar128 ^ auVar53) & auVar79;
    auVar31._0_4_ = -(uint)(auVar128._0_4_ <= fVar42);
    auVar31._4_4_ = -(uint)(auVar128._4_4_ <= fVar42);
    auVar31._8_4_ = -(uint)(auVar128._8_4_ <= fVar42);
    auVar31._12_4_ = -(uint)(auVar128._12_4_ <= fVar42);
    auVar7._8_4_ = (int)uVar65;
    auVar7._0_8_ = uVar96;
    auVar7._12_4_ = fVar42;
    auVar124 = auVar124 ^ (auVar124 ^ auVar7) & auVar31;
    fVar37 = auVar124._0_4_;
    auVar54._0_4_ = fVar37 * fVar37;
    fVar42 = auVar124._4_4_;
    auVar54._4_4_ = fVar42 * fVar42;
    fVar38 = auVar124._8_4_;
    auVar54._8_4_ = fVar38 * fVar38;
    fVar43 = auVar124._12_4_;
    auVar54._12_4_ = fVar43 * fVar43;
    auVar76 = NEON_ext(auVar54,auVar54,8,1);
    fVar45 = auVar76._0_4_ + auVar54._0_4_;
    fVar60 = auVar76._4_4_ + auVar54._4_4_;
    fVar46 = fVar45 + fVar60;
    fVar45 = fVar45 + fVar60;
    auVar55._8_8_ = CONCAT44(fVar45,fVar46);
    auVar55._0_8_ = CONCAT44(fVar45,fVar46);
    auVar76 = NEON_frsqrte(auVar55,4);
    auVar80._0_4_ = auVar76._0_4_ * fVar46;
    auVar80._4_4_ = auVar76._4_4_ * fVar45;
    auVar80._8_4_ = auVar76._8_4_ * fVar46;
    auVar80._12_4_ = auVar76._12_4_ * fVar45;
    auVar124 = NEON_frsqrts(auVar76,auVar80,4);
    auVar71._0_4_ = auVar76._0_4_ * auVar124._0_4_;
    auVar71._4_4_ = auVar76._4_4_ * auVar124._4_4_;
    auVar71._8_4_ = auVar76._8_4_ * auVar124._8_4_;
    auVar71._12_4_ = auVar76._12_4_ * auVar124._12_4_;
    auVar81._0_4_ = fVar46 * auVar71._0_4_;
    auVar81._4_4_ = fVar45 * auVar71._4_4_;
    auVar81._8_4_ = fVar46 * auVar71._8_4_;
    auVar81._12_4_ = fVar45 * auVar71._12_4_;
    iVar44 = -(uint)(fVar46 == 0.0);
    iVar61 = -(uint)(fVar45 == 0.0);
    iVar63 = -(uint)(fVar46 == 0.0);
    iVar64 = -(uint)(fVar45 == 0.0);
    auVar76 = NEON_frsqrts(auVar71,auVar81,4);
    fVar37 = auVar71._0_4_ * auVar76._0_4_ * fVar37;
    fVar42 = auVar71._4_4_ * auVar76._4_4_ * fVar42;
    fVar38 = auVar71._8_4_ * auVar76._8_4_ * fVar38;
    fVar43 = auVar71._12_4_ * auVar76._12_4_ * fVar43;
    auVar32._0_8_ =
         (int *)CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                         CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                                  CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar61 >> 8),
                                           CONCAT14(SUB41(fVar42,0) & ~(byte)iVar61,
                                                    CONCAT13((byte)((uint)fVar37 >> 0x18) &
                                                             ~(byte)((uint)iVar44 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar37 >> 0x10) &
                                                                      ~(byte)((uint)iVar44 >> 0x10),
                                                                      CONCAT11((byte)((uint)fVar37
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar44
                                                                                      >> 8),
                                                                               SUB41(fVar37,0) &
                                                                               ~(byte)iVar44)))))));
    auVar32[8] = SUB41(fVar38,0) & ~(byte)iVar63;
    auVar32[9] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar63 >> 8);
    auVar32[10] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10);
    auVar32[0xb] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18);
    auVar32[0xc] = SUB41(fVar43,0) & ~(byte)iVar64;
    auVar32[0xd] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar64 >> 8);
    auVar32[0xe] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
    auVar32[0xf] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
    uStack_98 = auVar32._8_8_;
    local_a0 = auVar32._0_8_;
    auVar76 = FUN_0098fad4(&local_a0);
    pbVar13 = (byte *)FUN_02b6962c(*(undefined8 *)(param_3 + 0x90),
                                   *(undefined2 *)((long)param_4 + 0x1a));
    fVar42 = (float)CONCAT13(pbVar13[0x13] & bVar102,
                             CONCAT12(pbVar13[0x12] & bVar101,
                                      CONCAT11(pbVar13[0x11] & bVar100,pbVar13[0x10] & bVar88)));
    auVar50._0_8_ =
         CONCAT17(pbVar13[0x17] & bVar108,
                  CONCAT16(pbVar13[0x16] & bVar107,
                           CONCAT15(pbVar13[0x15] & bVar106,CONCAT14(pbVar13[0x14] & bVar103,fVar42)
                                   )));
    auVar50[8] = pbVar13[0x18] & bVar109;
    auVar50[9] = pbVar13[0x19] & bVar112;
    auVar50[10] = pbVar13[0x1a] & bVar113;
    auVar50[0xb] = pbVar13[0x1b] & bVar114;
    auVar68._0_8_ =
         CONCAT17(pbVar13[0x27] & bVar108,
                  CONCAT16(pbVar13[0x26] & bVar107,
                           CONCAT15(pbVar13[0x25] & bVar106,
                                    CONCAT14(pbVar13[0x24] & bVar103,
                                             CONCAT13(pbVar13[0x23] & bVar102,
                                                      CONCAT12(pbVar13[0x22] & bVar101,
                                                               CONCAT11(pbVar13[0x21] & bVar100,
                                                                        pbVar13[0x20] & bVar88))))))
                 );
    auVar68[8] = pbVar13[0x28] & bVar109;
    auVar68[9] = pbVar13[0x29] & bVar112;
    auVar68[10] = pbVar13[0x2a] & bVar113;
    auVar68[0xb] = pbVar13[0x2b] & bVar114;
    fVar43 = (float)CONCAT13(pbVar13[3] & bVar102,
                             CONCAT12(pbVar13[2] & bVar101,
                                      CONCAT11(pbVar13[1] & bVar100,*pbVar13 & bVar88)));
    auVar82._0_8_ =
         CONCAT17(pbVar13[7] & bVar108,
                  CONCAT16(pbVar13[6] & bVar107,
                           CONCAT15(pbVar13[5] & bVar106,CONCAT14(pbVar13[4] & bVar103,fVar43))));
    auVar82[8] = pbVar13[8] & bVar109;
    auVar82[9] = pbVar13[9] & bVar112;
    auVar82[10] = pbVar13[10] & bVar113;
    auVar82[0xb] = pbVar13[0xb] & bVar114;
    auVar82[0xc] = pbVar13[0xc] & bVar115;
    auVar82[0xd] = pbVar13[0xd] & bVar118;
    auVar82[0xe] = pbVar13[0xe] & bVar119;
    auVar82[0xf] = pbVar13[0xf] & bVar120;
    uVar91 = NEON_ext(auVar82._0_8_,auVar68._0_8_,4,1);
    fVar60 = (float)((ulong)uVar91 >> 0x20);
    auVar124 = NEON_ext(auVar82,auVar82,8,1);
    fVar37 = (float)((ulong)auVar50._0_8_ >> 0x20);
    fVar38 = auVar68._8_4_;
    fVar46 = fVar39 * fVar43 + fVar89 * fVar37 + fVar90 * fVar38 + auVar97._0_4_;
    fVar45 = fVar40 * fVar43 + fVar104 * fVar37 + fVar105 * fVar38 + auVar97._4_4_;
    fVar39 = fVar62 * fVar43 + fVar110 * fVar37 + fVar111 * fVar38 + auVar97._8_4_;
    fVar37 = fVar41 * fVar43 + fVar116 * fVar37 + fVar117 * fVar38 + auVar97._12_4_;
    fVar40 = (float)((ulong)auVar68._0_8_ >> 0x20);
    auVar72._0_4_ = (float)uVar91 + fVar42;
    auVar72._4_4_ = fVar60 + auVar124._0_4_;
    auVar72._8_4_ = auVar50._8_4_ + fVar40;
    auVar72._12_4_ = 0;
    auVar83._0_4_ = (float)uVar91 - fVar42;
    auVar83._4_4_ = fVar60 - auVar124._0_4_;
    auVar83._8_4_ = auVar50._8_4_ - fVar40;
    auVar83._12_4_ = 0;
    uVar48 = a64_TBL(ZEXT816(0),auVar72,auVar83,uVar48);
    uVar121 = (undefined4)((ulong)uVar48 >> 0x20);
    uVar94 = a64_TBL(ZEXT816(0),auVar72,auVar83,uVar94);
    uVar91 = a64_TBL(ZEXT816(0),auVar72,auVar83,uVar95);
    uVar122 = (undefined4)((ulong)uVar94 >> 0x20);
    uVar95 = a64_TBL(ZEXT816(0),auVar72,auVar83,uVar11);
    auVar99._0_8_ = a64_TBL(ZEXT816(0),auVar72,auVar83,uVar12);
    uVar96 = a64_TBL(ZEXT816(0),auVar72,auVar83,uVar10);
    uVar66 = a64_TBL(ZEXT816(0),auVar72,auVar83,uVar66);
    auVar84._4_4_ = fVar45;
    auVar84._0_4_ = fVar45;
    auVar84._8_4_ = fVar45;
    auVar84._12_4_ = fVar45;
    auVar56._0_4_ = (undefined4)uVar48;
    auVar56._4_4_ = fVar45;
    auVar56._8_8_ = uVar95;
    auVar130._4_4_ = fVar46;
    auVar130._0_4_ = fVar46;
    auVar130._8_4_ = fVar46;
    auVar130._12_4_ = fVar46;
    auVar99._12_4_ = (undefined4)((ulong)uVar91 >> 0x20);
    auVar99._8_4_ = fVar39;
    auVar125._0_8_ = CONCAT44(-(uint)(fVar46 <= fVar45),-(uint)(fVar46 <= fVar45));
    auVar125._8_4_ = -(uint)(fVar46 <= fVar45);
    auVar125._12_4_ = -(uint)(fVar46 <= fVar45);
    auVar129._8_8_ = auVar125._8_8_;
    auVar129._0_8_ = auVar125._0_8_;
    auVar97._4_4_ = uVar121;
    auVar97._0_4_ = fVar46;
    auVar97._8_4_ = (int)uVar94;
    auVar97._12_4_ = uVar122;
    auVar126._4_4_ = uVar121;
    auVar126._0_4_ = fVar46;
    auVar126._8_4_ = (int)uVar94;
    auVar126._12_4_ = uVar122;
    auVar126 = auVar126 ^ (auVar97 ^ auVar56) & auVar125;
    auVar57._4_4_ = fVar39;
    auVar57._0_4_ = fVar39;
    auVar57._8_4_ = fVar39;
    auVar57._12_4_ = fVar39;
    auVar130 = auVar130 ^ (auVar130 ^ auVar84) & auVar129;
    auVar73._0_8_ = CONCAT44(-(uint)(auVar130._4_4_ <= fVar39),-(uint)(auVar130._0_4_ <= fVar39));
    auVar73._8_4_ = -(uint)(auVar130._8_4_ <= fVar39);
    auVar73._12_4_ = -(uint)(auVar130._12_4_ <= fVar39);
    auVar85._8_8_ = auVar73._8_8_;
    auVar85._0_8_ = auVar73._0_8_;
    auVar126 = auVar126 ^ (auVar126 ^ auVar99) & auVar73;
    auVar130 = auVar130 ^ (auVar130 ^ auVar57) & auVar85;
    auVar33._0_4_ = -(uint)(auVar130._0_4_ <= fVar37);
    auVar33._4_4_ = -(uint)(auVar130._4_4_ <= fVar37);
    auVar33._8_4_ = -(uint)(auVar130._8_4_ <= fVar37);
    auVar33._12_4_ = -(uint)(auVar130._12_4_ <= fVar37);
    auVar8._8_4_ = (int)uVar66;
    auVar8._0_8_ = uVar96;
    auVar8._12_4_ = fVar37;
    auVar126 = auVar126 ^ (auVar126 ^ auVar8) & auVar33;
    fVar39 = auVar126._0_4_;
    auVar58._0_4_ = fVar39 * fVar39;
    fVar37 = auVar126._4_4_;
    auVar58._4_4_ = fVar37 * fVar37;
    fVar40 = auVar126._8_4_;
    auVar58._8_4_ = fVar40 * fVar40;
    fVar42 = auVar126._12_4_;
    auVar58._12_4_ = fVar42 * fVar42;
    auVar124 = NEON_ext(auVar58,auVar58,8,1);
    fVar45 = auVar124._0_4_ + auVar58._0_4_;
    fVar62 = auVar124._4_4_ + auVar58._4_4_;
    fVar46 = fVar45 + fVar62;
    fVar45 = fVar45 + fVar62;
    auVar59._8_8_ = CONCAT44(fVar45,fVar46);
    auVar59._0_8_ = CONCAT44(fVar45,fVar46);
    auVar124 = NEON_frsqrte(auVar59,4);
    auVar86._0_4_ = auVar124._0_4_ * fVar46;
    auVar86._4_4_ = auVar124._4_4_ * fVar45;
    auVar86._8_4_ = auVar124._8_4_ * fVar46;
    auVar86._12_4_ = auVar124._12_4_ * fVar45;
    auVar97 = NEON_frsqrts(auVar124,auVar86,4);
    auVar74._0_4_ = auVar124._0_4_ * auVar97._0_4_;
    auVar74._4_4_ = auVar124._4_4_ * auVar97._4_4_;
    auVar74._8_4_ = auVar124._8_4_ * auVar97._8_4_;
    auVar74._12_4_ = auVar124._12_4_ * auVar97._12_4_;
    auVar87._0_4_ = fVar46 * auVar74._0_4_;
    auVar87._4_4_ = fVar45 * auVar74._4_4_;
    auVar87._8_4_ = fVar46 * auVar74._8_4_;
    auVar87._12_4_ = fVar45 * auVar74._12_4_;
    iVar44 = -(uint)(fVar46 == 0.0);
    iVar61 = -(uint)(fVar45 == 0.0);
    iVar63 = -(uint)(fVar46 == 0.0);
    iVar64 = -(uint)(fVar45 == 0.0);
    auVar124 = NEON_frsqrts(auVar74,auVar87,4);
    fVar39 = auVar74._0_4_ * auVar124._0_4_ * fVar39;
    fVar37 = auVar74._4_4_ * auVar124._4_4_ * fVar37;
    fVar40 = auVar74._8_4_ * auVar124._8_4_ * fVar40;
    fVar42 = auVar74._12_4_ * auVar124._12_4_ * fVar42;
    auVar34._0_8_ =
         (int *)CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                         CONCAT16((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                                  CONCAT15((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar61 >> 8),
                                           CONCAT14(SUB41(fVar37,0) & ~(byte)iVar61,
                                                    CONCAT13((byte)((uint)fVar39 >> 0x18) &
                                                             ~(byte)((uint)iVar44 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar39 >> 0x10) &
                                                                      ~(byte)((uint)iVar44 >> 0x10),
                                                                      CONCAT11((byte)((uint)fVar39
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar44
                                                                                      >> 8),
                                                                               SUB41(fVar39,0) &
                                                                               ~(byte)iVar44)))))));
    auVar34[8] = SUB41(fVar40,0) & ~(byte)iVar63;
    auVar34[9] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar63 >> 8);
    auVar34[10] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10);
    auVar34[0xb] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18);
    auVar34[0xc] = SUB41(fVar42,0) & ~(byte)iVar64;
    auVar34[0xd] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar64 >> 8);
    auVar34[0xe] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
    auVar34[0xf] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
    uStack_98 = auVar34._8_8_;
    local_a0 = auVar34._0_8_;
    FUN_0098fad4(&local_a0);
    piVar15 = *(int **)(param_4 + 4);
    puVar17 = (ushort *)((long)piVar15 - (long)*piVar15);
    if ((*puVar17 < 0xb) || ((ulong)puVar17[5] == 0)) break;
    fVar46 = 0.0;
    fStack_108 = 0.0;
    switch(*(undefined4 *)((long)piVar15 + (ulong)puVar17[5])) {
    case 0:
      goto switchD_02de9078_default;
    case 1:
      local_110 = auVar76._0_4_;
      fStack_108 = local_110 - extraout_s0;
      break;
    case 2:
      fStack_10c = auVar76._4_4_;
      fVar45 = extraout_var;
      fStack_108 = fStack_10c;
      goto LAB_02de9734;
    case 3:
      fStack_108 = auVar76._8_4_;
      fVar45 = extraout_var_01;
LAB_02de9734:
      fStack_108 = fStack_108 - fVar45;
    }
    if ((0xc < *puVar17) && ((ulong)puVar17[6] != 0)) {
      fVar46 = *(float *)((long)piVar15 + (ulong)puVar17[6]);
    }
    fVar45 = fmodf((fStack_108 * 57.295776 - fVar46) + 360.0,360.0);
    piVar15 = *(int **)(param_4 + 4);
    fVar46 = fVar45 + -360.0;
    if (fVar45 <= 180.0) {
      fVar46 = fVar45;
    }
    if (0xe < *(ushort *)((long)piVar15 - (long)*piVar15)) {
      uVar18 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[7];
      if (uVar18 != 0) {
        if (*(char *)((long)piVar15 + uVar18) != '\0') {
          fVar46 = ABS(fVar46);
        }
      }
    }
LAB_02de97bc:
    param_4[0xc] = (uint)fVar46;
    cVar4 = *(char *)(param_3 + 0x280);
    goto joined_r0x02de96b8;
  case 5:
    lVar14 = FUN_02b6962c(*(undefined8 *)(param_3 + 0x90),(short)param_4[6]);
    fVar46 = *(float *)(lVar14 + 0x34);
    if (0.0 < param_1) {
      param_4[8] = (uint)(ABS((float)param_4[0xc] - fVar46) / param_1);
    }
    param_4[0xc] = (uint)fVar46;
    fVar45 = 0.0;
    piVar15 = *(int **)(param_4 + 4);
    *(char *)((long)param_4 + 0x25) = (char)param_4[9];
    puVar17 = (ushort *)((long)piVar15 - (long)*piVar15);
    if ((char)param_4[9] == '\0') {
      if ((8 < *puVar17) && ((ulong)puVar17[4] != 0)) {
        fVar45 = *(float *)((long)piVar15 + (ulong)puVar17[4]);
      }
      if (fVar45 <= fVar46) {
        *(undefined1 *)(param_4 + 9) = 1;
        cVar4 = *(char *)(param_3 + 0x280);
        goto joined_r0x02de96b8;
      }
    }
    else {
      if ((10 < *puVar17) && ((ulong)puVar17[5] != 0)) {
        fVar45 = *(float *)((long)piVar15 + (ulong)puVar17[5]);
      }
      if (fVar46 <= fVar45) {
        *(undefined1 *)(param_4 + 9) = 0;
        cVar4 = *(char *)(param_3 + 0x280);
        goto joined_r0x02de96b8;
      }
    }
  }
switchD_02de9078_default:
  cVar4 = *(char *)(param_3 + 0x280);
joined_r0x02de96b8:
  if (cVar4 == '\0') {
    piVar15 = *(int **)(param_4 + 2);
    if (0.0 <= (float)param_4[0xe]) {
      fVar46 = 0.0;
      if ((8 < *(ushort *)((long)piVar15 - (long)*piVar15)) &&
         (uVar18 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[4], uVar18 != 0)) {
        fVar46 = *(float *)((long)piVar15 + uVar18);
      }
      if ((float)param_4[0xe] < fVar46) {
        return;
      }
    }
    param_4[0xe] = 0xbf800000;
    puVar1 = (uint *)((long)piVar15 + (ulong)*(ushort *)((long)piVar15 + (4 - (long)*piVar15)));
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    puVar27 = puVar1 + 1;
    uVar18 = (ulong)*puVar1;
    if (uVar18 != 0) {
      puVar1 = puVar27 + uVar18;
LAB_02de9a00:
      if (5 < *param_4) goto LAB_02de99f4;
      local_a0 = (int *)((long)puVar27 + (ulong)*puVar27);
      switch(*param_4) {
      default:
        fVar46 = 0.0;
        if (4 < *(ushort *)((long)local_a0 - (long)*local_a0)) {
          uVar18 = (ulong)((ushort *)((long)local_a0 - (long)*local_a0))[2];
          fVar46 = 0.0;
          if (uVar18 != 0) {
            fVar46 = *(float *)((long)local_a0 + uVar18);
          }
        }
        if (fVar46 <= (float)param_4[0xc]) goto LAB_02de9c48;
        break;
      case 1:
        puVar17 = (ushort *)((long)local_a0 - (long)*local_a0);
        fVar46 = 0.0;
        if (4 < *puVar17) {
          fVar46 = 0.0;
          if ((ulong)puVar17[2] != 0) {
            fVar46 = *(float *)((long)local_a0 + (ulong)puVar17[2]);
          }
        }
        if ((float)param_4[0xc] <= fVar46) {
          fVar46 = 0.0;
          if (4 < *puVar17) {
            fVar46 = 0.0;
            if ((ulong)puVar17[2] != 0) {
              fVar46 = *(float *)((long)local_a0 + (ulong)puVar17[2]);
            }
          }
          if (fVar46 < (float)param_4[0xd]) goto LAB_02de9c48;
        }
        break;
      case 3:
        piVar21 = *(int **)(param_4 + 4);
        puVar17 = (ushort *)((long)piVar21 - (long)*piVar21);
        uVar24 = *puVar17;
        if (uVar24 < 0x11) break;
        if (((ulong)puVar17[8] == 0) || (*(char *)((long)piVar21 + (ulong)puVar17[8]) == '\0')) {
joined_r0x02de9c40:
          bVar9 = false;
        }
        else {
          puVar19 = (ushort *)((long)local_a0 - (long)*local_a0);
          fVar46 = 0.0;
          uVar5 = *puVar19;
          if (4 < uVar5) {
            fVar46 = 0.0;
            if ((ulong)puVar19[2] != 0) {
              fVar46 = *(float *)((long)local_a0 + (ulong)puVar19[2]);
            }
          }
          if (fVar46 < (float)param_4[0xc]) goto joined_r0x02de9c40;
LAB_02de9bf4:
          fVar46 = 0.0;
          if (4 < uVar5) {
            fVar46 = 0.0;
            if ((ulong)puVar19[2] != 0) {
              fVar46 = *(float *)((long)local_a0 + (ulong)puVar19[2]);
            }
          }
          if ((float)param_4[0xd] <= fVar46) goto joined_r0x02de9c40;
          bVar9 = true;
        }
        if ((0x12 < uVar24) && ((ulong)puVar17[9] != 0)) {
          if (*(char *)((long)piVar21 + (ulong)puVar17[9]) != '\0') {
            puVar17 = (ushort *)((long)local_a0 - (long)*local_a0);
            fVar46 = 0.0;
            if (4 < *puVar17) {
              fVar46 = 0.0;
              if ((ulong)puVar17[2] != 0) {
                fVar46 = *(float *)((long)local_a0 + (ulong)puVar17[2]);
              }
            }
            if (fVar46 < (float)param_4[0xc]) {
              fVar46 = 0.0;
              if (4 < *puVar17) {
                fVar46 = 0.0;
                if ((ulong)puVar17[2] != 0) {
                  fVar46 = *(float *)((long)local_a0 + (ulong)puVar17[2]);
                }
              }
              if ((float)param_4[0xd] <= fVar46) goto LAB_02de9c48;
            }
          }
          if (bVar9) goto LAB_02de9c48;
          break;
        }
        if (!bVar9) break;
LAB_02de9c48:
        if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 7) ||
           (uVar18 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar18 == 0)) {
          lVar14 = 0;
        }
        else {
          puVar2 = (uint *)((long)piVar15 + uVar18);
          lVar14 = (long)puVar2 + (ulong)*puVar2;
        }
        bVar88 = *(byte *)(lVar14 + 4);
        puVar20 = &DAT_cbf29ce484222645;
        if (bVar88 != 0) {
          puVar20 = &DAT_cbf29ce484222645;
          pbVar13 = (byte *)(lVar14 + 5);
          do {
            puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar88) * 0x100000001b3);
            bVar88 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar88 != 0);
        }
        puVar22 = *(undefined1 **)(param_3 + 0x200);
        if (puVar22 != (undefined1 *)0x0) {
          uVar18 = (long)puVar22 - ((ulong)puVar22 >> 1 & 0x5555555555555555);
          uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
          uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar18 < 2) {
            puVar23 = (undefined1 *)((ulong)(puVar22 + -1) & (ulong)puVar20);
          }
          else {
            puVar23 = puVar20;
            if (puVar22 <= puVar20) {
              uVar6 = 0;
              if (puVar22 != (undefined1 *)0x0) {
                uVar6 = (ulong)puVar20 / (ulong)puVar22;
              }
              puVar23 = puVar20 + -(uVar6 * (long)puVar22);
            }
          }
          plVar25 = *(long **)(*(long *)(param_3 + 0x1f8) + (long)puVar23 * 8);
          if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
            if (uVar18 < 2) {
              do {
                if ((undefined1 *)plVar25[1] == puVar20) {
                  if ((undefined1 *)plVar25[2] == puVar20) goto LAB_02de9d84;
                }
                else if ((undefined1 *)((ulong)plVar25[1] & (ulong)(puVar22 + -1)) != puVar23)
                break;
                plVar25 = (long *)*plVar25;
              } while (plVar25 != (long *)0x0);
            }
            else {
              do {
                puVar26 = (undefined1 *)plVar25[1];
                if (puVar26 == puVar20) {
                  if ((undefined1 *)plVar25[2] == puVar20) goto LAB_02de9d84;
                }
                else {
                  if (puVar22 <= puVar26) {
                    uVar18 = 0;
                    if (puVar22 != (undefined1 *)0x0) {
                      uVar18 = (ulong)puVar26 / (ulong)puVar22;
                    }
                    puVar26 = puVar26 + -(uVar18 * (long)puVar22);
                  }
                  if (puVar26 != puVar23) break;
                }
                plVar25 = (long *)*plVar25;
              } while (plVar25 != (long *)0x0);
            }
          }
        }
        goto LAB_02de9da0;
      case 4:
        piVar21 = *(int **)(param_4 + 4);
        puVar17 = (ushort *)((long)piVar21 - (long)*piVar21);
        uVar24 = *puVar17;
        if (0x10 < uVar24) {
          if (((ulong)puVar17[8] != 0) && (*(char *)((long)piVar21 + (ulong)puVar17[8]) != '\0')) {
            puVar19 = (ushort *)((long)local_a0 - (long)*local_a0);
            fVar46 = 0.0;
            uVar5 = *puVar19;
            if (4 < uVar5) {
              fVar46 = 0.0;
              if ((ulong)puVar19[2] != 0) {
                fVar46 = *(float *)((long)local_a0 + (ulong)puVar19[2]);
              }
            }
            if ((float)param_4[0xc] <= fVar46) goto LAB_02de9bf4;
          }
          goto joined_r0x02de9c40;
        }
        break;
      case 5:
        if (((char)param_4[9] == '\0') && (*(char *)((long)param_4 + 0x25) != '\0'))
        goto LAB_02de9c48;
      }
      goto LAB_02de99f4;
    }
  }
LAB_02de991c:
  param_4[0xd] = param_4[0xc];
  return;
LAB_02de9d84:
  (*(code *)plVar25[6])(plVar25 + 10,&local_a0,param_4);
  piVar15 = *(int **)(param_4 + 2);
LAB_02de9da0:
  param_4[0xe] = 0;
  if (((*(ushort *)((long)piVar15 - (long)*piVar15) < 0xb) ||
      (uVar18 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[5], uVar18 == 0)) ||
     (*(char *)((long)piVar15 + uVar18) == '\0')) goto LAB_02de991c;
LAB_02de99f4:
  puVar27 = puVar27 + 1;
  if (puVar27 == puVar1) goto LAB_02de991c;
  goto LAB_02de9a00;
}


