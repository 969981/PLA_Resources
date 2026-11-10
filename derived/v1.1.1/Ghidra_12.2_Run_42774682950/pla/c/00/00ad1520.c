/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad1520; name: FUN_00ad1520
 */


undefined8 FUN_00ad1520(undefined1 param_1 [16],float param_2,long param_3,float *param_4)

{
  float *pfVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined2 uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  float extraout_s0;
  undefined8 extraout_d0;
  float extraout_var_00;
  float extraout_var_01;
  float extraout_var_02;
  float extraout_var;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 extraout_var_03;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  byte bVar28;
  byte bVar29;
  undefined1 uVar30;
  byte bVar31;
  byte bVar32;
  undefined1 uVar33;
  byte bVar34;
  byte bVar35;
  undefined1 uVar36;
  byte bVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  byte bVar54;
  undefined1 uVar55;
  byte bVar56;
  byte bVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [12];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  float fVar77;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar86;
  float fVar87;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar88;
  undefined1 auVar85 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  float fVar92;
  float fVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_68;
  long *local_60;
  undefined8 uStack_58;
  long *local_28;
  
  if (*(char *)(param_3 + 0x430) == '\0') {
    return 0;
  }
  FUN_009c69bc(&local_68);
  uStack_78 = SUB168(*(undefined1 (*) [16])(local_68 + 0x18),8);
  local_80 = SUB168(*(undefined1 (*) [16])(local_68 + 0x18),0);
  FUN_0098fad4(&local_80);
  fVar78 = *(float *)PTR_FloatDegree180_04372ce0;
  fVar18 = *(float *)PTR_FloatPi_04372cf0;
  auVar16 = ZEXT816(0);
  fVar15 = 0.0;
  if (*(char *)(param_3 + 0x421) != '\0') {
    fVar15 = -((fVar78 / fVar18) * extraout_var);
  }
  local_90 = param_1._0_4_;
  fStack_8c = param_1._4_4_;
  fStack_88 = param_1._8_4_;
  fStack_84 = param_1._12_4_;
  if (*(int *)(param_3 + 0x3e0) == 1) {
    auVar16 = FUN_00ad0c64(param_3);
    local_a0 = auVar16._0_4_;
    fStack_9c = auVar16._4_4_;
    fStack_98 = auVar16._8_4_;
    fStack_94 = auVar16._12_4_;
    if (*(char *)(param_3 + 0x422) == '\0') {
      fStack_a8 = *(float *)(param_3 + 0x3e4);
    }
    else {
      FUN_009c69bc(&local_60,param_3);
      fStack_a8 = SUB164(*(undefined1 (*) [16])(local_60 + 0x16),8);
      if (local_60 != (long *)0x0) {
        lVar12 = local_60[0xb];
        piVar2 = (int *)(lVar12 + 0xc);
        do {
          iVar94 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar94 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar94 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_60 + 0x20))();
        }
      }
      fStack_a8 = *(float *)(param_3 + 0x3e4) * fStack_a8;
    }
    fVar18 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
    uVar13 = (ulong)(fVar15 * (fVar18 / fVar78));
    pfVar1 = (float *)(PTR_SinCosSampleTable_04372ce8 + (uVar13 >> 0x18 & 0xff) * 0x10);
    fVar18 = (float)((uint)uVar13 & 0xffffff) * 5.9604645e-08;
    fVar15 = pfVar1[1] + pfVar1[3] * fVar18;
    fVar18 = *pfVar1 + pfVar1[2] * fVar18;
    local_a0 = local_a0 +
               (fVar18 * *(float *)(param_3 + 0x410) - fVar15 * *(float *)(param_3 + 0x418));
    fStack_9c = fStack_9c + *(float *)(param_3 + 0x414);
    fStack_98 = fStack_98 +
                fVar15 * *(float *)(param_3 + 0x410) + fVar18 * *(float *)(param_3 + 0x418);
    fVar21 = local_90 - local_a0;
    fVar24 = fStack_8c - fStack_9c;
    fVar26 = fStack_88 - fStack_98;
    fVar27 = fStack_84 - (fStack_94 + 0.0);
    fVar15 = fVar21 * fVar21;
    fVar18 = fVar24 * fVar24;
    uVar30 = (undefined1)((uint)fVar18 >> 8);
    uVar33 = (undefined1)((uint)fVar18 >> 0x10);
    uVar36 = (undefined1)((uint)fVar18 >> 0x18);
    fVar78 = fVar26 * fVar26;
    uVar39 = (undefined1)((uint)fVar78 >> 8);
    uVar52 = (undefined1)((uint)fVar78 >> 0x10);
    uVar55 = (undefined1)((uint)fVar78 >> 0x18);
    fVar22 = fVar27 * fVar27;
    uVar58 = (undefined1)((uint)fVar22 >> 8);
    uVar59 = (undefined1)((uint)fVar22 >> 0x10);
    uVar60 = (undefined1)((uint)fVar22 >> 0x18);
    auVar5[4] = SUB41(fVar18,0);
    auVar5._0_4_ = fVar15;
    auVar5[5] = uVar30;
    auVar5[6] = uVar33;
    auVar5[7] = uVar36;
    auVar5[8] = SUB41(fVar78,0);
    auVar5[9] = uVar39;
    auVar5[10] = uVar52;
    auVar5[0xb] = uVar55;
    auVar5[0xc] = SUB41(fVar22,0);
    auVar5[0xd] = uVar58;
    auVar5[0xe] = uVar59;
    auVar5[0xf] = uVar60;
    auVar6[4] = SUB41(fVar18,0);
    auVar6._0_4_ = fVar15;
    auVar6[5] = uVar30;
    auVar6[6] = uVar33;
    auVar6[7] = uVar36;
    auVar6[8] = SUB41(fVar78,0);
    auVar6[9] = uVar39;
    auVar6[10] = uVar52;
    auVar6[0xb] = uVar55;
    auVar6[0xc] = SUB41(fVar22,0);
    auVar6[0xd] = uVar58;
    auVar6[0xe] = uVar59;
    auVar6[0xf] = uVar60;
    auVar16 = NEON_ext(auVar5,auVar6,8,1);
    fVar15 = auVar16._0_4_ + fVar15;
    fVar18 = auVar16._4_4_ + fVar18;
    fVar78 = fVar15 + fVar18;
    fVar15 = fVar15 + fVar18;
    uVar30 = SUB41(fVar15,0);
    uVar33 = (undefined1)((uint)fVar15 >> 8);
    uVar36 = (undefined1)((uint)fVar15 >> 0x10);
    uVar39 = (undefined1)((uint)fVar15 >> 0x18);
    if (fVar78 < fStack_a8 * fStack_a8) {
      *param_4 = 0.0;
    }
    else {
      auVar7[4] = uVar30;
      auVar7._0_4_ = fVar78;
      auVar7[5] = uVar33;
      auVar7[6] = uVar36;
      auVar7[7] = uVar39;
      auVar7[8] = SUB41(fVar78,0);
      auVar7[9] = (char)((uint)fVar78 >> 8);
      auVar7[10] = (char)((uint)fVar78 >> 0x10);
      auVar7[0xb] = (char)((uint)fVar78 >> 0x18);
      auVar7[0xc] = uVar30;
      auVar7[0xd] = uVar33;
      auVar7[0xe] = uVar36;
      auVar7[0xf] = uVar39;
      auVar16 = NEON_frsqrte(auVar7,4);
      auVar64._0_4_ = fVar78 * auVar16._0_4_;
      auVar64._4_4_ = fVar15 * auVar16._4_4_;
      auVar64._8_4_ = fVar78 * auVar16._8_4_;
      uVar8 = (undefined2)(CONCAT15(uVar33,CONCAT14(uVar30,fVar78)) >> 0x20);
      auVar64._12_4_ = (float)CONCAT13(uVar39,CONCAT12(uVar36,uVar8)) * auVar16._12_4_;
      auVar65 = NEON_frsqrts(auVar16,auVar64,4);
      auVar61._0_4_ = auVar16._0_4_ * auVar65._0_4_;
      auVar61._4_4_ = auVar16._4_4_ * auVar65._4_4_;
      auVar61._8_4_ = auVar16._8_4_ * auVar65._8_4_;
      auVar61._12_4_ = auVar16._12_4_ * auVar65._12_4_;
      auVar66._0_4_ = fVar78 * auVar61._0_4_;
      auVar66._4_4_ = fVar15 * auVar61._4_4_;
      auVar66._8_4_ = fVar78 * auVar61._8_4_;
      auVar66._12_4_ = (float)CONCAT13(uVar39,CONCAT12(uVar36,uVar8)) * auVar61._12_4_;
      iVar94 = -(uint)(fVar78 == 0.0);
      iVar95 = -(uint)(fVar15 == 0.0);
      iVar96 = -(uint)(fVar78 == 0.0);
      iVar9 = -(uint)((float)CONCAT13(uVar39,CONCAT12(uVar36,uVar8)) == 0.0);
      auVar16 = NEON_frsqrts(auVar61,auVar66,4);
      fVar21 = fVar21 * auVar61._0_4_ * auVar16._0_4_;
      fVar24 = fVar24 * auVar61._4_4_ * auVar16._4_4_;
      fVar26 = fVar26 * auVar61._8_4_ * auVar16._8_4_;
      fVar27 = fVar27 * auVar61._12_4_ * auVar16._12_4_;
      fVar15 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18),
                               CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar26 >> 8) &
                                                  ~(byte)((uint)iVar96 >> 8),
                                                  SUB41(fVar26,0) & ~(byte)iVar96)));
      local_a0 = local_a0 +
                 (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18),
                                 CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                          ~(byte)((uint)iVar94 >> 0x10),
                                          CONCAT11((byte)((uint)fVar21 >> 8) &
                                                   ~(byte)((uint)iVar94 >> 8),
                                                   SUB41(fVar21,0) & ~(byte)iVar94))) * fStack_a8;
      fStack_9c = fStack_9c +
                  (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18),
                                  CONCAT12((byte)((uint)fVar24 >> 0x10) &
                                           ~(byte)((uint)iVar95 >> 0x10),
                                           CONCAT11((byte)((uint)fVar24 >> 8) &
                                                    ~(byte)((uint)iVar95 >> 8),
                                                    SUB41(fVar24,0) & ~(byte)iVar95))) * fStack_a8;
      fStack_98 = fStack_98 + fVar15 * fStack_a8;
      fStack_84 = (fStack_94 + 0.0 +
                  (float)(CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                                   CONCAT16((byte)((uint)fVar27 >> 0x10) &
                                            ~(byte)((uint)iVar9 >> 0x10),
                                            CONCAT15((byte)((uint)fVar27 >> 8) &
                                                     ~(byte)((uint)iVar9 >> 8),
                                                     CONCAT14(SUB41(fVar27,0) & ~(byte)iVar9,fVar15)
                                                    ))) >> 0x20) * fStack_a8) - fStack_84;
