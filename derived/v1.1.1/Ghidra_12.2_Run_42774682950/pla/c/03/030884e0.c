/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030884e0; name: FUN_030884e0
 */


undefined8 *
FUN_030884e0(long param_1,long param_2,long param_3,long *param_4,long *param_5,undefined1 param_6,
            long *param_7,long param_8,undefined8 *param_9,long param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  int iVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  int iVar19;
  ushort uVar20;
  int iVar21;
  long *plVar22;
  undefined8 *puVar23;
  ulong uVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  undefined1 (*pauVar28) [16];
  undefined8 *puVar29;
  uint *puVar30;
  undefined8 *puVar31;
  long lVar32;
  long lVar33;
  undefined1 (*pauVar34) [16];
  long lVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar42;
  float fVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar44;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar50;
  float fVar53;
  float fVar54;
  undefined1 auVar51 [16];
  float fVar55;
  undefined1 auVar52 [16];
  float fVar58;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  float fVar69;
  float fVar70;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar71 [16];
  undefined8 uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar79;
  undefined8 uVar78;
  undefined2 local_1b0 [2];
  undefined4 local_1ac;
  undefined8 local_1a8;
  long lStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined5 uStack_174;
  undefined8 local_16c;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined5 uStack_114;
  undefined8 local_10c;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *local_e0;
  undefined8 uStack_d8;
  undefined2 local_d0 [2];
  undefined4 local_cc;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined2 local_bf;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar32 = *param_4;
  lVar33 = *param_5;
  uVar20 = *(ushort *)(lVar33 + 0x58) | *(ushort *)(lVar32 + 0x58);
  if ((uVar20 & 0xff1) == 0) {
    if (*(char *)(param_3 + 0x18) == '\0') {
      *(undefined1 *)(param_3 + 0x18) = 0xff;
      goto LAB_03088534;
    }
    if (*(int *)(param_3 + 0x10) == 0) goto LAB_03088534;
LAB_030888dc:
    puVar31 = (undefined8 *)param_7[1];
    if (puVar31 == (undefined8 *)0x0) {
      puVar23 = (undefined8 *)0x0;
    }
    else {
      uVar24 = (ulong)*(byte *)((long)puVar31 + 9);
      lVar32 = uVar24 * 0x10;
      iVar21 = (int)lVar32;
      if (iVar21 + *(int *)(param_8 + 0x18) < 0xee1) {
        puVar23 = (undefined8 *)(*(long *)(param_8 + 0x10) + (long)*(int *)(param_8 + 0x18) + 0x20);
      }
      else {
        puVar23 = (undefined8 *)FUN_032bf82c(param_8);
        uVar24 = (ulong)*(byte *)((long)puVar31 + 9);
      }
      puVar29 = puVar23;
      do {
        uVar27 = (int)uVar24 - 1;
        uVar24 = (ulong)uVar27;
        uVar1 = *(undefined4 *)(puVar31 + 1);
        uVar2 = *(undefined4 *)((long)puVar31 + 0xc);
        *puVar29 = *puVar31;
        *(undefined4 *)(puVar29 + 1) = uVar1;
        *(undefined4 *)((long)puVar29 + 0xc) = uVar2;
        puVar31 = puVar31 + 2;
        puVar29 = puVar29 + 2;
      } while (0 < (int)uVar27);
      *(int *)(param_8 + 0x18) = *(int *)(param_8 + 0x18) + iVar21;
      *(int *)(param_8 + 0x1c) = *(int *)(param_8 + 0x1c) + 1;
      uVar27 = *(int *)((long)param_7 + 0x14) - 1;
      *(uint *)((long)param_7 + 0x14) = uVar27;
      if ((int)uVar27 < 1) {
        uVar3 = *(uint *)(param_7 + 2);
        if (uVar3 == 0) {
          *param_7 = 0;
          param_7[1] = 0;
        }
        else {
          puVar25 = *(uint **)(*param_7 + 8);
          *param_7 = (long)puVar25;
          if (puVar25 == (uint *)0x0) {
            param_7[1] = 0;
          }
          else {
            uVar26 = *puVar25 & 0xffff;
            if ((int)uVar3 <= (int)(*puVar25 & 0xffff)) {
              uVar26 = uVar3;
            }
            if ((int)uVar26 < 1) {
              param_7[1] = 0;
            }
            else {
              *(uint *)(param_7 + 2) = uVar3 - uVar26;
              *(uint *)((long)param_7 + 0x14) = uVar26;
              param_7[1] = (long)(puVar25 + 8);
              Hint_Prefetch(*(long *)(puVar25 + 2),0,0,0);
              Hint_Prefetch(*(long *)(puVar25 + 2) + 0x40,0,0,0);
              Hint_Prefetch(puVar25 + 0x20,0,0,0);
              Hint_Prefetch(puVar25 + 0x30,0,0,0);
              uVar27 = uVar26;
            }
            puVar30 = (uint *)param_7[4];
            if (puVar25 != puVar30) {
              uVar3 = *(uint *)(param_7 + 5);
              if (uVar3 != 0) {
                if (uVar3 == (*puVar30 & 0xffff)) {
                  lVar32 = param_7[3];
                  puVar31 = (undefined8 *)param_7[6];
                  *(undefined8 *)(*(long *)(lVar32 + 0x10) + (long)(int)puVar30[1] * 8) = 0;
                  *(undefined1 *)(lVar32 + 0xc) = 1;
                  iVar21 = *(int *)(puVar31 + 0xb);
                  lVar32 = puVar31[1];
                  *(uint **)(lVar32 + (long)iVar21 * 8) = puVar30;
                  *(int *)(puVar31 + 0xb) = iVar21 + 1;
                  if (*(int *)((long)puVar31 + 0x5c) <= iVar21 + 1) {
                    (**(code **)(*(long *)*puVar31 + 0x28))
                              ((long *)*puVar31,lVar32 + (long)(iVar21 + -5) * 8,6);
                    *(int *)(puVar31 + 0xb) = iVar21 + -5;
                  }
                }
                else {
                  do {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar30,0x10);
                    if (bVar7) {
                      *puVar30 = *puVar30 - uVar3;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
                *(undefined4 *)(param_7 + 5) = 0;
                *(undefined1 *)(param_7[3] + 0xc) = 1;
                puVar25 = (uint *)*param_7;
                uVar27 = *(uint *)((long)param_7 + 0x14);
              }
              param_7[4] = (long)puVar25;
              *(uint *)(param_7 + 5) = uVar27;
            }
          }
        }
      }
      else {
        param_7[1] = param_7[1] + lVar32;
      }
    }
  }
  else {
LAB_03088534:
    fVar70 = *(float *)(lVar32 + 0x6c);
    pauVar34 = (undefined1 (*) [16])param_5[6];
    fVar50 = (float)*(undefined8 *)(lVar32 + 0x70);
    fVar53 = (float)((ulong)*(undefined8 *)(lVar32 + 0x70) >> 0x20);
    auVar39 = *pauVar34;
    pauVar28 = pauVar34 + 1;
    uVar75 = *(undefined8 *)(pauVar34[1] + 8);
    uVar59 = (undefined1)((ulong)uVar75 >> 8);
    uVar60 = (undefined1)((ulong)uVar75 >> 0x10);
    uVar61 = (undefined1)((ulong)uVar75 >> 0x18);
    uVar62 = (undefined1)((ulong)uVar75 >> 0x20);
    uVar63 = (undefined1)((ulong)uVar75 >> 0x28);
    uVar64 = (undefined1)((ulong)uVar75 >> 0x30);
    uVar65 = (undefined1)((ulong)uVar75 >> 0x38);
    auVar45 = pauVar34[2];
    fVar14 = (*(float *)(lVar32 + 0x60) + fVar50) * 0.5;
    fVar16 = (*(float *)(lVar32 + 100) + fVar53) * 0.5;
    fVar18 = (*(float *)(lVar32 + 0x68) + fVar70) * 0.5;
    auVar51 = NEON_ext(auVar39,auVar39,8,1);
    fVar38 = (*(float *)(lVar32 + 0x60) - fVar50) * 0.5;
    fVar42 = (*(float *)(lVar32 + 100) - fVar53) * 0.5;
    fVar43 = (*(float *)(lVar32 + 0x68) - fVar70) * 0.5;
    auVar56[9] = uVar59;
    auVar56._0_9_ = *(unkbyte9 *)*pauVar28;
    auVar56[10] = uVar60;
    auVar56[0xb] = uVar61;
    auVar56[0xc] = uVar62;
    auVar56[0xd] = uVar63;
    auVar56[0xe] = uVar64;
    auVar56[0xf] = uVar65;
    auVar76[9] = uVar59;
    auVar76._0_9_ = *(unkbyte9 *)*pauVar28;
    auVar76[10] = uVar60;
    auVar76[0xb] = uVar61;
    auVar76[0xc] = uVar62;
    auVar76[0xd] = uVar63;
    auVar76[0xe] = uVar64;
    auVar76[0xf] = uVar65;
    auVar56 = NEON_ext(auVar56,auVar76,8,1);
    fVar55 = auVar51._0_4_;
    fVar37 = auVar56._0_4_;
    auVar56 = NEON_ext(auVar45,auVar45,8,1);
    fVar53 = (float)*(undefined8 *)*pauVar28;
    fVar36 = auVar39._0_4_;
    fVar72 = auVar45._4_4_;
    fVar58 = auVar45._0_4_;
    fVar50 = auVar39._4_4_;
    fVar8 = (float)((ulong)*(undefined8 *)*pauVar28 >> 0x20);
    fVar9 = auVar56._4_4_;
    fVar54 = auVar56._0_4_;
    fVar44 = ABS(fVar55 * fVar43) + ABS(fVar36 * fVar38) + ABS(fVar50 * fVar42);
    fVar47 = ABS(fVar37 * fVar43) + ABS(fVar53 * fVar38) + ABS(fVar8 * fVar42);
    fVar48 = ABS(fVar54 * fVar43) + ABS(fVar58 * fVar38) + ABS(fVar72 * fVar42);
    fVar49 = ABS(fVar9 * fVar43) + ABS(fVar72 * fVar38) + ABS(fVar9 * fVar42);
    fVar38 = fVar14 - *(float *)pauVar34[3];
    fVar42 = fVar16 - *(float *)(pauVar34[3] + 4);
    fVar43 = fVar18 - *(float *)(pauVar34[3] + 8);
    fVar69 = fVar55 * fVar43 + fVar36 * fVar38 + fVar50 * fVar42;
    fVar73 = fVar37 * fVar43 + fVar53 * fVar38 + fVar8 * fVar42;
    fVar74 = fVar54 * fVar43 + fVar58 * fVar38 + fVar72 * fVar42;
    fVar38 = fVar9 * fVar43 + fVar72 * fVar38 + fVar9 * fVar42;
    auVar39._0_4_ = fVar69 - fVar44;
    auVar39._4_4_ = fVar73 - fVar47;
    auVar39._8_4_ = fVar74 - fVar48;
    auVar39._12_4_ = fVar38 - fVar49;
    auVar45._0_4_ = fVar69 + fVar44;
    auVar45._4_4_ = fVar73 + fVar47;
    auVar45._8_4_ = fVar74 + fVar48;
    auVar45._12_4_ = fVar38 + fVar49;
    if ((*(byte *)(lVar33 + 0x54) >> 1 & 1) != 0) {
      pauVar28 = (undefined1 (*) [16])param_5[1];
      auVar56 = *pauVar28;
      auVar76 = NEON_ext(auVar56,auVar56,8,1);
      fVar14 = fVar14 - (float)*(double *)pauVar28[1];
      fVar16 = fVar16 - (float)*(double *)(pauVar28[1] + 8);
      uVar59 = SUB41(fVar16,0);
      uVar60 = (undefined1)((uint)fVar16 >> 8);
      uVar62 = (undefined1)((uint)fVar16 >> 0x10);
      uVar64 = (undefined1)((uint)fVar16 >> 0x18);
      fVar18 = fVar18 - (float)*(double *)pauVar28[2];
      uVar61 = (undefined1)((uint)fVar18 >> 8);
      uVar63 = (undefined1)((uint)fVar18 >> 0x10);
      uVar65 = (undefined1)((uint)fVar18 >> 0x18);
      fVar38 = (fVar70 + 0.0) * 0.5 - 0.0;
      uVar66 = (undefined1)((uint)fVar38 >> 8);
      uVar67 = (undefined1)((uint)fVar38 >> 0x10);
      uVar68 = (undefined1)((uint)fVar38 >> 0x18);
      fVar48 = auVar76._4_4_ * auVar76._4_4_;
      uVar75 = NEON_ext(auVar56._0_8_,auVar76._0_8_,4,1);
      fVar47 = fVar48 + -0.5;
      fVar48 = fVar48 + -0.5;
      auVar76 = pauVar28[7];
      fVar70 = auVar56._0_4_;
      fVar49 = auVar76._0_4_;
      fVar42 = auVar56._4_4_;
      fVar69 = auVar76._4_4_;
      fVar43 = auVar56._8_4_;
      fVar73 = auVar76._8_4_;
      fVar44 = auVar56._12_4_;
      fVar74 = fVar70 * fVar49 + fVar42 * fVar69 + fVar43 * fVar73;
      fVar79 = fVar70 * fVar49 + fVar42 * fVar69 + fVar43 * fVar73;
      auVar56 = NEON_ext(auVar76,auVar76,8,1);
      uVar78 = NEON_ext(auVar76._0_8_,auVar56._0_8_,4,1);
      auVar77._0_4_ = fVar70 * (float)uVar78 - fVar49 * (float)uVar75;
      auVar77._4_4_ =
           fVar42 * (float)((ulong)uVar78 >> 0x20) - fVar69 * (float)((ulong)uVar75 >> 0x20);
      auVar77._8_4_ = fVar43 * fVar49 - fVar73 * fVar70;
      auVar77._12_4_ = fVar44 * fVar69 - auVar76._12_4_ * fVar42;
      auVar56 = NEON_ext(auVar77,auVar77,4,1);
      fVar70 = fVar49 * fVar47 + fVar70 * fVar74 + auVar56._0_4_ * fVar44;
      fVar42 = fVar69 * fVar48 + fVar42 * fVar79 + auVar56._4_4_ * fVar44;
      fVar43 = fVar73 * fVar47 + fVar43 * fVar74 + auVar77._0_4_ * fVar44;
      fVar44 = auVar76._12_4_ * fVar48 + fVar44 * fVar79 + auVar77._4_4_ * fVar44;
      auVar51[4] = uVar59;
      auVar51._0_4_ = fVar14;
      auVar51[5] = uVar60;
      auVar51[6] = uVar62;
      auVar51[7] = uVar64;
      auVar51[8] = SUB41(fVar18,0);
      auVar51[9] = uVar61;
      auVar51[10] = uVar63;
      auVar51[0xb] = uVar65;
      auVar51[0xc] = SUB41(fVar38,0);
      auVar51[0xd] = uVar66;
      auVar51[0xe] = uVar67;
      auVar51[0xf] = uVar68;
      auVar11[4] = uVar59;
      auVar11._0_4_ = fVar14;
      auVar11[5] = uVar60;
      auVar11[6] = uVar62;
      auVar11[7] = uVar64;
      auVar11[8] = SUB41(fVar18,0);
      auVar11[9] = uVar61;
      auVar11[10] = uVar63;
      auVar11[0xb] = uVar65;
      auVar11[0xc] = SUB41(fVar38,0);
      auVar11[0xd] = uVar66;
      auVar11[0xe] = uVar67;
      auVar11[0xf] = uVar68;
      auVar76 = NEON_ext(auVar51,auVar11,4,1);
      auVar71._0_4_ = fVar70 + fVar70;
      auVar71._4_4_ = fVar42 + fVar42;
      auVar71._8_4_ = fVar43 + fVar43;
      auVar71._12_4_ = fVar44 + fVar44;
      auVar56 = NEON_ext(auVar71,auVar71,4,1);
      fVar70 = auVar76._0_4_ * auVar71._0_4_ - fVar14 * auVar56._0_4_;
      fVar16 = auVar76._4_4_ * auVar71._4_4_ - fVar16 * auVar56._4_4_;
      uVar61 = (undefined1)((uint)fVar16 >> 8);
      uVar63 = (undefined1)((uint)fVar16 >> 0x10);
      uVar65 = (undefined1)((uint)fVar16 >> 0x18);
      fVar18 = fVar14 * auVar71._8_4_ - fVar18 * auVar71._0_4_;
      uVar66 = (undefined1)((uint)fVar18 >> 8);
      uVar67 = (undefined1)((uint)fVar18 >> 0x10);
      uVar68 = (undefined1)((uint)fVar18 >> 0x18);
      fVar14 = (float)(CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar59,fVar14)))) >>
                      0x20) * auVar71._12_4_ - fVar38 * auVar71._4_4_;
      uVar59 = (undefined1)((uint)fVar14 >> 8);
      uVar60 = (undefined1)((uint)fVar14 >> 0x10);
      uVar62 = (undefined1)((uint)fVar14 >> 0x18);
      auVar12[4] = SUB41(fVar16,0);
      auVar12._0_4_ = fVar70;
      auVar12[5] = uVar61;
      auVar12[6] = uVar63;
      auVar12[7] = uVar65;
      auVar12[8] = SUB41(fVar18,0);
      auVar12[9] = uVar66;
      auVar12[10] = uVar67;
      auVar12[0xb] = uVar68;
      auVar12[0xc] = SUB41(fVar14,0);
      auVar12[0xd] = uVar59;
      auVar12[0xe] = uVar60;
      auVar12[0xf] = uVar62;
      auVar13[4] = SUB41(fVar16,0);
      auVar13._0_4_ = fVar70;
      auVar13[5] = uVar61;
      auVar13[6] = uVar63;
      auVar13[7] = uVar65;
      auVar13[8] = SUB41(fVar18,0);
      auVar13[9] = uVar66;
      auVar13[10] = uVar67;
      auVar13[0xb] = uVar68;
      auVar13[0xc] = SUB41(fVar14,0);
      auVar13[0xd] = uVar59;
      auVar13[0xe] = uVar60;
      auVar13[0xf] = uVar62;
      auVar56 = NEON_ext(auVar12,auVar13,4,1);
      fVar14 = -((float)*(undefined8 *)pauVar28[6] + auVar56._0_4_);
      fVar16 = -((float)((ulong)*(undefined8 *)pauVar28[6] >> 0x20) + auVar56._4_4_);
      fVar18 = -((float)*(undefined8 *)(pauVar28[6] + 8) + fVar70);
      uVar75 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x10);
      fVar70 = (float)uVar75;
      fVar50 = fVar70 * (fVar55 * fVar18 + fVar36 * fVar14 + fVar50 * fVar16);
      fVar55 = (float)((ulong)uVar75 >> 0x20);
      fVar53 = fVar55 * (fVar37 * fVar18 + fVar53 * fVar14 + fVar8 * fVar16);
      fVar70 = fVar70 * (fVar54 * fVar18 + fVar58 * fVar14 + fVar72 * fVar16);
      fVar55 = fVar55 * (fVar9 * fVar18 + fVar72 * fVar14 + fVar9 * fVar16);
      auVar57._0_4_ = auVar39._0_4_ + fVar50;
      auVar57._4_4_ = auVar39._4_4_ + fVar53;
      auVar57._8_4_ = auVar39._8_4_ + fVar70;
      auVar57._12_4_ = auVar39._12_4_ + fVar55;
      auVar52._0_4_ = auVar45._0_4_ + fVar50;
      auVar52._4_4_ = auVar45._4_4_ + fVar53;
      auVar52._8_4_ = auVar45._8_4_ + fVar70;
      auVar52._12_4_ = auVar45._12_4_ + fVar55;
      auVar39 = NEON_fmin(auVar57,auVar39,4);
      auVar45 = NEON_fmax(auVar52,auVar45,4);
    }
    uStack_a8 = auVar39._8_8_;
    uStack_98 = auVar45._8_8_;
    if ((uVar20 & 0x341) == 0) {
      auVar56 = *(undefined1 (*) [16])(param_3 + 0x30);
      auVar76 = *(undefined1 (*) [16])(param_3 + 0x40);
      iVar15 = -(uint)(auVar45._0_4_ <= auVar76._0_4_);
      iVar17 = -(uint)(auVar45._4_4_ <= auVar76._4_4_);
      iVar19 = -(uint)(auVar45._8_4_ <= auVar76._8_4_);
      iVar21 = -(uint)(auVar56._0_4_ <= auVar39._0_4_);
      iVar5 = -(uint)(auVar56._4_4_ <= auVar39._4_4_);
      iVar10 = -(uint)(auVar56._8_4_ <= auVar39._8_4_);
      uVar27 = *(byte *)(param_3 + 0x18) + 0xff;
      uVar3 = uVar27 >> 8;
      uVar26 = (uint)((CONCAT13((byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar21 >> 0x18),
                                CONCAT12((byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar21 >> 0x10)
                                         ,CONCAT11((byte)((uint)iVar15 >> 8) &
                                                   (byte)((uint)iVar21 >> 8),
                                                   (byte)iVar15 & (byte)iVar21))) &
                       CONCAT13((byte)((uint)iVar17 >> 0x18) & (byte)((uint)iVar5 >> 0x18),
                                CONCAT12((byte)((uint)iVar17 >> 0x10) & (byte)((uint)iVar5 >> 0x10),
                                         CONCAT11((byte)((uint)iVar17 >> 8) &
                                                  (byte)((uint)iVar5 >> 8),
                                                  (byte)iVar17 & (byte)iVar5))) &
                      CONCAT13((byte)((uint)iVar19 >> 0x18) & (byte)((uint)iVar10 >> 0x18),
                               CONCAT12((byte)((uint)iVar19 >> 0x10) & (byte)((uint)iVar10 >> 0x10),
                                        CONCAT11((byte)((uint)iVar19 >> 8) &
                                                 (byte)((uint)iVar10 >> 8),
                                                 (byte)iVar19 & (byte)iVar10)))) != 0);
      if ((uVar3 & uVar26) == 0) {
        uVar27 = 0xffffffff;
      }
      *(char *)(param_3 + 0x18) = (char)uVar27;
      if ((uVar3 & uVar26) != 0) {
        if (*(int *)(param_3 + 0x10) == 0) {
          auVar46._0_4_ = auVar76._0_4_ - auVar45._0_4_;
          auVar46._4_4_ = auVar76._4_4_ - auVar45._4_4_;
          auVar46._8_4_ = auVar76._8_4_ - auVar45._8_4_;
          auVar46._12_4_ = auVar76._12_4_ - auVar45._12_4_;
          auVar40._0_4_ = auVar39._0_4_ - auVar56._0_4_;
          auVar40._4_4_ = auVar39._4_4_ - auVar56._4_4_;
          auVar40._8_4_ = auVar39._8_4_ - auVar56._8_4_;
          auVar40._12_4_ = auVar39._12_4_ - auVar56._12_4_;
          auVar56 = NEON_fmin(auVar40,auVar46,4);
          uVar75 = NEON_fminp(auVar56._0_8_,auVar56._0_8_,4);
          uVar75 = NEON_fmin(CONCAT44(auVar56._8_4_,auVar56._8_4_),uVar75,4);
          uVar78 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x48);
          auVar41._0_8_ =
               CONCAT44((int)((float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar78 >> 0x20)),
                        (int)((float)uVar75 * (float)uVar78));
          auVar41._8_8_ = auVar41._0_8_;
          uVar75 = NEON_sqxtun(auVar41._0_8_,auVar41,4);
          *(short *)(param_3 + 0xc) = (short)uVar75;
          return (undefined8 *)0x0;
        }
        goto LAB_030888dc;
      }
    }
    local_80 = 0;
    uStack_78 = 0x100000000;
    local_bf = 0xfb00;
    local_90 = 0;
    local_88 = 0;
    local_b0 = auVar39._0_8_;
    uStack_a0 = auVar45._0_8_;
    local_cc = *(undefined4 *)(lVar32 + 0x8c);
    local_d0[0] = *(undefined2 *)(lVar32 + 0x8a);
    local_c8 = *(undefined8 *)(lVar32 + 0x98);
    uStack_d8 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x4b8);
    plVar22 = *(long **)(param_1 + 0x48);
    local_e0 = plVar22;
    local_c0 = param_6;
    if ((*(byte *)(plVar22 + 3) & 1) != 0) {
      (**(code **)(*plVar22 + 0x38))(plVar22,6,lVar32,*(undefined8 *)(lVar32 + 0x78),local_d0);
      plVar22 = *(long **)(param_1 + 0x48);
    }
    auVar56 = NEON_fmov(0x3f800000,4);
    local_128 = 0xffffffff;
    local_130 = 0;
    local_124 = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    local_10c = 0;
    uStack_158 = auVar56._8_8_;
    local_160 = auVar56._0_8_;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_138 = *(undefined8 *)(lVar32 + 0x78);
    uStack_120 = (undefined4)param_4[6];
    local_11c = (undefined4)((ulong)param_4[6] >> 0x20);
    local_188 = 0xffffffff;
    local_184 = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    local_16c = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uVar75 = *(undefined8 *)(lVar33 + 0x78);
    uStack_180 = SUB84(pauVar34,0);
    local_17c = (undefined4)((ulong)pauVar34 >> 0x20);
    uStack_190 = 0;
    local_1b0[0] = *(undefined2 *)(lVar33 + 0x8a);
    local_1ac = *(undefined4 *)(lVar33 + 0x8c);
    local_1a8 = *(undefined8 *)(lVar33 + 0x98);
    lStack_1a0 = lVar33;
    local_198 = uVar75;
    local_140 = lVar32;
    local_100 = local_160;
    uStack_f8 = uStack_158;
    if ((*(byte *)(plVar22 + 3) & 1) != 0) {
      (**(code **)(*plVar22 + 0x38))(plVar22,6,lVar33,uVar75,local_1b0);
      uVar75 = *(undefined8 *)(lVar33 + 0x78);
    }
    uVar24 = param_10 + 0x368;
    iVar21 = FUN_0308448c(&local_90,&local_e0,&local_140,uVar75,&lStack_1a0,local_1b0,param_9,
                          param_3 + 0x30,uVar24);
    lVar35 = *(long *)(param_1 + 0x40);
    uVar27 = *(uint *)(lVar33 + 0x54) | *(uint *)(lVar32 + 0x54) |
             *(uint *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar32 + 0x8a) * 0x50 + 0x14)
             | *(uint *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar33 + 0x8a) * 0x50 + 0x14
                        );
    if ((*(uint *)(lVar35 + 0x420) & uVar27) != 0) {
      lVar32 = 0;
      puVar31 = (undefined8 *)(lVar35 + 0x430);
      do {
        if ((*(uint *)(puVar31 + -1) & uVar27) != 0) {
          uVar24 = CONCAT44((int)(uVar24 >> 0x20),*(undefined4 *)((long)param_9 + 0xc)) &
                   0xffffffff3fffffff;
          iVar21 = (**(code **)(*(long *)*puVar31 + 0x40))
                             ((long *)*puVar31,param_1,param_2,&local_e0,&local_140,&lStack_1a0,
                              *param_9,*(undefined4 *)(param_9 + 1),uVar24);
        }
        lVar32 = lVar32 + 1;
        puVar31 = puVar31 + 2;
      } while (lVar32 < *(int *)(lVar35 + 0x424));
      if ((int)(*(uint *)((long)param_9 + 0xc) & 0x3fffffff) < iVar21) {
        uVar75 = FUN_02f7f7b8(PTR_PTR_0434a080,iVar21,*param_9,*(undefined4 *)(param_9 + 1));
        *param_9 = uVar75;
      }
      if ((*(int *)(param_9 + 1) < iVar21) || (iVar21 < *(int *)(param_9 + 1))) {
        *(int *)(param_9 + 1) = iVar21;
      }
    }
    *(int *)(param_3 + 0x10) = iVar21;
    if (iVar21 < 1) {
      puVar23 = (undefined8 *)0x0;
    }
    else {
      lVar32 = param_7[1];
      if (lVar32 != 0) {
        uVar27 = *(int *)((long)param_7 + 0x14) - 1;
        bVar4 = *(byte *)(lVar32 + 9);
        *(uint *)((long)param_7 + 0x14) = uVar27;
        if ((int)uVar27 < 1) {
          uVar3 = *(uint *)(param_7 + 2);
          if (uVar3 == 0) {
            *param_7 = 0;
            param_7[1] = 0;
          }
          else {
            puVar25 = *(uint **)(*param_7 + 8);
            *param_7 = (long)puVar25;
            if (puVar25 == (uint *)0x0) {
              param_7[1] = 0;
            }
            else {
              uVar26 = *puVar25 & 0xffff;
              if ((int)uVar3 <= (int)(*puVar25 & 0xffff)) {
                uVar26 = uVar3;
              }
              if ((int)uVar26 < 1) {
                param_7[1] = 0;
              }
              else {
                *(uint *)(param_7 + 2) = uVar3 - uVar26;
                *(uint *)((long)param_7 + 0x14) = uVar26;
                param_7[1] = (long)(puVar25 + 8);
                Hint_Prefetch(*(long *)(puVar25 + 2),0,0,0);
                Hint_Prefetch(*(long *)(puVar25 + 2) + 0x40,0,0,0);
                Hint_Prefetch(puVar25 + 0x20,0,0,0);
                Hint_Prefetch(puVar25 + 0x30,0,0,0);
                uVar27 = uVar26;
              }
              puVar30 = (uint *)param_7[4];
              if (puVar25 != puVar30) {
                uVar3 = *(uint *)(param_7 + 5);
                if (uVar3 != 0) {
                  if (uVar3 == (*puVar30 & 0xffff)) {
                    lVar32 = param_7[3];
                    puVar31 = (undefined8 *)param_7[6];
                    *(undefined8 *)(*(long *)(lVar32 + 0x10) + (long)(int)puVar30[1] * 8) = 0;
                    *(undefined1 *)(lVar32 + 0xc) = 1;
                    iVar5 = *(int *)(puVar31 + 0xb);
                    lVar32 = puVar31[1];
                    *(uint **)(lVar32 + (long)iVar5 * 8) = puVar30;
                    *(int *)(puVar31 + 0xb) = iVar5 + 1;
                    if (*(int *)((long)puVar31 + 0x5c) <= iVar5 + 1) {
                      (**(code **)(*(long *)*puVar31 + 0x28))
                                ((long *)*puVar31,lVar32 + (long)(iVar5 + -5) * 8,6);
                      *(int *)(puVar31 + 0xb) = iVar5 + -5;
                    }
                  }
                  else {
                    do {
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(puVar30,0x10);
                      if (bVar7) {
                        *puVar30 = *puVar30 - uVar3;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                  }
                  *(undefined4 *)(param_7 + 5) = 0;
                  *(undefined1 *)(param_7[3] + 0xc) = 1;
                  puVar25 = (uint *)*param_7;
                  uVar27 = *(uint *)((long)param_7 + 0x14);
                }
                param_7[4] = (long)puVar25;
                *(uint *)(param_7 + 5) = uVar27;
              }
            }
          }
        }
        else {
          param_7[1] = lVar32 + (ulong)bVar4 * 0x10;
        }
      }
      puVar23 = (undefined8 *)FUN_0305b9dc(*param_9,iVar21,param_8);
    }
    if (uStack_78._4_4_ == 0) {
      FUN_032d647c(local_88);
      FUN_032d647c(local_80);
    }
  }
  return puVar23;
}