LAB_00ad16f0:
      auVar17._0_4_ = (local_a0 - local_90) * (local_a0 - local_90);
      auVar17._4_4_ = (fStack_9c - fStack_8c) * (fStack_9c - fStack_8c);
      auVar17._8_4_ = (fStack_98 - fStack_88) * (fStack_98 - fStack_88);
      auVar17._12_4_ = fStack_84 * fStack_84;
      auVar16 = NEON_ext(auVar17,auVar17,8,1);
      fVar15 = auVar16._0_4_ + auVar17._0_4_ + auVar16._4_4_ + auVar17._4_4_;
      if (param_2 * param_2 < fVar15) goto LAB_00ad170c;
      *param_4 = fVar15;
    }
    uVar14 = 1;
  }
  else {
    if (*(int *)(param_3 + 0x3e0) == 0) {
      FUN_009c69bc(&local_28,param_3);
      FUN_00ad0c64(param_3);
      fStack_98 = (float)extraout_var_03;
      fStack_94 = (float)((ulong)extraout_var_03 >> 0x20);
      local_a0 = (float)extraout_d0;
      fStack_9c = (float)((ulong)extraout_d0 >> 0x20);
      uStack_58 = SUB168(*(undefined1 (*) [16])(local_28 + 0x18),8);
      local_60 = SUB168(*(undefined1 (*) [16])(local_28 + 0x18),0);
      auVar65 = FUN_00ad0ee4(param_3);
      fStack_a8 = auVar65._8_4_;
      fStack_a4 = auVar65._12_4_;
      local_b0 = auVar65._0_4_;
      fStack_ac = auVar65._4_4_;
      FUN_0098fad4(&local_60);
      puVar11 = PTR_SinCosSampleTable_04372ce8;
      fVar22 = 0.0;
      if (*(char *)(param_3 + 0x421) != '\0') {
        fVar22 = -((fVar78 / fVar18) * extraout_var_00);
      }
      fVar21 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
      uVar13 = (ulong)((fVar21 / fVar78) * fVar22);
      pfVar1 = (float *)(PTR_SinCosSampleTable_04372ce8 + (uVar13 >> 0x18 & 0xff) * 0x10);
      fVar18 = (float)((uint)uVar13 & 0xffffff) * 5.9604645e-08;
      fVar22 = pfVar1[1] + pfVar1[3] * fVar18;
      fVar18 = *pfVar1 + pfVar1[2] * fVar18;
      local_c0 = auVar16._0_4_;
      fStack_bc = auVar16._4_4_;
      fStack_b8 = auVar16._8_4_;
      auVar65._0_4_ =
           local_a0 + (fVar18 * *(float *)(param_3 + 0x410) - fVar22 * *(float *)(param_3 + 0x418));
      auVar65._4_4_ = fStack_9c + *(float *)(param_3 + 0x414);
      auVar65._8_4_ =
           fStack_98 + fVar22 * *(float *)(param_3 + 0x410) + fVar18 * *(float *)(param_3 + 0x418);
      auVar65._12_4_ = fStack_94 + 0.0;
      auVar19 = NEON_ext(auVar65,auVar65,8,1);
      auVar20._0_4_ = (local_b0 * fVar18 - fVar22 * fStack_a8) + auVar65._0_4_;
      auVar20._4_4_ = fStack_ac + auVar65._4_4_;
      auVar20._8_4_ = local_b0 * fVar22 + fVar18 * fStack_a8 + auVar19._0_4_;
      auVar20._12_4_ = fStack_a4 + 0.0;
      auVar16 = auVar20;
      if (local_28 != (long *)0x0) {
        lVar12 = local_28[0xb];
        piVar2 = (int *)(lVar12 + 0xc);
        do {
          iVar94 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar94 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar94 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_28 + 0x20))();
        }
      }
      FUN_00ad0ee4(param_3);
      fVar27 = auVar16._0_4_ - extraout_s0;
      fVar26 = auVar16._4_4_ - extraout_var_01;
      fVar24 = auVar16._8_4_ - extraout_var_02;
      fVar23 = (auVar20._0_4_ + (local_c0 * fVar18 - fVar22 * fStack_b8) + auVar65._0_4_) * 0.5;
      fVar25 = (auVar20._4_4_ + fStack_bc + auVar65._4_4_) * 0.5;
      fVar22 = (auVar20._8_4_ + local_c0 * fVar22 + fVar18 * fStack_b8 + auVar19._0_4_) * 0.5;
      uVar13 = (ulong)(fVar15 * (fVar21 / fVar78));
      pfVar1 = (float *)(puVar11 + (uVar13 >> 0x18 & 0xff) * 0x10);
      fVar15 = (float)((uint)uVar13 & 0xffffff) * 5.9604645e-08;
      fVar18 = pfVar1[1] + fVar15 * pfVar1[3];
      fVar21 = *pfVar1 + fVar15 * pfVar1[2];
      fVar92 = fVar21 - fVar18 * 0.0;
      fVar93 = fVar18 + fVar21 * 0.0;
      fVar78 = fVar21 * 0.0 - fVar18;
      fVar21 = fVar18 * 0.0 + fVar21;
      auVar72._0_4_ = fVar92 * fVar92;
      auVar72._4_4_ = 0;
      auVar72._8_4_ = fVar93 * fVar93;
      auVar72._12_4_ = 0;
      auVar16 = NEON_ext(auVar72,auVar72,8,1);
      fVar18 = auVar16._0_4_ + auVar72._0_4_;
      fVar77 = auVar16._4_4_ + 0.0;
      fVar15 = fVar18 + fVar77;
      fVar18 = fVar18 + fVar77;
      auVar73._8_8_ = CONCAT44(fVar18,fVar15);
      auVar73._0_8_ = CONCAT44(fVar18,fVar15);
      auVar16 = NEON_frsqrte(auVar73,4);
      iVar94 = -(uint)(fVar15 == 0.0);
      iVar95 = -(uint)(fVar18 == 0.0);
      iVar96 = -(uint)(fVar15 == 0.0);
      iVar97 = -(uint)(fVar18 == 0.0);
      auVar89._0_4_ = auVar16._0_4_ * fVar15;
      auVar89._4_4_ = auVar16._4_4_ * fVar18;
      auVar89._8_4_ = auVar16._8_4_ * fVar15;
      auVar89._12_4_ = auVar16._12_4_ * fVar18;
      auVar65 = NEON_frsqrts(auVar16,auVar89,4);
      auVar82._0_4_ = auVar16._0_4_ * auVar65._0_4_;
      auVar82._4_4_ = auVar16._4_4_ * auVar65._4_4_;
      auVar82._8_4_ = auVar16._8_4_ * auVar65._8_4_;
      auVar82._12_4_ = auVar16._12_4_ * auVar65._12_4_;
      auVar90._0_4_ = fVar15 * auVar82._0_4_;
      auVar90._4_4_ = fVar18 * auVar82._4_4_;
      auVar90._8_4_ = fVar15 * auVar82._8_4_;
      auVar90._12_4_ = fVar18 * auVar82._12_4_;
      auVar65 = NEON_frsqrts(auVar82,auVar90,4);
      fVar18 = (float)((ulong)DAT_0388a7e8 >> 0x20);
      fVar15 = (float)DAT_0388a7e8 + fVar18;
      fVar18 = (float)DAT_0388a7e8 + fVar18;
      uVar30 = SUB41(fVar18,0);
      uVar33 = (undefined1)((uint)fVar18 >> 8);
      uVar36 = (undefined1)((uint)fVar18 >> 0x10);
      uVar39 = (undefined1)((uint)fVar18 >> 0x18);
      auVar10[4] = uVar30;
      auVar10._0_4_ = fVar15;
      auVar10[5] = uVar33;
      auVar10[6] = uVar36;
      auVar10[7] = uVar39;
      auVar10[8] = SUB41(fVar15,0);
      auVar10[9] = (char)((uint)fVar15 >> 8);
      auVar10[10] = (char)((uint)fVar15 >> 0x10);
      auVar10[0xb] = (char)((uint)fVar15 >> 0x18);
      auVar10[0xc] = uVar30;
      auVar10[0xd] = uVar33;
      auVar10[0xe] = uVar36;
      auVar10[0xf] = uVar39;
      auVar16 = NEON_frsqrte(auVar10,4);
      fVar92 = auVar82._0_4_ * auVar65._0_4_ * fVar92;
      fVar77 = auVar82._4_4_ * auVar65._4_4_ * 0.0;
      fVar93 = auVar82._8_4_ * auVar65._8_4_ * fVar93;
      fVar91 = auVar82._12_4_ * auVar65._12_4_ * 0.0;
      bVar28 = SUB41(fVar92,0) & ~(byte)iVar94;
      bVar31 = (byte)((uint)fVar92 >> 8) & ~(byte)((uint)iVar94 >> 8);
      bVar34 = (byte)((uint)fVar92 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
      bVar37 = (byte)((uint)fVar92 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
      bVar40 = SUB41(fVar77,0) & ~(byte)iVar95;
      bVar42 = (byte)((uint)fVar77 >> 8) & ~(byte)((uint)iVar95 >> 8);
      bVar44 = (byte)((uint)fVar77 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10);
      bVar46 = (byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18);
      bVar48 = SUB41(fVar93,0) & ~(byte)iVar96;
      bVar50 = (byte)((uint)fVar93 >> 8) & ~(byte)((uint)iVar96 >> 8);
      bVar53 = (byte)((uint)fVar93 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10);
      bVar56 = (byte)((uint)fVar93 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18);
      auVar83._0_4_ = auVar16._0_4_ * fVar15;
      auVar83._4_4_ = auVar16._4_4_ * fVar18;
      auVar83._8_4_ = auVar16._8_4_ * fVar15;
      uVar8 = (undefined2)(CONCAT15(uVar33,CONCAT14(uVar30,fVar15)) >> 0x20);
      auVar83._12_4_ = auVar16._12_4_ * (float)CONCAT13(uVar39,CONCAT12(uVar36,uVar8));
      auVar65 = NEON_frsqrts(auVar16,auVar83,4);
      auVar74._0_4_ = auVar16._0_4_ * auVar65._0_4_;
      auVar74._4_4_ = auVar16._4_4_ * auVar65._4_4_;
      auVar74._8_4_ = auVar16._8_4_ * auVar65._8_4_;
      auVar74._12_4_ = auVar16._12_4_ * auVar65._12_4_;
      auVar84._0_4_ = fVar15 * auVar74._0_4_;
      auVar84._4_4_ = fVar18 * auVar74._4_4_;
      auVar84._8_4_ = fVar15 * auVar74._8_4_;
      auVar84._12_4_ = (float)CONCAT13(uVar39,CONCAT12(uVar36,uVar8)) * auVar74._12_4_;
      iVar94 = -(uint)(fVar15 == 0.0);
      iVar95 = -(uint)(fVar18 == 0.0);
      iVar96 = -(uint)(fVar15 == 0.0);
      iVar9 = -(uint)((float)CONCAT13(uVar39,CONCAT12(uVar36,uVar8)) == 0.0);
      auVar16 = NEON_frsqrts(auVar74,auVar84,4);
      fVar81 = auVar74._0_4_ * auVar16._0_4_ * (float)DAT_0388a140;
      fVar86 = auVar74._4_4_ * auVar16._4_4_ * (float)((ulong)DAT_0388a140 >> 0x20);
      fVar87 = auVar74._8_4_ * auVar16._8_4_ * (float)DAT_0388a148;
      fVar88 = auVar74._12_4_ * auVar16._12_4_ * (float)((ulong)DAT_0388a148 >> 0x20);
      auVar75._0_4_ = fVar78 * fVar78;
      auVar75._4_4_ = 0;
      auVar75._8_4_ = fVar21 * fVar21;
      auVar75._12_4_ = 0;
      auVar16 = NEON_ext(auVar75,auVar75,8,1);
      fVar18 = auVar16._0_4_ + auVar75._0_4_;
      fVar77 = auVar16._4_4_ + 0.0;
      fVar15 = fVar18 + fVar77;
      fVar18 = fVar18 + fVar77;
      auVar98._8_8_ = CONCAT44(fVar18,fVar15);
      auVar98._0_8_ = CONCAT44(fVar18,fVar15);
      auVar16 = NEON_frsqrte(auVar98,4);
      iVar68 = -(uint)(fVar15 == 0.0);
      iVar69 = -(uint)(fVar18 == 0.0);
      iVar70 = -(uint)(fVar15 == 0.0);
      iVar71 = -(uint)(fVar18 == 0.0);
      auVar99._0_4_ = auVar16._0_4_ * fVar15;
      auVar99._4_4_ = auVar16._4_4_ * fVar18;
      auVar99._8_4_ = auVar16._8_4_ * fVar15;
      auVar99._12_4_ = auVar16._12_4_ * fVar18;
      auVar65 = NEON_frsqrts(auVar16,auVar99,4);
      auVar100._0_4_ = auVar16._0_4_ * auVar65._0_4_;
      auVar100._4_4_ = auVar16._4_4_ * auVar65._4_4_;
      auVar100._8_4_ = auVar16._8_4_ * auVar65._8_4_;
      auVar100._12_4_ = auVar16._12_4_ * auVar65._12_4_;
      auVar76._0_4_ = fVar15 * auVar100._0_4_;
      auVar76._4_4_ = fVar18 * auVar100._4_4_;
      auVar76._8_4_ = fVar15 * auVar100._8_4_;
      auVar76._12_4_ = fVar18 * auVar100._12_4_;
      auVar16 = NEON_frsqrts(auVar100,auVar76,4);
      fVar15 = fVar27 * 0.5;
      fVar78 = fVar78 * auVar100._0_4_ * auVar16._0_4_;
      fVar18 = auVar100._4_4_ * auVar16._4_4_ * 0.0;
      fVar21 = fVar21 * auVar100._8_4_ * auVar16._8_4_;
      fVar77 = auVar100._12_4_ * auVar16._12_4_ * 0.0;
      fVar93 = (float)CONCAT13((byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                               CONCAT12((byte)((uint)fVar78 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar78 >> 8) &
                                                  ~(byte)((uint)iVar68 >> 8),
                                                  SUB41(fVar78,0) & ~(byte)iVar68)));
      auVar63._0_8_ =
           CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18),
                    CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10),
                             CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar69 >> 8),
                                      CONCAT14(SUB41(fVar18,0) & ~(byte)iVar69,fVar93))));
      auVar63[8] = SUB41(fVar21,0) & ~(byte)iVar70;
      auVar63[9] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar70 >> 8);
      auVar63[10] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
      auVar63[0xb] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
      auVar67[0xc] = SUB41(fVar77,0) & ~(byte)iVar71;
      auVar67._0_12_ = auVar63;
      auVar67[0xd] = (byte)((uint)fVar77 >> 8) & ~(byte)((uint)iVar71 >> 8);
      auVar67[0xe] = (byte)((uint)fVar77 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
      auVar67[0xf] = (byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
      fVar78 = local_90 - fVar23;
      fVar21 = fStack_8c - fVar25;
      fVar77 = fStack_88 - fVar22;
      fVar92 = fStack_84 - 0.0;
      fVar18 = fVar78 * (float)CONCAT13(bVar37,CONCAT12(bVar34,CONCAT11(bVar31,bVar28)));
      fVar79 = fVar21 * (float)CONCAT13(bVar46,CONCAT12(bVar44,CONCAT11(bVar42,bVar40)));
      fVar80 = fVar77 * (float)CONCAT13(bVar56,CONCAT12(bVar53,CONCAT11(bVar50,bVar48)));
      fVar91 = fVar92 * (float)CONCAT13((byte)((uint)fVar91 >> 0x18) & ~(byte)((uint)iVar97 >> 0x18)
                                        ,CONCAT12((byte)((uint)fVar91 >> 0x10) &
                                                  ~(byte)((uint)iVar97 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar91 >> 8) &
                                                           ~(byte)((uint)iVar97 >> 8),
                                                           SUB41(fVar91,0) & ~(byte)iVar97)));
      auVar16._4_4_ = fVar79;
      auVar16._0_4_ = fVar18;
      auVar16._8_4_ = fVar80;
      auVar16._12_4_ = fVar91;
      auVar19._4_4_ = fVar79;
      auVar19._0_4_ = fVar18;
      auVar19._8_4_ = fVar80;
      auVar19._12_4_ = fVar91;
      auVar16 = NEON_ext(auVar16,auVar19,8,1);
      fVar18 = auVar16._0_4_ + fVar18 + auVar16._4_4_ + fVar79;
      fVar27 = fVar27 * -0.5;
      if (fVar18 <= fVar15) {
        fVar15 = fVar18;
      }
      if (fVar27 <= fVar15) {
        fVar27 = fVar15;
      }
      fVar15 = fVar26 * 0.5;
      bVar29 = SUB41(fVar81,0) & ~(byte)iVar94;
      bVar32 = (byte)((uint)fVar81 >> 8) & ~(byte)((uint)iVar94 >> 8);
      bVar35 = (byte)((uint)fVar81 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
      bVar38 = (byte)((uint)fVar81 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
      bVar41 = SUB41(fVar86,0) & ~(byte)iVar95;
      bVar43 = (byte)((uint)fVar86 >> 8) & ~(byte)((uint)iVar95 >> 8);
      bVar45 = (byte)((uint)fVar86 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10);
      bVar47 = (byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18);
      bVar49 = SUB41(fVar87,0) & ~(byte)iVar96;
      bVar51 = (byte)((uint)fVar87 >> 8) & ~(byte)((uint)iVar96 >> 8);
      bVar54 = (byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10);
      bVar57 = (byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18);
      auVar85._0_4_ = fVar78 * (float)CONCAT13(bVar38,CONCAT12(bVar35,CONCAT11(bVar32,bVar29)));
      auVar85._4_4_ = fVar21 * (float)CONCAT13(bVar47,CONCAT12(bVar45,CONCAT11(bVar43,bVar41)));
      auVar85._8_4_ = fVar77 * (float)CONCAT13(bVar57,CONCAT12(bVar54,CONCAT11(bVar51,bVar49)));
      auVar85._12_4_ =
           fVar92 * (float)CONCAT13((byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                                    CONCAT12((byte)((uint)fVar88 >> 0x10) &
                                             ~(byte)((uint)iVar9 >> 0x10),
                                             CONCAT11((byte)((uint)fVar88 >> 8) &
                                                      ~(byte)((uint)iVar9 >> 8),
                                                      SUB41(fVar88,0) & ~(byte)iVar9)));
      auVar62._0_4_ = fVar78 * fVar93;
      fVar78 = (float)((ulong)auVar63._0_8_ >> 0x20);
      auVar62._4_4_ = fVar21 * fVar78;
      auVar62._8_4_ = fVar77 * auVar63._8_4_;
      auVar62._12_4_ = fVar92 * auVar67._12_4_;
      auVar16 = NEON_ext(auVar62,auVar62,8,1);
      auVar65 = NEON_ext(auVar85,auVar85,8,1);
      fVar18 = auVar65._0_4_ + auVar85._0_4_ + auVar65._4_4_ + auVar85._4_4_;
      if (fVar18 <= fVar15) {
        fVar15 = fVar18;
      }
      fVar26 = fVar26 * -0.5;
      if (fVar26 <= fVar15) {
        fVar26 = fVar15;
      }
      fVar18 = auVar16._0_4_ + auVar62._0_4_ + auVar16._4_4_ + auVar62._4_4_;
      fVar15 = fVar24 * 0.5;
      uVar30 = SUB41(fVar15,0);
      uVar33 = (undefined1)((uint)fVar15 >> 8);
      uVar36 = (undefined1)((uint)fVar15 >> 0x10);
      uVar39 = (undefined1)((uint)fVar15 >> 0x18);
      fVar24 = fVar24 * -0.5;
      if (fVar18 <= fVar15) {
        uVar30 = SUB41(fVar18,0);
        uVar33 = (undefined1)((uint)fVar18 >> 8);
        uVar36 = (undefined1)((uint)fVar18 >> 0x10);
        uVar39 = (undefined1)((uint)fVar18 >> 0x18);
      }
      if (fVar24 <= (float)CONCAT13(uVar39,CONCAT12(uVar36,CONCAT11(uVar33,uVar30)))) {
        fVar24 = (float)CONCAT13(uVar39,CONCAT12(uVar36,CONCAT11(uVar33,uVar30)));
      }
      local_a0 = fVar23 + fVar27 * (float)CONCAT13(bVar37,CONCAT12(bVar34,CONCAT11(bVar31,bVar28)))
                 + fVar26 * (float)CONCAT13(bVar38,CONCAT12(bVar35,CONCAT11(bVar32,bVar29))) +
                 fVar24 * fVar93;
      fStack_9c = fVar25 + fVar27 * (float)CONCAT13(bVar46,CONCAT12(bVar44,CONCAT11(bVar42,bVar40)))
                  + fVar26 * (float)CONCAT13(bVar47,CONCAT12(bVar45,CONCAT11(bVar43,bVar41))) +
                  fVar24 * fVar78;
      fStack_98 = fVar22 + fVar27 * (float)CONCAT13(bVar56,CONCAT12(bVar53,CONCAT11(bVar50,bVar48)))
                  + fVar26 * (float)CONCAT13(bVar57,CONCAT12(bVar54,CONCAT11(bVar51,bVar49))) +
                  fVar24 * auVar63._8_4_;
      fStack_84 = 0.0 - fStack_84;
      goto LAB_00ad16f0;
    }
LAB_00ad170c:
    uVar14 = 0;
  }
  if (local_68 != (long *)0x0) {
    lVar12 = local_68[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar94 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar94 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar94 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return uVar14;
}


